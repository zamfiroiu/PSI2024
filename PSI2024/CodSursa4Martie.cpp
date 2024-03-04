#include<iostream>

using namespace std;

class Pix{
public:
	static int TVA;
	string producator;
	char *culoare;
	int greutate;
	float pret;
	int lungime;

	void cresteGreutate(int greutate) {//void cresteGreutate(Pix* this, int greutate)
		//(*this).greutate += greutate;
		//-> realizeaza Dereferentiere + accesare
		this->greutate += greutate;
	}
};
int Pix::TVA = 19;

int f(int a) {

}
int main() {
	cout << Pix::TVA << endl;
	Pix pix1;
	Pix pix2;
	pix1.cresteGreutate(7);

	pix2.TVA = 11;
	cout << pix1.greutate << endl;
	pix1.greutate = 20;
	cout << pix1.greutate << endl;
	pix1.pret = 10;

	pix2.greutate = 60;
	pix2.pret = 5;

	cout << pix1.TVA << endl;
	


	return 0;
}