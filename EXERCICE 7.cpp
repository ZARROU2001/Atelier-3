#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d {
	float x;
	float y;
	float z;

	public:

	//on initialize les cordonnes dans un constructeur
	vecteur3d(float a = 0, float b = 0, float c = 0) : x(a), y(b), z(c) {}

	//Constructeur de recopie
	vecteur3d(const vecteur3d & v) {
		x = v.x;
		y = v.y;
		z = v.z;
	}

	//create une fonction pour afficher les cordonnes de vecteur
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;
	}

	//fonction permet de calculer la somme de deux vecteur et return la somme
	vecteur3d somme(const vecteur3d & v) {
		vecteur3d S;
		S.x = x + v.x;
		S.y = y + v.y;
		S.z = z + v.z;
		return S;
	}

	//fonction permet de calculer la produit scalaire de deux vecteur et return  le produit scalaire
	float produit(const vecteur3d & v) {
		return x*v.x + y*v.y + z*v.z;
	}

	//fonction permet de voir si les deux vecteur sont egaux et return le
	bool coincide(const vecteur3d & v) {
		return (x == v.x && y == v.y && z == v.z);
	}

	//fonction permet de calculer la norme de deux vecteur  et return la norme
	float norme() {
		return sqrt(x*x + y*y + z*z);
	}

	//fonction permet de voir la vecteur qui a la norme plus grande et la retourner (
	vecteur3d normax(vecteur3d v) {
		if( this->norme() > v.norme())
		    return *this;

		return v;
	}

	//fonction permet de voir la vecteur qui a la norme plus grande et la retourner ( par adresse )
	vecteur3d * normax(vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;

		return v;
	}

	//fonction permet de voir la vecteur qui a la norme plus grande et la retourner ( par reference )
	vecteur3d & normaxR(vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;

		return v;
	}
};

int main() {
	vecteur3d v1(1,2,3);
	cout << "Vecteur V1";
	v1.afficher();
	vecteur3d v2(5,6,7);
	cout << "Vecteur V2";
	v2.afficher();
	cout<<endl;
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).afficher();
	cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
	cout<<endl;
}
