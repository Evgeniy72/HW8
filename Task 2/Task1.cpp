
#include <iostream>
#include "classes.h"
#include "error.h"

int main(){
		setlocale(LC_ALL, "Russian");
		try {
		Figure zero;
		std::cout << zero.get_name() << " с количеством сторон " << zero.get_sides_count() << " создана" << std::endl;
	}
		catch (const error& ex) {
			std::cout << ex.what() << std::endl;
		}
		try {
		Triangle one;
		one.print();
		}
		catch (error ex) {
			std::cout << ex.what1() << std::endl;
		}
		try {
		Quadrangle two;
		two.print();
		}
		catch (error ex) {
			std::cout << ex.what2() << std::endl;
		}
		try {
		Triangle_pryam three;
		three.print();
		}
		catch (error ex) {
			std::cout << ex.what3() << std::endl;
		}
		try {
		Triangle_ravnobedr four;
		four.print();
		}
		catch (error ex) {
			std::cout << ex.what4() << std::endl;
		}
		try {
			Triangle_ravnostoron five;
			five.print();
		}
		catch (error ex) {
			std::cout << ex.what5() << std::endl;
		}
		try {
		Pryamougol six;
		six.print();
		}
		catch (error ex) {
			std::cout << ex.what6() << std::endl;
		}
		try {
			Kvadrat seven;
			seven.print();
		}
		catch (error ex) {
			std::cout << ex.what7() << std::endl;
		}
		try {
		Parallelogram eleven;
		eleven.print();
		}
		catch (error ex) {
			std::cout << ex.what8() << std::endl;
		}
		try {
			Romb eight;
			eight.print();
		}
		catch (error ex) {
			std::cout << ex.what9() << std::endl;
		}
	
}
