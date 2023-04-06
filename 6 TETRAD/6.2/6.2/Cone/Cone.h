#pragma once
#include "ostream"

using namespace std;

class Cone {
	double x, y, z;        // ���������� ����������
	double radius;         // ������
	double height;         // ������
public:
	// ����������� �� ���������
	Cone();
	// ����������� � ������� � ������ ���������
	Cone(double r, double h);
	// ����������� ��� Cone
	Cone(double a, double b, double c, double r, double h);

	// ������� �������
	void setCoordinate(double a, double b, double c);
	void setRadius(double r);
	void setHeight(double h);
	double getRadius() const;
	double getHeight() const;

	virtual // ������� � �����
		double area() const;

	virtual double volume() const;

	double getX() const;
	double getY() const;
	double getZ() const;

	// ���������� ��������� ������
	friend ostream &operator<<(ostream &stream, const Cone& obj);
};