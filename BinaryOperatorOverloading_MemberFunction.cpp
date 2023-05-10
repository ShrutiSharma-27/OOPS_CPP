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
    //as a member function
    complex operator +(complex c);
    void display();
};

complex complex::operator +(complex c){
    complex temp;
    temp.x = x+c.x;
    temp.y = y+c.y;
    return temp;
}

void complex::display(){
    cout<<x<<" + j"<<y;
}

int main(){
    complex c1,c2,c3;
    c1=complex(2.5,1.0);
    c2=complex(1.2,3.0);
    c3=c1+c2;
    c3.display();
    return 0;
}

//output
//3.7 + j4
