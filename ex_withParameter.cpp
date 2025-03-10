#include <iostream>
using namespace std;

float phi = 3.14;
float r, luas; 

// prosedur input
void inputdata ()  {  
cout << "enter value of r : ";
cin >> r;
}

// fungsi  hitung luas / function for counting area of circle
float HitungLuasLingkaran() 
{
    return phi * r * r;
}
float HitungLuasLingkaranParameter(float x) {
    return phi * r * r;
}

// prosedur output
void outputData() {
    cout << "luas lingkaran = " << HitungLuasLingkaran();
}
// prosedur output
void outputDataParameter() {
    cout << "luas lingkaran = " << HitungLuasLingkaran();
}



int main()
{

    inputdata();
    outputData();
    outputDataParameter();
}