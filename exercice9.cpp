#include<iostream>

using namespace std ;
static int count;
class Test{
    public:
    int call(){
    count++;
    return 0;
    }

};
    
int main (){
    Test c;
    c.call();
    c.call();
    c.call();
    cout<<"la fonction a été appelée "<<count<< " fois"<<endl;

    return 0;
}