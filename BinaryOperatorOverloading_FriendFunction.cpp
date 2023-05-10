#include <iostream>
using namespace std;
//implementation of binary operator overloading
class complex{
    double x; //real
    double y; //imaginary
    
    public:
    complex(){} //constructor 1
    complex(double a, double b){
        x=a; y=b;
    } //constructor 2
    //as a friend function
    friend complex operator +(complex c1, complex c2);
    void display();
};

complex operator +(complex c1, complex c2){
    complex temp;
    temp.x=c1.x+c2.x;
    temp.y=c1.y+c2.y;
    return temp;
}

void complex::display(){
    cout<<x<<" + j"<<y;
}

int main(){
    complex C1,C2,C3;
    C1=complex(2.5,1.0);
    C2=complex(1.2,3.0);
    C3=C1+C2;
    C3.display();
    return 0;
}

//ouput
//3.7 + j4
