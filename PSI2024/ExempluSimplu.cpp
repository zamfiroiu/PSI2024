#include<iostream>

using namespace std;

class PerecheNumere {
public:
	int numar1;
	int numar2;

	int calculSuma() {
		return this->numar1 + this->numar2;
	}

	int inmultire() {
		return numar1 * numar2;
	}
	float impartire() {
		if (numar2 != 0) {
			return numar1 / (float)numar2;
		}
		else {
			return 0;
		}
	}
};



int main() {

	PerecheNumere pereche;
	cout << "Introduceti primul numar:";
	cin >> pereche.numar1;
	cout << "Introduceti al doilea numar:";
	cin >> pereche.numar2;

	cout << "Suma celor doua numere este: " << pereche.calculSuma() << endl;
	cout << "Produsul celor doua numere este: " << pereche.inmultire() << endl;
	cout << "Impartire acelor doua numere: " << pereche.impartire() << endl;
}