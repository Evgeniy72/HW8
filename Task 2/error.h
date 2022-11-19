#pragma once
#include <iostream>
class error : public std::exception {
public:
	const char* what() const override;
	const char* what1();
	const char* what2();
	const char* what3();
	const char* what4();
	const char* what5();
	const char* what6();
	const char* what7();
	const char* what8();
	const char* what9();
	};