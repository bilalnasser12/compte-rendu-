#include<iostream>
using namespace std;
class shape {
    public:
    float length;
    float heigth;
    shape(){
        length=10;
        heigth=5;
    };
};
class tringle : public shape{
public:
float area(){
    return (length * heigth)/2;
}
};
class rectangle : public shape{
public:
float area(){
    return length * heigth;
}
};
int main()
{   
    rectangle rectangle;
    tringle tringle;
    cout<<"aire de la rectangle est :"<<rectangle.area()<<endl;
    cout<<"aire de la tringle est :"<<tringle.area()<<endl;
    return 0;
}
