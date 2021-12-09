#include <iostream>
using namespace std;
//creer une classe mere
    class mere{
        public:

        void display();

    };
    //creer une fonction permet d'afficher une message
    void mere::display(){
        cout<<"je suis dans la class mere ";
    }
    //creer une class fille qui herite de la classe mere
    class fille : public mere{
        public:
        void display();
    };
    //creer la meme fonction "display" mais avec un autre message
    void fille::display(){
        cout<<"je suis dans la class fille ";
    }
int main()
{
    fille f1;
    f1.display();
    return 0;
}
