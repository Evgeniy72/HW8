#include "classes.h"
#include <iostream>
	int Figure::get_sides_count() {
		return sides_count;
	}
	std::string Figure::get_name() {
		return name;
	}
	void Triangle::print() {
		std::cout << name << std::endl << " с углами " << a << ", " << b << ", " << c << "   и сторонами   " << A << ", " << B << ", " << C << std::endl;
	}
		void Quadrangle::print() {
		std::cout << name << std::endl << " с углами " << a << ", " << b << ", " << c << ",  " << d << "   и сторонами   " << A << ", " << B << ", " << C << ", " << D << std::endl;
	}
