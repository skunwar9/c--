#include <iostream>
using namespace std;

// forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    friend int Calculator::sumRealComplex(Complex o1, Complex o2);

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNum()
    {
        cout << "your num is " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{

    return 0;
}