#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

class vec3 {
public:
	int x, y, z;

	vec3() : x(0), y(0), z(0) { }
	vec3(int px, int py, int pz) : x(px), y(py), z(pz) { }
	vec3(const vec3& v) :x(v.x), y(v.y), z(v.z) {}


	bool operator==(const vec3 g) const
	{
		if ((g.x == x) && (g.y == y) && (g.z == z)) {
			return 1;
		}
		else {
			return 0;
		}
	}

	vec3 operator+(const vec3 g) const
	{
		vec3 newVec;
		newVec.x = x + g.x;
		newVec.y = y + g.y;
		newVec.z = z + g.z;
		return newVec;

	}
	vec3 operator-(const vec3 g) const
	{
		vec3 newVec;
		newVec.x = x - g.x;
		newVec.y = y - g.y;
		newVec.z = z - g.z;
		return newVec;

	}

	void operator+=(const vec3 g) 
	{
		x = x + g.x;
		y = y + g.y;
		z = z + g.z;

	}
	void operator-=(const vec3 g)
	{
		x = x - g.x;
		y = y - g.y;
		z = z - g.z;

	}

	void operator=(const vec3 g)
	{
		x = g.x;
		y = g.y;
		z = g.z;

	}

	void Normalize() {
		int module = (x * x) + (y * y) + (z * z);
		x = x / sqrt(module);
		y = y / sqrt(module);
		z = z / sqrt(module);
	}
	void Zero() {
		x = 0;
		y = 0;
		z = 0;
	}
	bool IsZero() {
		if ((x == 0) && (y == 0) && (z == 0)) {
			return 1;
		}
		else return 0;
	}

	float DistanceTo(const vec3 g) const {
		
		float a = sqrt(((g.x - x) ^ 2) + ((g.y - y) ^ 2) + ((g.z - z) ^ 2));
		return a;

	}

};



int main() {

	system("pause");
	return 0;
}



