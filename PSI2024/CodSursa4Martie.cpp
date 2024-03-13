//#include<iostream>
//
//using namespace std;
//
//class Pix{
//public:
//	static int TVA;
//	static int contor;
//	const int id;
//	string producator;
//	char *culoare;
//	int greutate;
//	float pret;
//	int lungime;
//
//	void cresteGreutate(int greutate) {//void cresteGreutate(Pix* this, int greutate)
//		//(*this).greutate += greutate;
//		//-> realizeaza Dereferentiere + accesare
//		this->greutate += greutate;
//	}
//
//	Pix():id(contor++) {
//		this->producator = "Pelikan";
//		this->culoare = NULL;
//		this->greutate = 20;
//		this->pret = 10;
//		this->lungime = 18;
//	}
//
//	~Pix() {
//		if (this->culoare != NULL) {
//			delete[]this->culoare;
//		}
//	}
//
//	Pix(string producator, const char* culoare, int greutate, float pret, int lungime):id(contor++) {
//		this->producator = producator;
//		this->culoare = new char[strlen(culoare)+1];
//		strcpy_s(this->culoare, strlen(culoare) + 1, culoare);
//		this->greutate = greutate;
//		this->pret = pret;
//		this->lungime = lungime;
//	}
//
//	Pix(const char* culoare):id(contor++) {
//		this->producator = "Pelikan";
//		this->culoare = new char[strlen(culoare) + 1];
//		strcpy_s(this->culoare, strlen(culoare) + 1, culoare);
//		this->greutate = 20;
//		this->pret = 10;
//		this->lungime = 18;
//	}
//
//	Pix(const Pix& pix):id(contor++) {
//		this->producator = pix.producator;
//		this->culoare = new char[strlen(pix.culoare) + 1];
//		strcpy_s(this->culoare, strlen(pix.culoare) + 1, pix.culoare);
//		this->greutate = pix.greutate;
//		this->pret = pix.pret;
//		this->lungime = pix.lungime;
//	}
//};
//int Pix::TVA = 19;
//int Pix::contor = 1;
//
//
//Pix f2() {
//	Pix pix;
//	return pix;
//}
//
//
//
//
//int main() {
//
//	cout << "Test "<<endl; cout << "Alt test";
//	/*Pix pix1;
//	cout << pix1.greutate;
//
//	{
//
//		Pix pix2("Rosu");
//	}
//
//	
//	Pix pix3("Pelikan", "Verde", 43, 25, 23);
//
//	Pix pix4(pix3);
//
//	strcpy_s(pix4.culoare, strlen("Negru") + 1, "Negru");
//
//	cout << "Culoare: " << pix3.culoare;
//
//
//	Pix* pPix;
//
//	pPix= new Pix("Galben");
//
//	delete pPix;*/
//
//
//	return 0;
//}