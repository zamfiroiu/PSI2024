//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Animal {
//private:
//	char* rasa;
//	int nrPicioare;
//	float greutate;
//	int varsta;
//public:
//
//	Animal() {
//		rasa = NULL;
//		this->nrPicioare = 4;
//		this->greutate = 1;
//		this->varsta = 1;
//	}
//	Animal(const char* rasa, int nrPicioare, float greutate, int varsta) {
//		this->rasa = new char[strlen(rasa) + 1];
//		strcpy(this->rasa, rasa);
//		this->nrPicioare = nrPicioare;
//		this->greutate = greutate;
//		this->varsta = varsta;
//	}
//
//	Animal(const Animal& a) {
//		this->rasa = new char[strlen(a.rasa) + 1];
//		strcpy(this->rasa, a.rasa);
//		this->nrPicioare = a.nrPicioare;
//		this->greutate = a.greutate;
//		this->varsta = a.varsta;
//	}
//
//	virtual Animal& operator=(const Animal& a) {
//		if (this->rasa != NULL) {
//			delete[]this->rasa;
//		}
//		this->rasa = new char[strlen(a.rasa) + 1];
//		strcpy(this->rasa, a.rasa);
//		this->nrPicioare = a.nrPicioare;
//		this->greutate = a.greutate;
//		this->varsta = a.varsta;
//		return *this;
//	}
//
//	virtual ~Animal() {
//		if (this->rasa != NULL) {
//			delete[]this->rasa;
//		}
//	}
//
//	virtual string vorbeste() = 0;
//	virtual string ceMananca() = 0;
//};
//
//
//
//class Caine :public Animal {
//public:
//	Caine() :Animal() {
//
//	}
//	Caine(const char* rasa, int nrPicioare, float greutate, int varsta) :Animal(rasa, nrPicioare, greutate, varsta) {
//
//	}
//	string vorbeste() {
//		return "Ham ham";
//	}
//	string ceMananca() {
//		return "Oase";
//	}
//};
//
//class Pisica :public Animal {
//private:
//	char* nume;
//public:
//	Pisica() :Animal() {
//		nume = NULL;
//	}
//	Pisica(const char* nume, const char* rasa, int nrPicioare, float greutate, int varsta)
//		:Animal(rasa, nrPicioare, greutate, varsta)
//	{
//		this->nume = new char[strlen(nume) + 1];
//		strcpy(this->nume, nume);
//	}
//	Pisica(const Pisica& p):Animal(p)
//	{
//		this->nume = new char[strlen(p.nume) + 1];
//		strcpy(this->nume, p.nume);
//	}
//
//	 Pisica operator=(const Pisica& p)
//	{
//		if (this != &p) {
//			Animal::operator=(p);
//			if (this->nume != NULL) {
//				delete[]this->nume;
//			}
//			this->nume = new char[strlen(p.nume) + 1];
//			strcpy(this->nume, p.nume);
//		}
//	}
//
//	string vorbeste() {
//		return "Miau miau";
//	}
//	string ceMananca() {
//		return "Peste";
//	}
//	~Pisica() {
//		if (nume != NULL) {
//			delete[]nume;
//		}
//	}
//
//};
//
//
//
//void main() {
//	Animal* vector = new Pisica[100];
//
//
//	Animal* pet = new Pisica("Tom", "Birmaneza", 4, 6, 2);
//	cout << pet->ceMananca() << endl;
//	
//
//	delete pet;
//}