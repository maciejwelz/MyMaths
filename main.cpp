#include <iostream>
#include "functions.h"
#include <cmath>
using namespace std;


int main()
{
int x;

cout << "Welcome, this is calculator for some chosen mathematical functions. Choose what do you want to count: " << endl;


cout << "1 - greatest common divisor" << endl;
cout << "2 - length of hypotenuse from Pythagorean theorem" << endl;
cout << "3 - sum of angles in polygon" << endl;
cout << "4 - area of Triangle" << endl;
cout << "5 - area of trapezium" << endl;

cin >> x;

   switch(x)
   {
       case 1:
            int a, b;
    cout << "give the first number: " << endl;
    cin >> a;
    cout << "give the second number: " << endl;
    cin >> b;

cout << "Greatest common divisor of these numbers is: " << GCD(a, b);

        break;


       case 2:
            double c, d;
    cout << "give the length of the first cathetus: " << endl;
    cin >> c;
    cout << "give the length of the second cathetus: " << endl;
    cin >> d;

cout << "Length of hypotenuse equals: " <<  hypotenuse(c, d);

        break;


       case 3:
            int e;
    cout << "give amount of flanks in polygon: " << endl;
    cin >> e;

    if(e>=3)
cout << "Sum of angles in this polygon equals: " << SumOfAngles(e);
    else
cout << "This polygon doesn't exist";

        break;


        case 4:
            double f, g;
    cout << "give length of radix of triangle: " << endl;
    cin >> f;
    cout << "give the length of perpendicular of triangle: " << endl;
    cin >> g;

cout << "Area of this triangle equals: " << AreaOfTriangle(f, g);

        break;


        case 5:
            double h, i, j;
    cout << "give length of the first radix of trapezium:" << endl;
    cin >> h;
    cout << "give length of the second radix of trapezium:" << endl;
    cin >> i;
    cout << "give the length of perpendicular of trapezium:" << endl;
    cin >> j;

cout << "Area of this trapezium equals: " << AreaOfTrapezium(h, i, j);
   }


   return 0;
}
