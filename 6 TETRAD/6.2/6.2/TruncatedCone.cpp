#include "TruncatedCone.h"
#include "sstream"

using namespace std;

const double pi = 3.14159265;

TruncatedCone::TruncatedCone() {
	setCoordinate(0, 0, 0);
	setRadius(0);
	radius2 = 0;
	setHeight(0);
}

TruncatedCone::TruncatedCone(double r1, double r2, double h) {
	setCoordinate(0.0, 0.0, 0.0);
	setRadius(r1);
	radius2 = r2;
	setHeight(h);
}

TruncatedCone::TruncatedCone(double a, double b, double c, double r1, double r2, double h) {
	setCoordinate(a, b, c);
	setRadius(r1);
	radius2 = r2;
	setHeight(h);
}

double TruncatedCone::getRadius2() const {
	return radius2;
}