#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    void setNum(int n1,int n2){
        a = n1;
        b = n2;
    }
    
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNum(){
        cout << "your num is " << a << "+" << b << "i"<<endl;
    }
  
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNum(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main(){
    
    Complex c1, c2,sum;
    c1.setNum(1, 4);
    c2.setNum(5, 8);
    c1.printNum();
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();
    return 0;
}

//properties of friend functions
/*
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot br called from the obj of that class. c1.sumComplex()==invalid
3. can be invoked without the help of any object
4. usually contains object as arg
5. can be declared inside public or pvt section of the class

*/