#include <iostream>
#include <string>

std::string UpString(std::string str) {
  std::string result;

  for (size_t i = 0; str[i]; ++i) {
    result.push_back(toupper(str[i]));
  }
  return (result);
}

int main(int ac, char *av[]) {
  if (ac >= 2) {
    for (int i = 1; i < ac; i++)
      std::cout << UpString(av[i]);
  } else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  std::cout << '\n';
}
