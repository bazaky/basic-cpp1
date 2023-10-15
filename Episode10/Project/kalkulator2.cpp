
#include <iostream>

using namespace std;
int main(){
 
 float a,b,hasil;
 char aritmatika;

 // Program Kalkulator Sederhana
 
 cout <<"Selamat datang di program kalkulator \n\n";
 
 // Input dari user
 cout <<"Masukkan nilai pertama : ";
 cin >>a;
 cout <<"Pilih Operator +,-,*,/: ";
 cin >>aritmatika;
 cout <<"Masukkan nilai kedua : ";
 cin >> b;
 
 cout <<"Hasil Perhitungan : ";
 cout << a << aritmatika << b;
  
 //Kondisi 
 switch(aritmatika){
  case '+':
   hasil = a+b;
   break;
  case '-':
   hasil = a-b;
   break;
  case '*':
   hasil = a*b;
   break;
  case '/':
   hasil = a/b;
   break;
  default:
   cout << "Operator salah";    
 }
 
 cout << " = " << hasil << endl;
 cin.get();
 return 0;
}