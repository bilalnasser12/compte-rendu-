#include <iostream>
using namespace std;
class media{
    protected : 
    string titre;
    public:
    virtual void imprimer(){} 
    virtual char *id(){}
};
class audio : public media{
    protected : 
    float duree;
    public:
    audio();
};
class CD : public audio{
    private:
    float prix;
    public: 
    CD();
};
class cassette : public audio{ 
    private:
    float prix;
    public:
    cassette();
};
class disque : public audio{ 
    private:
    float prix;
    public:
    disque();
};
class livre : public media{ 
    private:
    string auteur;
    public : 
    livre();
}; 
class presse : public media{
    protected :
    string directeur;
    public:
    presse();
};
class magazine : public presse{ 
    private:
    float prix;
    public:
    magazine();
};
class journal : public presse{ 
    private:
    float prix;
    public: 
    journal();
};
class revue : public presse{ 
    private:
    float prix;
    public: 
    revue();
};
int main(){
    
}