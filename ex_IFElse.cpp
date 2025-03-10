#include <iostream>
using namespace std;

float phi = 3.14;
float r, luas;

// Prosedur input
void inputData() {
    cout << "Enter the Value of r : ";
    cin >> r;
}

//Fungsi Hitung Luas
float hitungLuasLingkaran() {
    return phi * r * r;
}

//dengan parameter
float hitungLuasLingkaranParamater(float x) 
{
    return phi * x * x;
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

//Prosedur Output Paramater
void outputDataParamater() {
    cout << "Luas Lingkaran = " << hitungLuasLingkaranParamater(r) << endl;
    cout << "Besaran Lingkarannya adalah " << statusBesaranLingkaran(hitungLuasLingkaranParamater(r));
}

int main()
{

    inputData();
    outputData();
    outputDataParamater();

}


