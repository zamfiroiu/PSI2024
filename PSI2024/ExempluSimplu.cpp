#include<iostream>

using namespace std;

class PerecheNumere {
public:
	int numar1;
	int numar2;

	PerecheNumere(int a, int b) {
		this->numar1 = a;
		this->numar2 = b;
	}
	PerecheNumere() {
		this->numar1 = 0;
		this->numar2 = 0;
	}

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

	PerecheNumere operator+(PerecheNumere p) {
		PerecheNumere rezultat;
		rezultat.numar1 = this->numar1 + p.numar1;
		rezultat.numar2 = this->numar2 + p.numar2;
		return rezultat;
	}

	PerecheNumere operator+(int valoare) {
		PerecheNumere rez;
		rez.numar1 = this->numar1 + valoare;
		rez.numar2 = this->numar2 + valoare;
		return rez;
	}
	PerecheNumere operator+=(PerecheNumere p) {
		this->numar1 = this->numar1 + p.numar1;
		this->numar2 += p.numar2;

		return *this;
	}

	bool operator<(PerecheNumere p) {
		return this->calculSuma() < p.calculSuma();
	}

	friend ostream& operator<<(ostream& consola, PerecheNumere p) {
		consola << p.numar1 << " - " << p.numar2 << endl;
		return consola;
	}

	friend istream& operator>> (istream& tastatura, PerecheNumere& p) {
		cout << "Introduceti primul numar din pereche:";
		tastatura >> p.numar1;
		cout << "Introduceti al doilea numar din pereche:";
		tastatura >> p.numar2;
		return tastatura;
	}

	PerecheNumere operator++() {
		this->numar1 = this->numar1 + 1;
		this->numar2++;
		return *this;
	}

	PerecheNumere operator++(int) {
		PerecheNumere aux = *this;
		this->numar1++;
		this->numar2++;
		return aux;
	}

	explicit operator int() {
		return this->calculSuma();
	}

	int operator()() {
		return this->inmultire();
	}

};

PerecheNumere operator+(int valoare, PerecheNumere p) {
	PerecheNumere rez;
	rez.numar1 = p.numar1 + valoare;
	rez.numar2 = p.numar2 + valoare;
	return rez;
}


int main() {

	//PerecheNumere pereche;
	//cout << "Introduceti primul numar:";
	//cin >> pereche.numar1;
	//cout << "Introduceti al doilea numar:";
	//cin >> pereche.numar2;

	//cout << "Suma celor doua numere este: " << pereche.calculSuma() << endl;
	//cout << "Produsul celor doua numere este: " << pereche.inmultire() << endl;
	//cout << "Impartire acelor doua numere: " << pereche.impartire() << endl;

	PerecheNumere p1(1, 1);
	PerecheNumere p2(2, 2);
	PerecheNumere p3 = p1 + p2;


	cout << p3;

	PerecheNumere p4 = p2 + 5;
	cout << p4 ;

	PerecheNumere p5 = 5 + p2;
	cout << p5 ;

	p5 += p2; // p1.operator+=(p2)
	cout << p5 ;

	

	if (p1 < p2) {
		cout << "p1 este mai mic";
	}
	else {

		cout << "p2 este mai mic sau egal";
	}
	cout << endl<<endl;

	//PerecheNumere p6;
	//cin >> p6;//1 -1
	//cout << p6;
	//p4 = ++p6;//2- 2
	//p5 = p6++;//2-2......3 -3

	//cout << p4 << p5 <<p6<< endl;

	int numar = (int)p5;
	cout << "Numar: " << numar << endl;

	cout << "Produsul celor doua numere din pereche este:" << p5()<< endl;
}