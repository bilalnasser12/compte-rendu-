#include<iostream>
#include<string.h>
using namespace std;
class Personne{
    private:
    string nom;
    string prenom;
    int date_naissance;
    public:
    Personne(){
        date_naissance = 0;
        nom =' ';
        prenom =' ';
    }
    void afficher(){
        cout<<"nom"<<nom<<endl;
        cout<<"prenom"<<prenom<<endl;
        cout<<"date de naissance"<<date_naissance<<endl;
    }
};
class Employe : public Personne {
    private:
    float Salaire;
    public:
    Employe(){
    }
     void afficher(){
        cout<<"salaire est :"<<Salaire<<endl;
    }
};
class Chef : public Employe{
    string Service;
    public:
    Chef(){

     } 
     void afficher(){
        cout<<"Service est :"<<Service<<endl;
    }

};
class Directeur : public Chef{
    private:
    string Societe;
    public:
    Directeur(){

    }
    void afficher(){
        cout<<"Societe est :"<<Societe<<endl;
    }
};
int main(){
    Personne a1;
    a1.afficher();
    Employe a2;
    a2.afficher();
    Chef a3;
    a3.afficher();
    Directeur a4;
    a4.afficher();
    return 0;
}