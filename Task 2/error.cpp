#include "error.h"
#include <iostream>
const char* error::what() const { return "������ �� �������, ���������� ������ �� ����� ���� ����� 0"; };
const char* error::what1(){ return "������ �� �������, ���������� ����� �� ����� 3 ��� ����� ����� �� ����� 180"; }
const char* error::what2() { return "������ �� �������, ���������� ����� �� ����� 4 ��� ����� ����� �� ����� 360"; }
const char* error::what3() { return "������ �� �������, ���� � �� ����� 90"; }
const char* error::what4() { return "������ �� �������, ������� � � � �� ����� ���� ���� � � � �� �����"; }
const char* error::what5() { return "������ �� �������, �� ����� ��� ���� ���� �������"; }
const char* error::what6() { return "������ �� �������, � �� ����� � ���� b �� ����� d, ���� ����� �� ���� �� ����� 90"; }
const char* error::what7() { return "������ �� �������, �� ����� ��� ������� ���� ��� ���� �� ����� 90"; }
const char* error::what8() { return "������ �� �������, ������� �� ����� ������� ���� ����"; }
const char* error::what9() { return "������ �� �������, ���� �� ����� ��� ������� ���� ������� ����"; }