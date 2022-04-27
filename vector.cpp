#include "vector.h"
#include <iostream>
#include <cmath>
using namespace std;

Vector::Vector()
{

};

Vector::Vector(double x, double y)
{
    this->x = x;
    this->y = y;
};

//Vector::Vector(double x1, double x2, double y1, double y2)
//{
//    this->x1 = x1;
//    this->x2 = x2;
//    this->y1 = y1;
//    this->y2 = y2;
//   
//};

double Vector::Ln()
{
    // return (3.14 * pow(Radius, 2));
    Length = sqrt(pow(x, 2) + pow(y, 2));
    return  Length;
}

double Vector::Cosx()
{
    Cos_x = x / sqrt(pow(x, 2) + pow(y, 2));
    return Cos_x;
}

double Vector::Cosy()
{
    Cos_y = y / sqrt(pow(x, 2) + pow(y, 2));
    return Cos_y;
}

Vector Vector::operator+ (const Vector& t) const
{
    Vector vec;
    vec.x = this->x + t.x;
    vec.y = this->y + t.y;
    return vec;
}

Vector Vector::operator- (const Vector& t) const
{
    Vector vec;
    vec.x = this->x - t.x;
    vec.y = this->y - t.y;
    return vec;
}

void Vector::PrintKoord()
{
    cout << "Координаты вектора равны { " << x << " , " << y << " }" << endl;;
}