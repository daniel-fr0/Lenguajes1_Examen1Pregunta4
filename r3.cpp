#include "VectorR3.h"

int main() {
    VectorR3 a(1, 2, 3);
    VectorR3 b(4, 5, 6);
    VectorR3 c(7, 8, 9);

	// Operaciones entre vectores
    cout << b + c << endl;
	cout << a * b + c << endl;
	cout << (b + b) * (c - a) << endl;
	cout << a % (c * b) << endl;

	// Operaciones con vectores y escalares
	cout << b + 3 << endl;
	cout << a * 3.0 + &b << endl;
	cout << (b + b) * (c % a) << endl;

    return 0;
}