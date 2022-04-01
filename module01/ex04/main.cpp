#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

using std::cerr;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::string;

string replace(const string &s, const string target, const string replacment) {

  size_t target_index = s.find(target);
  if (target_index == string::npos)
    return s;

  string tmp;
  tmp.append(s.substr(0, target_index));
  tmp.append(replacment);
  tmp.append(s.substr(target_index + target.length()));

  return replace(tmp, target, replacment);
}

int main(int ac, char **av) {

  if (ac != 4) {
    cerr << "SFL: <filename> <target> <replacment>\n";
    return 1;
  }

  const string file_name(av[1]), target(av[2]), replacment(av[3]);

  const string new_file_name(file_name + ".replace");

  ifstream file;
  ofstream new_file;

  file.open(file_name, ios::in);
  new_file.open(new_file_name, ios::out);

  if (file.is_open() == false) {
    string err("SFL : " + file_name + " ");
    perror(err.c_str());
    return 1;
  }

  if (file.peek() == EOF) {
    cerr << "SFL: empty file\n";
    return 1;
  }

  if (new_file.is_open() == false) {
    string error = "SFL : failed to create '.replace' file ";
    perror(error.c_str());
    return 1;
  }

  string line;

  while (std::getline(file, line)) {
    new_file << replace(line, target, replacment) << "\n";
  }

  file.close();
  new_file.close();
}
