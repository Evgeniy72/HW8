#pragma once
#include <iostream>
class Figure {
protected:
	int sides_count;
	std::string name;
	int a, b, c, A, B, C;
public:
	int get_sides_count();
	std::string get_name();
		Figure() {
			if (sides_count != 0) throw error();
		sides_count = 0;
		name = "Фигура";
			}
};
class Triangle : public Figure {
public:
	void print();
		Triangle() {
		sides_count = 3;
		name = "Треугольник";
		a = 30; b = 60; c = 90; A = 5; B = 6; C = 7;
				}
};
class Quadrangle : public Triangle {
protected:
	int d, D;
public:
	Quadrangle() {
		sides_count = 4;
		name = "Четырехугольник";
		a = 60; b = 120; c = 60; d = 120; A = 5; B = 6; C = 5; D = 6;
		}
	void print();
};
class Triangle_pryam : public Triangle {
public:
	Triangle_pryam() {
		name = "Прямоугольный треугольник";
		a = 60; b = 120; c = 90; A = 5; B = 6; C = 5;
	}
};
class Triangle_ravnobedr : public Triangle {
public:
	Triangle_ravnobedr() {
		name = "Равнобедренный треугольник";
		a = c = 60; b = 120; A = C = 5; B = 6;
	}
};
class Triangle_ravnostoron : public Triangle {
public:
	Triangle_ravnostoron() {
		name = "Равносторонний треугольник";
		a = c = b = 60; A = C = B = 6;
	}
};
class Pryamougol : public Quadrangle {
public:
	Pryamougol() {
		name = "Прямоугольник";
		a = c = b = d = 90; A = C = 10; D = B = 6;
	}
};
class Kvadrat : public Quadrangle {
public:
	Kvadrat() {
		name = "Квадрат";
		a = c = b = d = 90; A = C = D = B = 6;
	}
};
class Parallelogram : public Quadrangle {
public:
	Parallelogram() {
		name = "Параллелограм";
		a = c = 60; b = d = 90; A = C = 7; D = B = 6;
	}
};
class Romb : public Quadrangle {
public:
	Romb() {
		name = "Ромб";
		a = c = 60; b = d = 90; A = C = D = B = 6;
	}
};