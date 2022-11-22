#include <iostream>
using namespace std;

class mere{
public:
    void Display()
    {
        cout<<"message1"<<endl;
    }
};
class fille : public mere
{
public:
    void Display()
    {
        cout<<"message2"<<endl;
    }
};
int main()
{
   mere d1;
   fille d2;
   d1.Display();
   d2.Display();
return 0;
}