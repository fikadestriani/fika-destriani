#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int BVL, p, l, s, r, a, t;
	float luas;
	cout<< "Menghitung Volume Bangun dan Luas Bangun Datar "<<endl;
	cout<<" Kode Volume dan Luas "<<endl;
	cout<<" 1 : Luas Segitiga "<<endl;
	cout<<" 2 : Luas Persegi panjang "<<endl;
	cout<<" 3 : Luas Lingkaran "<<endl;
	cout<<" 4 : Volume Tabung "<<endl;
	cout<<" 5 : Volume Balok "<<endl;
	cout<<" 6 : Kubus "<<endl;
	cout<<" Masukkan Kode Bangun Ruang Yang ingin Dicari Luas dan Volumenya :";
	cin>> BVL;
	
	switch (BVL){
		case 1 :  {
					cout<<" Menghitung Luas Segitiga "<<endl;
					cout<<" Masukkan Alas = "; cin>> a;
					cout<<" Masukkan Tinggi = "; cin>> t;
					luas = t*a /2;
					cout<<" Luas Segitiga ="<< luas;
					};
					break;
		case 2  :  { 
		cout<<" Menghitung Luas Lingkaran "<<endl;
					cout<<" Masukkan Jari-Jari = "; cin>> r;
					luas=r*r;
					cout<<" Luas Lingkaran = " <<luas;
					};
				break;
		case 3  :  {
			cout<<" Menghitung Luas Persegi Panjang "<<endl;
					cout<<" Masukkan Panjang = "; cin>> p;
					cout<<" Masukkan Lebar = "; cin>> l;
					luas = p*l;
					cout<<" Luas Persegi Panjang ="<< luas;
					};
					break;
		case 4  :  {
			cout<<" Menghitung Luas Bujur Sangkar "<<endl;
					cout<<" Masukkan Sisi  = "; cin>> s;
					luas = s*s;
					cout<<" Luas Bujur Sangkar ="<< luas;
					};
					break;
		case 5  :  {
			cout<<" Menghitung Luas Volume Balok "<<endl;
					cout<<" Masukkan Panjang = "; cin>> p;
					cout<<" Masukkan Lebar = "; cin>> l; 
					cout<<" Masukkan Tinggi = "; cin>> t;
					luas = p*l*t;
					cout<<" Luas Volume Balok = "<< luas;
					};
					break;
		case 6  :  {
			cout<<" Menghitung Luas Kubusr "<<endl;
					cout<<" Masukkan Sisi  = "; cin>> s;
					luas = s*s*s;
					cout<<" Luas Kubus ="<< luas;
					};
					break;
					
		
					
		default : cout<" Maaf Kode Bangun Ruang Yang Anda Masukkan Salah ";
		
		}
		}
		
	

