#include<iostream>

using namespace std;

class Tara {
private:
	const int idTara;
	string nume;
	int populatie;
	float suprafata;
	static int contor;
public:
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

	tara1.afisare();
	tara2.afisare();
	tara3.afisare();
	pTara->afisare();

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

	//Activitati
	cout << "\n\nActivitati: " << endl;
	Activitate activitate1;
	Activitate activitateDeInot("Inot", 30, 17, true);
	Activitate activitateDeMers("Plimbare", 60, false);

	activitate1.afisare();
	activitateDeInot.afisare();
	activitateDeMers.afisare();


	delete pTara;
}