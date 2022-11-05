#include <iostream>
std::string invalid_length() { return "Неверная длина, до свиданья"; }
int function(std::string str, int forbidden_length) {
	if (forbidden_length == str.length()) throw invalid_length;
	return str.length();
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	std::cout << "Введите запретную длину " << std::endl;
	std::cin >> a;
	std::string str;
	do {
		std::cout << "Введите слово" << std::endl;
		std::cin >> str;
		try
		{
						std::cout << "Длина слова  " << str << "  равна   " << function(str, a) << std::endl;
		}
		catch (...) { std::cout << invalid_length(); }
	} while (a != str.length());
}

