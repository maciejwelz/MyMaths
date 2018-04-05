#include <cmath>

int AreaOfTriangle(double a, double h)
{
    return (a*h/2);
}

int AreaOfTrapezium(double a, double b, double h)
{
    return((a+b)*h/2);
}

int SumOfAngles(int a)
{
    if(a>=3)
    return((a-2)*180);
}


int hypotenuse(double a, double b)
{
    return(sqrt(a*a+b*b));
}


int GCD(int a, int b)
{
        do
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    while(a!=b);

    return a;
}

