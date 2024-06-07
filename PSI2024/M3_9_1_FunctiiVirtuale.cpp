//#include<iostream>
//using namespace std;
//
//class Baza { 
//public:
//	int atributBaza;
//	virtual int Metoda1(int a) 
//	{
//		atributBaza = a;
//		return atributBaza;
//	}
//	int metodaNormala() {
//		return 0;
//	}
//
//	virtual int metodaVirtuala() {
//		return 0;
//	}
//	virtual int getAtribut() {
//		return this->atributBaza;
//	}
//}; 
//
//class Derivat : public Baza 
//{ 
//public:
//	int atributNou; 
//	Derivat():Baza() {
//		atributNou = 0;
//	}
//	int Metoda1(int a) 
//	{
//		atributNou = 2 * a;
//		return atributNou;
//	}
//	int getAtribut() {
//		return this->atributNou;
//	}
//};
//
//
//void main() {
//
//	Baza b;
//	Derivat d;
//	cout << b.Metoda1(2) << endl;
//	cout << d.Metoda1(2) << endl;
//
//	b = d;
//
//	cout << b.Metoda1(2) << endl;
//
//	/*b = d;
//	cout << b.Metoda1(2)<<endl;
//*/
//	Baza *p1;
//	Derivat *p2 = new Derivat();
//
//	p1 = p2;
//
//	cout << p1->Metoda1(2)<<endl;
//	cout << p1->getAtribut();
//}