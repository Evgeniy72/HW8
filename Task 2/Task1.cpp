
#include <iostream>
#include "classes.h"
#include "error.h"

int main(){
		setlocale(LC_ALL, "Russian");
		try {
		Figure zero;
		std::cout << zero.get_name() << " с количеством сторон " << zero.get_sides_count() << "создана" << std::endl;
	}
		catch (const error& ex) {
			Figure zero;
			std::cout << zero.get_name() << " с количеством сторон " << zero.get_sides_count() << " не создана " << ex.what() << std::endl;
		}
		Triangle one;
		one.print();
		Quadrangle two;
		two.print();
		Triangle_pryam three;
		three.print();
		Triangle_ravnobedr four;
		four.print();
		Triangle_ravnostoron five;
		five.print();
		Pryamougol six;
		six.print();
		Kvadrat seven;
		seven.print();
		Parallelogram eleven;
		eleven.print();
		Romb eight;
		eight.print();
	
}
