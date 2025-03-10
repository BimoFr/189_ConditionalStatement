#include <iostream>
using namespace std;
   
double alas, tinggi;

void procedurinput(){
cout << "Masukkan Nilai alas : ";
cin >> alas;

cout << "Masukkan Nilai tinggi : ";
cin >> tinggi;
}

double hitungLuas(){
    return 0.5 * alas * tinggi;
}
double hitungLuas2(double a, double t){
return 0.5 * a * t;
}

void procedurOutput(){
    cout << "Luas Segitiga = " << hitungLuas() << endl;
}

void procedurOutput2(){
    cout << "Luas Segitiga = " << hitungLuas2(alas, tinggi) << endl;
}

int main(){
procedurinput();
procedurOutput();
procedurOutput2();
}