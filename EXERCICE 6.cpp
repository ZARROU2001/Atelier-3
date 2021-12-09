#include <iostream>
using namespace std;
//creer une classee mere "Personne"
class Personne {
    string nom ;
    string prenom;
    string date;
public:
    Personne(string name,string pre,string da){
        nom=name;
        prenom=pre;
        date=da;
    }
    virtual void Afficher(){
    cout<<" le nom est " <<nom<<". le prenom est : "<<prenom<<". age est : "<<date<<"\n";
    }
};
//creer une classe fille "Employe" qui herite de la classe mere "Personne"
class Employe : public Personne{
public:
    int salaire;
    Employe(string name,string pre,string da ,int sal):Personne(name,pre,da){
        salaire=sal;
    }
    void Afficher(){
        Personne::Afficher();
    cout<<"votre salarie est : "<<salaire<<"\n";
    }
};
//creer une classe fille "Chef" qui herite de la classe mere "Employe"
class Chef : public Employe{
public:
    string service;
    Chef(string name,string pre,string da,int sal,string ser):Employe(name,pre,da,sal){
        service=ser;
    }
    void Afficher(){
        Employe::Afficher();
        cout<<" sa service est : "<<service<<"\n";
    }
};
//creer une classe fille "Directeur" qui herite de la classe mere "Chef"
class Directeur : public Chef{
public:
    string societe;
    Directeur(string name,string pre,string da,int sal,string ser,string soc):Chef(name,pre,da,sal,ser){
    societe=soc;
    }
    void Afficher(){
        Chef::Afficher();
        cout<<" sa societe est "<<societe ;
    }
};
int main()
{
        cout << "Hello world!" << endl;
    return 0;
}
