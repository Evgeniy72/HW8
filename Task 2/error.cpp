#include "error.h"
#include <iostream>
const char* error::what() const { return "Количество сторон не равно 0"; }