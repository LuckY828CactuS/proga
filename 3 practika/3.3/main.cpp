#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	int n;
	cout << "  number ";
	cin >> n;
	auto* arr = new Rational[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		cout << " numerator " << i + 1 << " rational: ";
		cin >> a;
		cout << " denominator  " << i + 1 << " rational: ";
		cin >> b;
		arr[i].set(a, b);
	}
	
	for (int i = 0; i < n; i++) {
		arr[i].show();
		cout << "\n";
	}

	Rational sum;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	cout << "Sum  ";
	sum.show();
	cout << "\n";

	Rational sub;
	for (int i = 0; i < n; i++) {
		sub = sub - arr[i];
	}
	cout << "Subtraction  ";
	sub.show();
	cout << "\n";

	delete[] arr;
	return 0;
}