#include <iostream>
#include <string>

std::string UpString(char str[])
{
	std::string result;

	for (int8_t i = 0; str[i]; i++)
	{
		result.push_back(toupper(str[i]));		
	}
	return (result);
}

int main(int ac, char *av[])
{
	if (ac >= 2)
	{
		for (int8_t i = 1; i < ac; i++)
			std::cout << UpString(av[i]);
	}
	else
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
}
