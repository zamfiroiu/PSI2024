//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void main() {
//	char carater = 'a';
//	int intreg = 10;
//	long int longInteger = 30000;
//	float realFloat = 3.4f;
//	double realDouble = 4.56;
//	bool boolean = true;
//	string sirCaractere = "Sir caractere";
//
//	//cout << intreg << " " << &intreg << endl;
//	cout << &longInteger<<endl;
//	int * pointer = &intreg;
//
//	cout << *pointer<<" se afla la adresa: "<<pointer<<endl;
//
//	double* pFloat = new double();
//	*pFloat = 56.8;
//
//	cout << *pFloat<<" se afla la adresa: "<<pFloat<<endl;
//
//	cout << sizeof(pFloat);
//	delete pFloat;
//
//	int* vector = new int[5];
//	*(vector + 0) = 10; //v[0]
//	*(vector + 1) = 20; //v[1]
//	*(vector + 2) = 30; //v[2]
//	*(vector + 3) = 40; //v[3]
//	*(vector + 4) = 50; //v[4]
//	//operatorul index[] realizeaza deplsare + dereferentiere
//	vector[2] = 30;
//	cout << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << vector[i]<<"  ";
//	}
//
//	delete []vector;
//}