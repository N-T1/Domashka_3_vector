#include <iostream>
#include <cmath>
#include "vector.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    Vector V1(2, 3);
    Vector V2(10, -6);

    Vector V3 = V1 - V2;
    Vector V4 = V1 + V2;
    //Vector V3 = V1.operator+ (V2);

    cout << "Длина вектора равна " << V1.Ln() << endl;
    cout << "Направляющий косинус по оси х равен " << V1.Cosx() << endl;
    cout << "Направляющий косинус по оси у равен " << V1.Cosy() << endl;

    cout << endl;

    V3.PrintKoord();
    V4.PrintKoord();

}