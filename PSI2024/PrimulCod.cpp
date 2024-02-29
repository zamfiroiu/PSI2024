#include<iostream>
using namespace std;

class Persoana {
public:
	int varsta;
	Persoana() {

	}
};

void main() {

	Persoana p1;
	p1.varsta = 69;

	Persoana* p2 = new Persoana();

	printf("Text: %s\n", "Acesta este un text");
	printf("Text: %s, Numar: %d\n", "Test", 78);

	cout << "Acesta este un text"<<endl;
	cout << 6<<endl;

	int a = 8;

	cout << a;

	int* pointer;
	float* pointerFloat;

	pointer = &a;
	int nrElemente = 5;
	//pointer = (int*)malloc(nrElemente * sizeof(int));

	pointer = new int[nrElemente];

	//int vector[10];

	//vector[0] = 7;
	//vector[1] = 9;
	////cout << "\n\n";
	////cout << *vector<<endl;
	//cout << *vector << endl; //vector[0]
	//cout << *(vector + 1);//vector[1]


}

