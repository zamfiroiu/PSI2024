//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class A {
//public:
//	string metoda1() {
//		return "A";
//	}
//	virtual string metoda2() {
//		return "A. Virtual";
//	}
//};
//class B :public A {
//public:
//	virtual string metoda1() {
//		return "B";
//	}
//	string metoda2() {
//		return "B. Virtual din A";
//	}
//};
//class C :public B {
//public:
//	string metoda1() {
//		return "C. virtual din B";
//	}
//	string metoda2() {
//		return "C. Virtual din A";
//	}
//};
//void main() {
//
//	//A*obj = new C();
//	//cout << obj->metoda1() << endl;
//	//cout << obj->metoda2() << endl;
//
//	//cout << endl;
//
//	//B*b = new C();
//	//cout << b->metoda1() << endl;
//	//cout << b->metoda2() << endl;
//
//	int nr = 10;
//	A**vector = new A*[nr];
//	vector[0] = new B();
//	vector[1] = new C();
//	vector[2] = new A();
//	vector[3] = new B();
//	vector[4] = new C();
//	vector[5] = new A();
//	vector[6] = new C();
//	vector[7] = new B();
//	vector[8] = new C();
//	vector[9] = new B();
//
//	for (int i = 0; i < nr; i++) {
//		cout << vector[i]->metoda2()<<endl;
//	}
//}