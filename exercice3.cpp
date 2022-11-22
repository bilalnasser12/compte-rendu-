#include<iostream>
#include<cmath>
using namespace std;
class nombrecomplexe{

    public:
    int img1 ,img2 ,re1 , re2;
     nombrecomplexe affichage(){
        cout<<"le premier nombre complexe"<<endl;
        cout<<"entre le nombre imaginaire:"<<endl;
        cin>>img1;
        cout<<"entre le nombre reelle:"<<endl;
        cin>>re1;
        cout<<"le deuxieme nombre complexe"<<endl;
        cout<<"entre le nombre imaginaire:"<<endl;
        cin>>img2;
        cout<<"entre le nombre reelle:"<<endl;
        cin>>re2;
    }
    public:
    void egal(){
        if(img1==img2 && re1==re2)
        cout<<"les nombres complexes sont egale."<<endl;

        else
        cout<<"les nombres complexes ne sont pas egale."<<endl;

    }
    void add(){
        int a , b ;
        a = re1 + re2;
        b = img1 + img2;
        cout<<a<<"+"<<"("<<b<<")"<<"i"<<endl;
    }
    void sous(){
        int c,d;
        c = re1 - re2;
        d = img1 - img2;

        cout<<c<<"+"<<"("<<d<<")"<<"i"<<endl;
    }
    void mult(){
        int x,y;
        x = ((re1*re2)-(img1*img2));
        y = ((re1*img2)+(img1*re1));
        cout<<x<<"+"<<"("<<y<<")"<<"i"<<endl;

    }
     void divi(){
        float y,z;
        y = ((((re1)*(re2))+((img1)*(img2)))/((pow(re2,2))+(pow(img2,2))));
        z = ((((re1)*(img2))-((img1)*(re2)))/((pow(re2,2))+(pow(img2,2))));
        if (img2 < 0){
                cout<<y<<"+"<<"("<<z<<")"<<"i"<<endl;}
        else{

                cout<<y<<"-"<<"("<<z<<")"<<"i"<<endl;}


    }
};
int main(){
    int k;
    nombrecomplexe ab;
    ab.affichage();
    cout<<"choix de l'opertaion"<<endl;
    cout<<"egalite [1]"<<endl;
    cout<<"addition [2]"<<endl;
    cout<<"soustraction [3]"<<endl;
    cout<<"multiplication [4]"<<endl;
    cout<<"division [5]"<<endl;
     cin>> k;
     switch(k) {
  case 1:
      ab.egal();
    break;
  case 2:
      ab.add();
    break;
    case 3:
      ab.sous();
    break;
    case 4:
    ab.mult();
    break;
    case 5:
     ab.divi();
    break;
}

    return 0;
}

