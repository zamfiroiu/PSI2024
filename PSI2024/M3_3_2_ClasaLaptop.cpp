//#include<iostream>
//using namespace std;
//
//class Laptop {
//	static int nrLaptopuri;
//	const int id;
//	int RAM;
//	string tipCPU;
//	float rezolutieEcran;
//	bool cameraWeb;
//	int nrTaste;
//	int* nrApasariTasta;
//
//public:
//	int getID() {
//		return id;
//	}
//	int getRAM() {
//		return RAM;
//	}
//	string getTipCPU() {
//		return tipCPU;
//	}
//	float getRezolutieEcran() {
//		return rezolutieEcran;
//	}
//	bool hasCameraWeb() {
//		return cameraWeb;
//	}
//
//	void setRAM(int RAM) {
//		if (RAM > 0) {
//			this->RAM = RAM;
//		}
//	}
//
//	void setTipCPU(string tipCPU) {
//		if (tipCPU.length() > 0) {
//			this->tipCPU = tipCPU;
//		}
//	}
//
//	void setRezolutieEcran(float rezolutieEcran) {
//		if (rezolutieEcran > 10) {
//			this->rezolutieEcran = rezolutieEcran;
//		}
//	}
//
//	void setCameraWeb(bool cameraWeb) {
//		this->cameraWeb = cameraWeb;
//	}
//
//	~Laptop() {
//		if (this->nrApasariTasta) {
//			delete[]this->nrApasariTasta;
//		}
//	}
//
//	int getNrTaste() {
//		return nrTaste;
//	}
//
//	void setNrTaste(int nr) {
//		nrTaste = nr;
//	}
//
//	int* getNrApasariTasta() {
//		return nrApasariTasta;
//	}
//
//	void seNrApasariTasta(int* vector, int dim) {
//		if (dim > 0 && vector != NULL) {
//			if (this->nrApasariTasta != NULL) {
//				delete[]nrApasariTasta;
//			}
//			nrApasariTasta = new int[dim];
//			for (int i = 0; i < dim; i++) {
//				nrApasariTasta[i] = vector[i];
//			}
//			nrTaste = dim;
//		}
//	}
//
//	Laptop():id(0) {
//		RAM = 16;
//		tipCPU = "AMD";
//		rezolutieEcran = 13.3;
//		this->cameraWeb = true;
//		this->nrLaptopuri++;
//		nrTaste = 0;
//		nrApasariTasta = NULL;
//	}
//
//	//Laptop(int RAM, string tipCPU, float rezolutie, bool camera):id(0) {
//	//	this->RAM = RAM;
//	//	this->tipCPU = tipCPU;
//	//	this->rezolutieEcran = rezolutie;
//	//	this->cameraWeb = camera;
//	//}
//
//	//Laptop(int RAM, float rezolutie, bool camera):id(0) {
//	//	this->RAM = RAM;
//	//	this->tipCPU = "Intel";
//	//	this->rezolutieEcran = rezolutie;
//	//	this->cameraWeb = camera;
//	//}
//
//	//Laptop(int newRAM, float rezolutie, bool camera):RAM(newRAM),tipCPU("Intel"),
//	//												rezolutieEcran(rezolutie),
//	//												cameraWeb(camera) 
//	//{
//	//}
//
//	//Laptop(int RAM=12, string tipCPU="AMD", float rezolutie=15, bool camera=true) {
//	//	this->RAM = RAM;
//	//	this->tipCPU = tipCPU;
//	//	this->rezolutieEcran = rezolutie;
//	//	this->cameraWeb = camera;
//	//}
//
//
//
//	inline void modificaRAM(int RAM) {
//		this->RAM = RAM;
//	}
//
//	static int cateLaptopuri() {
//		return nrLaptopuri;
//	}
//
//	void f(Laptop * l) {
//
//	}
//	
//
//	void modificaTipCPU(string newTipCPU);
//
//
//
//};
//
//void Laptop::modificaTipCPU(string newTipCPU) {
//	this->tipCPU = tipCPU;
//}
//
//int Laptop::nrLaptopuri = 0;
//
//void main() {
//	//Laptop laptop;
//
//
//	//{
//	//	Laptop l;
//	//	l.modificaRAM(40);
//	////1
//	//}
//	////2	
//
//	////Laptop l1(20, 13, true);
//	////Laptop l2(10, 15, false);
//
//	cout << Laptop::cateLaptopuri();
//
//	Laptop l;
//	cout << l.cateLaptopuri();
//	l.seNrApasariTasta(new int[4]{ 10,2,5,7 }, 4);
//	cout<<l.getNrApasariTasta()[3];
//}
