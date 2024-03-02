#include<iostream>

using namespace std;

int suma(int a, int b) {
	int c = a + b;
	return c;
}

float suma(float a, float b) {
	return a + b;
}

int suma(int a, int b, int c) {
	return a + b + c;
}

int main() {

	int a = 10;
	int b = 20;
	int c = 15;
	int d = 25;

	int* pointerA = &a;
	int* pointerB = &b;

	int* p = new int(57);
	int* v = new int[3] {5,3,8};
	cout << *(v + 0) << endl;//v[0]
	cout << *(v + 1) << endl;//v[1]
	cout << *(v + 2) << endl;//v[2]

	//cout << *p<<endl;
	//cout << pointerA << endl;
	//cout << pointerB << endl;


	delete p;
	delete []v;

}
