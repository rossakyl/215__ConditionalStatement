#include <iostream>
using namespace std;

float phi = 3.14;
float r, luas;

//prosedur input
void inputData() {
    cout << "Enter the value of r:";
    cin >> r;
}

//Fungsi Hitung Luas
float hitungLuasLingkaran() {
    return phi *r*r;
}

//Dengan parameter
float hitungLuasLingkaranParameter(float x) 
{
    return phi *x*x;
}

//Prosedur Output
void outputData() {
    cout << "Luas Lingkaran = " << hitungLuasLingkaran() <<endl;
}

//Fungsi untuk cek status lingkaran
string statusBesaranLingkaran(float luas) {
    if(luas > 30) {
        return "Besar";
    }
    else {
        return "Kecil";
    }
}

//prosedur output parameter
void outputDataParameter() {
    cout << "Luas Lingkaran = " << endl;
    cout << "Besaran Lingkarannya adalah" <<
    statusBesaranLingkaran(hitungLuasLingkaranParameter(r));
}

int main()
{

    inputData();
    outputData();
    outputDataParameter();
}