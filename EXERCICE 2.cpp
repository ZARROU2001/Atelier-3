#include <iostream>
using namespace std;
    //creer un classe shape
    class shape {
        public:
        //creer deux variable integer dans notre classe
        int largeur;
        int hauteur;
        //initialise les deux valeurs par le constructeur
            shape(int x,int y){
                largeur=x;
                hauteur=y;
            };
    };
    //creer une classe fille qui s'apelle triangle qui herite de la classe mere
    class triangle : public shape{
        public:
        triangle(int x, int y) : shape(x, y) {}
        //creer une fonction qui calcul l'aire de la triangle
        void area(){
            cout<<"area of triangle = "<<(largeur*hauteur)/2<<endl;
        }
    };
    //creer une classe fille qui s'apelle rectangle qui herite de la classe mere
    class rectangle : public shape{
        public:
        rectangle(int x, int y) : shape(x, y) {}
        //creer une fonction qui calcul l'aire de la rectangle
        void area(){
           cout<<"area of rectangle = "<<(largeur*hauteur)<<endl;
        }
    };

int main()
{
    rectangle rectangle1(2,3);
    triangle triangle1(2,3);
    rectangle1.area();
    triangle1.area();
    return 0;
}
