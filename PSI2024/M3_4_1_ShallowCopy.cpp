//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//
//using namespace std;
//
//class Clasa {
//private:
//	char* pointer;
//	int atribut;
//public:
//	//const Clasa& operator=(const Clasa& c) {
//	//	if (this->pointer != NULL)
//	//	{
//	//		delete[]this->pointer;
//	//	}
//
//	//	this->pointer = new char[strlen(c.pointer) + 1];
//	//	strcpy(this->pointer, c.pointer);
//	//	this->atribut = c.atribut;
//	//	return *this;
//	//}
//
//	Clasa(const Clasa& c) {
//		this->pointer = new char[strlen(c.pointer) + 1];
//		strcpy(this->pointer, c.pointer);
//		this->atribut = c.atribut;
//	}
//
//	Clasa() {
//		this->pointer = new char[strlen("Text salvat")+1];
//		strcpy(this->pointer, "Text salvat");
//		this->atribut = 12;
//	}
//
//	Clasa& operator=(const Clasa& sursa) {
//		if (this == &sursa) {//verificare de autoasiganre
//			return *this;
//		}
//	
//		this->atribut = sursa.atribut;
//		if (this->pointer != NULL) {
//			delete[]this->pointer;
//		}
//		this->pointer = new char[strlen(sursa.pointer) + 1];
//		strcpy_s(this->pointer, strlen(sursa.pointer) + 1, sursa.pointer);
//		
//		return *this;
//	}
//
//	friend void functiePrietena(Clasa& c) {
//		cout << c.atribut << " - " << c.pointer << endl;
//	}
//
//	friend class Telefon;
//
//};
//
//
//class Telefon {
//	Clasa obiect;
//
//	void metoda() {
//		obiect.atribut = 78;
//	}
//};
//
//
//void main() {
//	/*Clasa c1;
//	c1.pointer = new char[strlen("text") + 1];
//	strcpy(c1.pointer, "text");
//	c1.atribut = 10;
//
//	Clasa c2 = c1;
//	Clasa c3(c1);
//	strcpy(c2.pointer, "newT");
//	cout << c1.pointer;
//
//	int g;
//	g = 0;*/
//	//c3=c2 = c1;
//
//	//c1 = c1;
//	//cout << c1.pointer << endl;
//
//	//c3=void
//	//Clasa c1;
//	//c1.pointer = new char[strlen("text") + 1];
//	//strcpy(c1.pointer, "text");
//
//	////c1.metoda(c1);
//	////c1.metoda2();
//
//	//Clasa c2;
//	//c2 = c1;
//
//	//c1.metoda(c2);
//
//	//c2=c1.metoda2();
//
//	Clasa c1;
//	functiePrietena(c1);
//}