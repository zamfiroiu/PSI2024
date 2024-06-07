//// Cod Examen.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//#include <iostream>
//#include <string>
//class Inspector {
//public:
//    // Atribute normale
//    std::string nume;
//    int nr_senzori;
//    double greutate;
//
//    // Atribute statice
//    static int numar_inspector;
//
//    // Atribute constante
//    const int nr_baterii;
//
//    // Pointer alocat în HEAP
//    int* pinsp;
//
//    // Constructori
//    Inspector() : nume("Ionut"), nr_senzori(0), greutate(0.0), nr_baterii(0) {
//        numar_inspector++;
//        pinsp = new int(10);
//    }
//
//    Inspector(std::string _nume) : nume(_nume), nr_senzori(0), greutate(0.0), nr_baterii(0) {
//        numar_inspector++;
//        pinsp = new int(10);
//    }
//
//    Inspector(std::string _nume, int _nr_senzori, double _greutate) : nume(_nume), nr_senzori(_nr_senzori), greutate(_greutate), nr_baterii(0) {
//        numar_inspector++;
//        pinsp = new int(10);
//    }
//
//
//    // Suprascriere operator de atribuire
//    Inspector& operator=(const Inspector& other) {
//        nume = other.nume;
//        nr_senzori = other.nr_senzori;
//        greutate = other.greutate;
//        // Copierea pointerului poate necesita o logică suplimentară în funcție de necesități
//        // Vom omite în acest exemplu, dar ar trebui să se țină cont de gestionarea resurselor dinamice
//        return *this;
//    }
//
//    // Suprascriere operator de egalitate
//    bool operator==(const Inspector& other) const {
//        if (nume == other.nume && nr_senzori == other.nr_senzori && greutate == other.greutate)
//            return true;
//        else
//            return false;
//    }
//
//    // Suprascriere operator de afișare
//    friend std::ostream& operator<<(std::ostream& os, const Inspector& inspector) {
//        os << "Nume: " << inspector.nume << ", Nr. senzori: " << inspector.nr_senzori << ", Greutate: " << inspector.greutate << std::endl;
//        return os;
//    }
//
//    // Destructor
//    ~Inspector() {
//        delete pinsp;
//    }
//
//
//};
//
//int Inspector::numar_inspector = 0;
//
//// Clasa care are o relație de "has-a" cu clasa Inspectoare
//class EchipaInspectie {
//private:
//    //Inspector Inspector; // EchipamentInspectie "are un" Inspector
//
//public:
//    // Constructori și alte funcții pot fi definite aici pentru manipularea echipamentului de inspecție
//};
//
//class MasiniForaj {
//public:
//    // Atribute normale
//    std::string nume;
//    double putere;
//    bool este_autonom;
//
//    // Atribute statice
//    static int numar_masini_foraj;
//
//    // Atribute constante
//    const int nr_roti;
//
//    // Pointer alocat în HEAP
//    int* pforaj;
//
//    // Constructori
//    MasiniForaj() : nume("MasiniForaj"), putere(0.0), este_autonom(false), nr_roti(0) {
//        numar_masini_foraj++;
//        pforaj = new int(20);
//    }
//
//    MasiniForaj(std::string _nume) : nume(_nume), putere(0.0), este_autonom(false), nr_roti(0) {
//        numar_masini_foraj++;
//        pforaj = new int(20);
//    }
//
//    MasiniForaj(std::string _nume, double _putere) : nume(_nume), putere(_putere), este_autonom(false), nr_roti(0) {
//        numar_masini_foraj++;
//        pforaj = new int(20);
//    }
//    // Destructor
//    ~MasiniForaj() {
//        delete pforaj;
//    }
//
//};
//
//int MasiniForaj::numar_masini_foraj = 0;
//
//// Clasa derivată care are o relație de "is-a" cu clasa MasiniForaj
//class MasinaSpeciala : public MasiniForaj {
//public:
//    // Constructori și alte funcții pot fi definite aici pentru manipularea mașinii speciale
//
//    bool operator==(const MasinaSpeciala& other) const
//    {
//        return false;
//    }
//};
//
//
//class ModuleTransport {
//public:
//    // Atribute normale
//    std::string nume;
//    double capacitate;
//    int nr_roti;
//
//    // Atribute statice
//    static int numar_module_transport;
//
//    // Atribute constante
//    const int nr_ani_garantie;
//
//    // Pointer alocat în HEAP
//    int* ptransp;
//
//    // Constructori
//    ModuleTransport() : nume("ModuleTransport"), capacitate(0.0), nr_roti(0), nr_ani_garantie(0) {
//        numar_module_transport++;
//        ptransp = new int(30);
//    }
//
//    ModuleTransport(std::string _nume) : nume(_nume), capacitate(0.0), nr_roti(0), nr_ani_garantie(0) {
//        numar_module_transport++;
//        ptransp = new int(30);
//    }
//
//    ModuleTransport(std::string _nume, double _capacitate, int _nr_roti) : nume(_nume), capacitate(_capacitate), nr_roti(_nr_roti), nr_ani_garantie(0) {
//        numar_module_transport++;
//        ptransp = new int(30);
//    }
//    // Destructor
//    ~ModuleTransport() {
//        delete ptransp;
//    }
//
//};
//
//int ModuleTransport::numar_module_transport = 0;
//
//
//
//int main() {
//    // Exemplu de utilizare
//    std::string numeInsp;
//    int nr_senz;
//    double greut;
//
//    std::cout << "Introduceti numele inspectorului: ";
//    std::cin >> numeInsp;
//
//    std::cout << "Introduceti nr de senzori: ";
//    std::cin >> nr_senz;
//
//    Inspector i1;
//    Inspector i2(numeInsp);
//    Inspector i3(numeInsp, nr_senz, 150.0);
//
//    std::string numeMasiniForaj;
//    int numar_roti;
//    double putere;
//
//    MasiniForaj m1, m7, m8;
//    MasiniForaj m2("MT200");
//    MasiniForaj m3("Marius", 2000.0);
//
//    ModuleTransport mt1, mtx;
//    ModuleTransport mt2("MT200");
//    ModuleTransport mt3("MTX", 5000.0, 12);
//
//    std::cout << i3;
//    i1 = i3;
//    std::cout << i1;
//
//    std::cout << m3.putere;
//    std::cout << "Putere masina foraj 3:" << std::endl;
//
//
//    std::cout << "Numar de inspector creati: " << Inspector::numar_inspector << std::endl;
//    std::cout << "Numar de masini de foraj create: " << MasiniForaj::numar_masini_foraj << std::endl;
//    std::cout << "Numar de module de transport create: " << ModuleTransport::numar_module_transport << std::endl;
//
//    // Suprascrieri de operatori pot fi folosite acum
//    i3 = i2; // Operator de atribuire
//
//    std::cout << "Testare operator egalitate:" << std::endl;
//    std::cout << (i1 == i3) << std::endl; // Operator de egalitate
//
//    std::cout << "Afisare inspector 1:" << std::endl;
//    std::cout << i1 << std::endl; // Operator de afișare
//
//    //delete i1.pinsp;
//    //delete i2.pinsp;
//    //delete i3.pinsp;
//    //delete m1.pforaj;
//    //delete m2.pforaj;
//    //delete m3.pforaj;
//    //delete mt1.ptransp;
//    //delete mt2.ptransp;
//    //delete mt3.ptransp;
//
//
//    return 0;
//}
