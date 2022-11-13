#pragma once
#include <iostream>
class error : public std::exception {
public:
	const char* what() const override;
};