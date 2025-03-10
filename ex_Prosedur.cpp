#include <iostream>
using namespace std;

float phi = 3.14;
float r, luas;

// prosedur input
void inputData() 
{
    cout << "Enter Value of r : ";
    cin >> r;
}

// 
void hitungLuasLingkaran() 
{
    luas = phi * r * r;
}

// prosedur output
void outputData() 
{
    cout << "Luas Lingkaran = " << luas;
}

int main () 
{

    inputData();
    hitungLuasLingkaran();
    outputData();
}