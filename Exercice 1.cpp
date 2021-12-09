#include <iostream>
using namespace std;
class myclass{ // create une classe
private:
    string nom;
public:
    myclass();//constructeur
    ~myclass();//de destructeur
};
myclass::myclass(){
    cout<< "entrez votre nom : ";//affiche entrez votre nom
    cin >> nom; //l'utilisatuer ecrit son nom
    cout<< "bonjour Monsieur/Madmoiselle : "<< nom <<endl; //message affiche
}
myclass::~myclass(){
    cout<< "Au revoir  : "<< nom <<endl;
}
int main(){


    myclass c1;


    return 0;
}
