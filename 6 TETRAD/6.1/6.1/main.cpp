#include "Cone.h"
#include <iostream>

using namespace std;


int main()
{
	Cone c1(3, 7);              // ����� � ������� � ������ ��������� � �������� 3 � ������ 7
	Cone c2(1, 2, 3, 5, 10);    // ������������ �����

	cout << "Cone 1: " << c1;
	cout << "Surface area: " << c1.area() << "\n";
	cout << "Volume: " << c1.volume() << "\n";

	cout << "Cone 2: " << c2;
	cout << "Surface area: " << c2.area() << "\n";
	cout << "Volume: " << c2.volume() << "\n";

	return 0;
}