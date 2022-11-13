#include <iostream>
class Invalid : public std::exception
{
public:
	const char* what() const override { return "Неверная длина, до свиданья"; }
};
int function(std::string str, int forbidden_length) {
	if (forbidden_length == str.length()) throw Invalid();
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
		catch (const Invalid& ex) { std::cout << ex.what(); }
		catch (...) { std::cout << "Неизвестная ошибка"; }
	} while (a != str.length());
}

