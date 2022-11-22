#include <iostream>
using namespace std;
class animal {
    private:
     string nom;
     int age;
    public:
    void set_value(int a ,string b){
        age=a;
        nom=b;
    }
};
class zebra1: public animal{
  public:
  void aff1(){
      cout<<"nom du zebra"<<nom<<", age est "<<age<<"lieu d'o l'afrique."<<endl;
  } 
};
class daulphin1: public animal{
  public:
  void aff2(){
      cout<<"nom du dauphin  "<<nom<<" , son age est "<<age<<" et il vient de l'amerique."<<endl;
  } 
};
main() {
 zebra1 z;
 daulphin1 d;
 string a1 ="zebra";
 string a2 ="daulpho";
 z.set_value(5,a1);
 z.aff1();
 d.set_value(7,a2);
 d.aff2();
}