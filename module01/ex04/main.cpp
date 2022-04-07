#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

using std::cerr;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::string;

string replace(const string &s, const string &target, const string &replacement) {

    size_t target_index = s.find(target);
    if (target_index == string::npos)
        return s;

    string tmp{};
    tmp.append(s.substr(0, target_index));
    tmp.append(replacement);
    tmp.append(s.substr(target_index + target.length()));

    return replace(tmp, target, replacement);
}

int main(int ac, char **av) {

    if (ac != 4) {
        cerr << "SFL: <filename> <target> <replacement>\n";
        return 1;
    }

    const string file_name(av[1]), target(av[2]), replacement(av[3]);

    const string new_file_name(file_name + ".replace");

    ifstream file;
    ofstream new_file;

    file.open(file_name.c_str(), ios::in);
    new_file.open(new_file_name.c_str(), ios::out);

    if (!file.is_open()) {
        string err("SFL : " + file_name + " ");
        perror(err.c_str());
        return 1;
    }

    if (file.peek() == EOF) {
        cerr << "SFL: empty file\n";
        return 1;
    }

    if (!new_file.is_open()) {
        string error = "SFL : failed to create '.replace' file ";
        perror(error.c_str());
        return 1;
    }

    string line;

    while (std::getline(file, line)) {
        new_file << replace(line, target, replacement) << "\n";
    }

    file.close();
    new_file.close();
}
