#include <iostream>
#include <cmath>

using namespace std;

class VectorR3 {
public:
    VectorR3(double x, double y, double z) : x(x), y(y), z(z) {}

	// Operaciones vectoriales
    VectorR3 operator+(const VectorR3& other) const {
        return VectorR3(x + other.x, y + other.y, z + other.z);
    }

    VectorR3 operator-(const VectorR3& other) const {
        return VectorR3(x - other.x, y - other.y, z - other.z);
    }

    VectorR3 operator*(const VectorR3& other) const {
        return VectorR3(y*other.z - z*other.y, z*other.x - x*other.z, x*other.y - y*other.x);
    }

    double operator%(const VectorR3& other) const {
        return x*other.x + y*other.y + z*other.z;
    }

    double operator&() const {
        return sqrt(x*x + y*y + z*z);
    }

	// Operaciones con escalares
	VectorR3 operator+(double scalar) const {
		return VectorR3(x + scalar, y + scalar, z + scalar);
	}

	VectorR3 operator-(double scalar) const {
		return VectorR3(x - scalar, y - scalar, z - scalar);
	}

	VectorR3 operator*(double scalar) const {
		return VectorR3(x * scalar, y * scalar, z * scalar);
	}

    // Representación en salida estándar
    friend ostream& operator<<(ostream& os, const VectorR3& v) {
        os << v.x << "i + " << v.y << "j + " << v.z << "k";
        return os;
    }

    // Getters
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

private:
    double x, y, z;
};
