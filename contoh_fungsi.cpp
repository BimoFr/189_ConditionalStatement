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

void procedurOutput(){
    cout << "Luas Segitiga = " << hitungLuas() << endl;
}

int main(){
procedurinput();
procedurOutput();
}