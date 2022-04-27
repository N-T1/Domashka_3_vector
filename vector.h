#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class Vector
{
private:
    double Length = 0;
    /*   double x1 = 0;
       double y1 = 0;
       double x2 = 0;
       double y2 = 0;*/
    double x = 0;
    double y = 0;
    double Cos_x = 0;
    double Cos_y = 0;

public:

    Vector();

    Vector(double x, double y);

    // Vector(double x1, double x2, double y1, double y2);

    double Ln();

    double Cosx();

    double Cosy();

    Vector operator+ (const Vector& t) const;

    Vector operator- (const Vector& t) const;

    void PrintKoord();

};


#endif
#pragma once

