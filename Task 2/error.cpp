#include "error.h"
#include <iostream>
const char* error::what() const { return "Фигура не создана, количество сторон не может быть равно 0"; };
const char* error::what1(){ return "Фигура не создана, Количество стоно не равно 3 или сумма углов не равна 180"; }
const char* error::what2() { return "Фигура не создана, Количество стоно не равно 4 или сумма углов не равна 360"; }
const char* error::what3() { return "Фигура не создана, Угол с не равен 90"; }
const char* error::what4() { return "Фигура не создана, Стороны А и С не равны либо углы а и с не равны"; }
const char* error::what5() { return "Фигура не создана, не равны все углы либо стороны"; }
const char* error::what6() { return "Фигура не создана, а не равно с либо b не равно d, либо какой то угол не равен 90"; }
const char* error::what7() { return "Фигура не создана, не равны все стороны либо все углы не равны 90"; }
const char* error::what8() { return "Фигура не создана, попарно не равны стороны либо углы"; }
const char* error::what9() { return "Фигура не создана, либо не равны все стороны либо попарно углы"; }