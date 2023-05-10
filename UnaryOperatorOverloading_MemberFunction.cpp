// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//implementation using friend function and void return type
class Sample{
    int x;
    int y;
    
    public :
    void setValue(int a, int b);
    void operator -();
    void show();
};

void Sample::setValue(int a, int b){
    x=a; y=b;
}

void Sample::operator -(){
    x = -x;
    y = -y;
}

void Sample::show(){
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}

int main(){
    Sample s1;
    s1.setValue(5,-2);
    cout<<"Earlier : "<<endl;
    s1.show();
    -s1;
    cout<<"After operation : "<<endl;
    s1.show();
    return 0;
}

//output
/*
Earlier : 
x=5
y=-2
After operation : 
x=-5
y=2
*/
