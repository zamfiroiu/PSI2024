//#include<iostream>
//using namespace std;
//
//class Pix {
//private:
//	const int id;
//	bool cuCapac;
//	string culoare;
//
//public:
//	Pix():id(6) {		
//		this->culoare = "albastru";
//		this->cuCapac = true;
//	}
//	Pix(int idNou, bool cuCapac, string culoare):id(idNou) {
//		this->cuCapac = cuCapac;
//		this->culoare = culoare;
//	}
//	Pix(bool cuCapac, string culoare) :id(1) {
//		this->cuCapac = cuCapac;
//		this->culoare = culoare;
//	}
//	//de discutat vineri de ce trebuie referinta
//	Pix(const Pix& original): id(original.id) {
//		this->cuCapac = original.cuCapac;
//		this->culoare = original.culoare;
//	}
//	~Pix() {
//		
//	}
//
//	void setCuloare(string culoare) {
//		if (culoare.length() > 2) {
//			this->culoare = culoare;
//		}
//	}
//
//	string getCuloare(){
//		return this->culoare;
//	}
//
//	int getId() {
//		return this->id;
//	}
//
//	void setCuCapac(bool valoare) {
//		this->cuCapac = valoare;
//	}
//
//	bool hasCapac() {
//		return this->cuCapac;
//	}
//
//
//
//
//	void scoateCapac() { //void scoateCapac(Pix* this)
//		//operatorul -> realizeaza doua operatii: dereferntiere+ accesare
//		if (this->cuCapac == true) {
//			this->cuCapac = false;
//		}
//	}
//};
//
//Pix functie(Pix pixParam) {
//	int variabila = 90;
//	Pix pixNou(false, "Verde");
//	return pixNou;
//}
//
//
//
//
//void main() {
//
//	//Pix obiect;
//	//obiect.culoare="albastru";
//	//obiect.cuCapac = true;
//
//	//cout << obiect.cuCapac<<endl;
//	//obiect.scoateCapac();
//	//cout << obiect.cuCapac;
//
//
//	//Pix pix1;
//	//pix1.cuCapac = true;
//
//	Pix pix2(true,"Verde");
//
//	//pix1.scoateCapac();
//	//
//	Pix pix3 = pix2;
//	Pix pix4(pix2);
//
//
//	//Pix pix5;
//
//	//{
//	//	Pix pix6;
//	//}
//
//	Pix pix7(5, false, "Albastru");
//	pix7.setCuloare("Rosu");
//
//	cout << "Pixul scrie cu culoarea " << pix7.getCuloare()<<" si "
//		<<(pix7.hasCapac()?"are capac.":"nu are capac.") << endl;
//
//
//	Pix pix8=functie(pix7);
//
//	cout << pix8.getCuloare();
//}
