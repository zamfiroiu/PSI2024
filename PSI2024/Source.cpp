//#include <iostream>
//using namespace std;
//
//class Magazin {
//public:
//	const string nume_magazin;
//	string adresa;
//	static string orar;
//	Magazin():nume_magazin("") {
//		nume_magazin = "Mega Image";
//		adresa = "Vasile Lascar 216";
//	}
//	Magazin(string nume) :nume_magazin("") {
//		nume_magazin = nume;
//		adresa = "Vasile Lascar 216";
//	}
//	Magazin(string nume, string adr) :nume_magazin("") {
//		nume_magazin = nume;
//		adresa = adr;
//	}
//	void get_info() {
//		cout << "Numele magazinului " << nume_magazin << endl;
//		cout << "Adresa magazinului " << adresa;
//	}
//}
//string Magazin::orar = "7:22"
//class Ziar {
//public:
//	const string nume_ziar;
//	float pret;
//	static int nr_pagini;
//	Ziar() {
//		nume_ziar = "Adevarul";
//		pret = 5;
//	}
//	Ziar(string nume) {
//		nume_ziar = nume;
//		pret = 5;
//	}
//	Ziar(string nume, float pretul) {
//		nume_ziar = "Adevarul";
//		pret = pretul;
//	}
//	void get_info() {
//		cout << "Numele ziarului " << nume_ziar << endl;
//		cout << "Pretul ziarului " << pret;
//	}
//}
//int Ziar::nr_pagini = 30;
//class Produs {
//public:
//	const string nume_produs;
//	float pret;
//	static string culoare;
//	Produs() {
//		nume_produs = "minge";
//		pret = 15;
//	}
//	Produs(string nume) {
//		nume_produs = nume;
//		pret = 15;
//	}
//	Produs(string nume, float pretul) {
//		nume_produs = nume;
//		pret = pretul;
//	}
//	void get_info() {
//		cout << "Numele produsului " << nume_produs << endl;
//		cout << "Pretul ziarului " << pret;
//	}
//}
//string Produs::culoare = "alb"
//int main()
//{
//	Magazin m1, m2("Mega Image"), m3("Mega Image", "Vasile Lascar");
//	Ziar z1, z2("Adevarul"), z2("Adevarul", 5);
//	Produs p1, p2("minge"), p3("minge", 15);
//	p1.get_info();
//	p2.get_info();
//	p3.get_info();
//	z1.get_info();
//	z2.get_info();
//	z3.get_info();
//	m1.get_info();
//	m2.get_info();
//	m3.get_info();
//	return 0;
//}