#include <iostream>
using namespace std;
    class shape {
        public:
        int largeur;
        int hauteur;
            shape(int x,int y){
                largeur=x;
                hauteur=y;
                cout<<"Je suis le constructeur";
            };
    };
    class triangle : public shape{
        public:
        triangle(int x, int y) : shape(x, y) {}
        void area(){
            cout<<"area of triangle = "<<(largeur*hauteur)/2;
        }
    };
    class rectangle : public shape{
        public:
        rectangle(int x, int y) : shape(x, y) {}
        void area(){
           cout<<"area of rectangle = "<<(largeur*hauteur);
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
