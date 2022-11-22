
#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d{
    float x;
    float y;
    float z;
public:
    vecteur3d(float a=0,float b=0,float c=0){
        x=a;
        y=b;
        z=c;
    }
    void affichage(){
        cout<<"( "<< x <<" , "<< y <<" , "<< z <<" )"<<endl;
    }
    vecteur3d sommevecteur (const vecteur3d & v){
        vecteur3d w;
        w.x=x+v.x;
        w.y=y+v.y;
        w.z=z+v.z;
        return w;
    }
    float produitscalaire(const vecteur3d & v ){
        return x*v.x+y*v.y+z*v.z;
    }
    bool coincide(const vecteur3d & v){
        return (x==v.x && y==v.y && z==v.z);
    }
    float norme() {
        return sqrt(x*x + y*y + z*z);
    }
    vecteur3d normax(vecteur3d v){
        if (this->norme() > v.norme() )
            return *this;

        return v;
    }
    vecteur3d * normax(vecteur3d * v){
        if (this->norme() > v->norme())
            return this;

        return v;
    }
    vecteur3d & normaxRE(vecteur3d &v){
        if (this->norme() > v.norme())
            return  *this;
        return v;
    }
};
int main (){
    vecteur3d v1(5,7,3);
    cout<<"le vecteur 1 est:"<<endl;
    v1.affichage();
    vecteur3d v2(1,2,4);
    cout<<"le vecteur 2 est:"<<endl;
    v2.affichage();

    cout<<endl;
    cout<<"la somme des vecteurs est :"<<endl;
    (v1.sommevecteur(v2)).affichage();
    cout<<"le produit des deux vecteurs est :"<<endl;
    v1.produitscalaire(v2);
    cout<<endl;

    cout<<"la norme du vecteur est:"<<endl;
    v1.norme();
    cout<<endl;
    if (v1.coincide(v2))
        cout<<"les 2 vecteurs ont memes composantes"<<endl;
    else
        cout<<"les 2 vecteurs ont memes composantes"<<endl;
    cout<<endl;
    cout<<"le resultat est renvoye par valeur"<<endl;
    (v1.normax(v2)).affichage();
    cout<<endl;
    cout<<"le resultat est renvoye par adresse"<<endl;
    v1.normax(&v2)->affichage();
    cout<<endl;
    cout<<"le resultat est renvoye par referance"<<endl;
    v1.normax(v2).affichage();
return 0;
}
