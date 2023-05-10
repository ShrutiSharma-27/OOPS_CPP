// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Example{
    public:
    int a;
    
    Example add(Example E1, Example E2){
        Example Esum;
        Esum.a=a+E1.a+E2.a;
        return Esum;
    }
};

int main(){
    Example Ea,Eb,Ec;
    Ea.a=100;
    Eb.a=40;
    Ec.a=60;
    
    Ec = Ec.add(Ea,Eb);
    cout<<"Ec.a = "<<Ec.a;
    return 0;
}
