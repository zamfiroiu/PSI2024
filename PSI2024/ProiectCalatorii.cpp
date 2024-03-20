#include<iostream>

using namespace std;

//operator de comparatie
//operator++ sau --
//operator << si >>
//operator de cast - de conversie
//operator functie

class Tara {
private:
	const int idTara;
	string nume;
	int populatie;
	float suprafata;
	static int contor;
public:

	bool operator>(Tara tara) {
		if (this->suprafata != 0 && tara.suprafata != 0) {
			float densitateTara1 = this->populatie / this->suprafata;
			float densitateTara2 = tara.populatie / tara.suprafata;
			return densitateTara1 > densitateTara2;
		}
		return false;
	}

	Tara operator++() {
		this->populatie += 1;
		return *this;
	}

	Tara operator++(int param) {
		Tara initial = *this; //constructor de copiere
		this->populatie += 1;
		return initial;
	}

	friend ostream& operator<<(ostream& monitor, Tara tara){
		monitor << tara.idTara << "." << tara.nume << " are " << tara.populatie
			<< " de locuitori si o suprafata de "
			<< tara.suprafata << " km2." << endl;
		return monitor;
	}

	Tara(const Tara& tara):idTara(contor++) {
		this->nume = tara.nume;
		this->populatie = tara.populatie;
		this->suprafata = tara.suprafata;
	}


	Tara() :idTara(contor++) {
		this->nume = "N/A";
		this->populatie = 0;
		this->suprafata = 0;
	}
	Tara(string nume, int populatie, float suprafata) :idTara(contor++) {
		this->nume = nume;
		this->populatie = populatie;
		this->suprafata = suprafata;
	}
	Tara(string nume) :idTara(contor++) {
		this->nume = nume;
		this->populatie = 0;
		this->suprafata = 0;
	}

	Tara operator=(const Tara& tara) {
		this->nume = tara.nume;
		this->populatie = tara.populatie;
		this->suprafata = tara.suprafata;
		return *this;
	}

	int getIDTara() {
		return this->idTara;
	}
	string getNume() {
		return this->nume;
	}
	void setNume(string param) {
		if (param.length() > 1) {
			this->nume = param;
		}			
	}
	int getPopulatie() {
		return this->populatie;
	}
	void setPopulatie(int populatie) {
		if (populatie > 0) {
			this->populatie = populatie;
		}
	}
	float getSuprafata() {
		return this->suprafata;
	}
	void setSuprafata(float suprafata) {
		if (suprafata > 0) {
			this->suprafata = suprafata;
		}
	}

	void afisare() {
		cout <<this->idTara<<"."<< this->nume << " are " << this->populatie
			<< " de locuitori si o suprafata de " 
			<< this->suprafata << " km2." << endl;
	}

};
int Tara::contor = 1;


class Continent {
public:
	string nume;
	int nrTari;
	Tara* vectorTari;

	string operator()() {
		return concatenareNumeTari();
	}

	explicit operator int() {
		return calculeazaPopulatieTotala();
	}

	explicit operator float() {
		return calculeazaSuprafataTotala();
	}

	Continent operator+=(Tara tara) {
		Tara* vector = new Tara[this->nrTari + 1];
		for (int i = 0; i < this->nrTari; i++) {
			vector[i] = this->vectorTari[i];
		}
		vector[this->nrTari] = tara;
		if (this->vectorTari != NULL) {
			delete[]this->vectorTari;
		}
		this->vectorTari = vector;
		this->nrTari++;
		return *this;
	}

private:
	string concatenareNumeTari() {
		string rezultat = this->nume;
		rezultat += " (";
		for (int i = 0; i < this->nrTari-1; i++) {
			rezultat += this->vectorTari[i].getNume();
			rezultat += ", ";
		}
		rezultat += this->vectorTari[this->nrTari-1].getNume();
		rezultat += ").";
		return rezultat;
	}

	float calculeazaSuprafataTotala() {
		float suma = 0;
		for (int i = 0; i < this->nrTari; i++) {
			suma += vectorTari[i].getSuprafata();
		}
		return suma;
	}

	int calculeazaPopulatieTotala() {
		int suma = 0;
		for (int i = 0; i < this->nrTari; i++) {
			suma += vectorTari[i].getPopulatie();
		}
		return suma;
	}
public:
	Continent() {
		this->nume = "N/A";
		this->nrTari = 0;
		this->vectorTari = NULL;
	}

	Continent(string nume, int nrTari, Tara* vector) {
		this->nume = nume;
		this->nrTari = nrTari;
		this->vectorTari = new Tara[nrTari];
		for (int i = 0; i < nrTari; i++) {
			this->vectorTari[i] = vector[i];
		}
	}

	Continent(int nrTari, Tara* vector) {
		this->nume = "N/A";
		this->nrTari = nrTari;
		this->vectorTari = new Tara[nrTari];
		for (int i = 0; i < nrTari; i++) {
			this->vectorTari[i] = vector[i];
		}
	}

	Continent(const Continent& c) {
		this->nume = c.nume;
		this->nrTari = c.nrTari;
		this->vectorTari = new Tara[c.nrTari];
		for (int i = 0; i < c.nrTari; i++) {
			this->vectorTari[i] = c.vectorTari[i];
		}
	}

	Continent operator=(const Continent& c) {
		if (this != &c) {
			this->nume = c.nume;
			this->nrTari = c.nrTari;
			if (this->vectorTari != NULL) {
				delete[]this->vectorTari;
			}
			this->vectorTari = new Tara[this->nrTari];
			for (int i = 0; i < this->nrTari; i++) {
				this->vectorTari[i] = c.vectorTari[i];
			}
		}
		return *this;
	}

	void afisare() {
		cout << this->nume << " are " << this->nrTari << " tari: "<<endl;
		for (int i = 0; i < this->nrTari; i++) {
			cout << "  ";
			vectorTari[i].afisare();
		}
		cout << endl;
	}

	~Continent() {
		if (this->vectorTari != NULL) {
			delete []this->vectorTari;
		}
	}

	string getNume() {
		return this->nume;
	}
	void setNume(string nume) {
		if (nume.length() > 3) {
			this->nume = nume;
		}
	}

	void setTari(int nrTari, Tara* vector) {
		if (nrTari > 0 && vector != NULL) {
			this->nrTari = nrTari;
			if (this->vectorTari != NULL) {
				delete[] this->vectorTari;
			}
			this->vectorTari = new Tara[nrTari];
			for (int i = 0; i < nrTari; i++) {
				this->vectorTari[i] = vector[i];
			}
		}
	}

	int getNrTari() {
		return this->nrTari;
	}

	Tara* getTari() {
		return this->vectorTari;
	}

	Tara& getTaraDePePozitie(int index) {
		if (index >= 0 && index < this->nrTari) {
			return this->vectorTari[index];
		}
	}


};

class Activitate {
public:
	string denumire;
	int durata;//minute
	int oraIncepere;
	bool trebuieEchipament;

	friend ostream& operator<<(ostream& out, const Activitate& a) {
		out << "Activitatea " << a.denumire << " dureaza " << a.durata
			<< " minute, incepe la ora " << a.oraIncepere << ". ";
		out << (a.trebuieEchipament == true
			? "Avem nevoie de echipament"
			: "Nu necesita un echipament anume");
		out << endl;
		return out;
	}

	friend istream& operator>>(istream& tastatura, Activitate& a) {
		cout << "Denumirea activitatii:";
		tastatura >> a.denumire;
		cout << "Durata activitatii (minute):";
		tastatura >> a.durata;
		cout << "Ora inceperii activitatii:";
		tastatura >> a.oraIncepere;
		cout << "Trebuie echipament (1-DA, 0-NU)";
		tastatura >> a.trebuieEchipament;
		return tastatura;
	}

	Activitate operator+=(int timpSuplimentar) {
		this->durata += timpSuplimentar;
		return *this;
	}


	Activitate() {
		this->denumire = "N/A";
		this->durata = 0;
		this->oraIncepere = 0;
		this->trebuieEchipament = false;
	}

	Activitate(string denumire, int durata, int oraIncepere, bool trebuieEchipament) {
		this->denumire = denumire;
		this->durata = durata;
		this->oraIncepere = oraIncepere;
		this->trebuieEchipament = trebuieEchipament;
	}

	Activitate(string denumire, int durata, bool trebuieEchipament) {
		this->denumire = denumire;
		this->durata = durata;
		this->oraIncepere = 0;
		this->trebuieEchipament = trebuieEchipament;
	}

	void afisare() {
		cout << "Activitatea " << this->denumire << " dureaza " << this->durata
			<< " minute, incepe la ora " << this->oraIncepere << ". ";
		//if (this->trebuieEchipament==true){
		//	cout << "Avem nevoie de echipament";
		//}
		//else {
		//	cout << "Nu necesita un echipament anume";
		//}

		cout << (this->trebuieEchipament == true
			? "Avem nevoie de echipament"
			: "Nu necesita un echipament anume");

		cout << endl;
	}
};

void main() {

	Tara tara1;
	tara1.setNume("Japonia");
	tara1.setPopulatie(8000);
	tara1.setSuprafata(100);
	Tara tara2("Zanzibar", 1000, 200);
	Tara tara3("TaraNoua");
	Tara* pTara = new Tara("Romania", 1800, 230);

	if (tara1 > tara2) {
		cout << tara1.getNume() << " are densitatea mai mare."<<endl;
	}
	else {
		cout << tara2.getNume() << " are densitatea mai mare."<<endl;
	}

	tara2 = ++tara1;
	tara2 = tara1++;

	//tara1.afisare();

	cout << tara1<<tara2<<tara3<<endl;
	

	//tara2.afisare();
	//tara3.afisare();
	//pTara->afisare();

	Continent continent1;
	Tara* vector = new Tara[3]{ tara1,tara2,tara3 };
	Continent americaDeSud("America de Sud", 3, vector);
	
	Tara* vector2 = new Tara[2]{ tara2,tara1};
	Continent continent2(2, vector2);
	delete []vector2;
	
	continent1.afisare();
	americaDeSud.afisare();
	continent2.afisare();

	continent2.setNume("Asia");
	continent2.setTari(3, vector);
	delete[]vector;
	continent2.afisare();

	continent2.getTari()[1].afisare();
	continent2.getTaraDePePozitie(1).afisare();
	continent2.getTaraDePePozitie(1).setNume("Myanmar");

	continent2.afisare();

	int populatieTotala = (int)americaDeSud;
	float suprafataTotala = (float)americaDeSud;
	cout << (float)americaDeSud;
	cout << endl << endl << "Populatia completa: " << populatieTotala << endl;

	cout << americaDeSud()<<endl; //"America de sud (Columbia, Brazilia, Argentina)"

	Tara taraNoua("Brazilia", 3000, 3000);
	americaDeSud += taraNoua;

	cout << americaDeSud();
	americaDeSud.afisare();


	//Activitati
	cout << "\n\nActivitati: " << endl;
	Activitate activitate1;
	Activitate activitateDeInot("Inot", 30, 17, true);
	Activitate activitateDeMers("Plimbare", 60, false);

	activitate1.afisare();
	activitateDeInot.afisare();
	activitateDeMers.afisare();

	
	cin >> activitate1;
	cout << activitate1<<endl;

	activitate1 += 10;
	cout << activitate1 << endl;

	delete pTara;
}