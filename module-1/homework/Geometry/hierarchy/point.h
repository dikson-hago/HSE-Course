#pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>
<<<<<<< HEAD

#include <cmath>

#include <vector>

=======
#include <cmath>
#include <vector>
>>>>>>> c02a9c51073af2aeb3ecac63b686daabced17a76
#include <algorithm>

class Vector {
public:
<<<<<<< HEAD
    Vector();
    Vector(double x, double y, double vector_len)
        : x(x), y(y), vector_len(vector_len) {}
    double vector_len;
    double x, y;
    double len();
    const Vector operator*(const double value);
    ~Vector() = default;
};

class Point {
public:
    double x, y;
    const bool operator==(const Point& new_point);
    const bool operator!=(const Point& new_point);
    const void operator=(const Point& new_point);
    Point(double x, double y);
    Point(const Point& point);
    Point();
    ~Point() = default;
};

#endif
=======
	Vector();
	Vector(double x, double y, double vector_len) : x(x), y(y), vector_len(vector_len) {}
	double vector_len;
	double x, y;
	double len();
	const Vector operator * (const double value);
	~Vector() = default;
};

class Point
{
public:
	double x, y;
	const bool operator == (const Point& new_point);
	const bool operator != (const Point& new_point);
	const void operator = (const Point& new_point);
	Point(double x, double y);
	Point(const Point& point);
	Point();
	~Point() = default;
};

#endif

>>>>>>> c02a9c51073af2aeb3ecac63b686daabced17a76
