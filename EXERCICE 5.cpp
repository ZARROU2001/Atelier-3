#include <iostream>

using namespace std;
//creer une classe mere "Animal"
class Animal{

public:
    string nom;
    int age;
    //create une fonction setter pour initialiser le nom et l'age de l'Animal
    void set_value(string name , int old){
        nom=name;
        age=old;
    }
};
//create une classe fille "Zebra" qui herite de la classe mere "Animal"
class Zebra : public Animal {
    string origin;
public:
    void set_origin(string zorig){
        origin=zorig;
    }
    void data1( ){
        cout<<"nom de l animal est : "<<nom<<"\t"<<"son age est : "<<age<<"\t"<<"son origine est : "<<origin;
        cout<<"\n";
    }
};
//create une classe fille "dolphin" qui herite de la classe mere "Animal"
class dolphin :public Animal {
    string origin;
public:
    void set_origin(string dorig){
        origin=dorig;
    }
    void data2(){
        cout<<"nom de l animal est : "<<nom<<"\t"<<"son age est : "<<age<<"\t"<<"son origine est : "<<origin;
        cout<<"\n";
    }

};
int main()
{
    Zebra z;
    z.set_origin("africa");
    z.set_value("zeb",10);
    z.data1();
    dolphin d;
    d.set_origin("mer");
    d.set_value("delph",15);
    d.data2();
    return 0;
}
