//TUGAS : Dari kedua program di atas buatlah ke dalam menu pilihan dengan perintah goto sebagai loncatannya atau perintah untuk kembali ke menu pilihan.
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	awal:
	system("cls");
	int pil;
	float s, lp, kp, p, l, lpp, kpp, a, t, miring, ls, ks;
	char yn;

	cout<<" ======================================="<<endl;
	cout<<"|\tMENU HITUNG BANGUN DATAR\t|"<<endl;
	cout<<" ======================================="<<endl;
	cout<<"| 1. Persegi\t\t\t\t|"<<endl;
	cout<<"| 2. Persegi Panjang\t\t\t|"<<endl;
	cout<<"| 3. Segitiga Siku-siku\t\t\t|"<<endl;
	cout<<"| 4. Keluar\t\t\t\t|"<<endl;
	cout<<" ======================================="<<endl;
	cout<<" Pilih Bangun Datar (1...4) : "; cin>>pil;
	
	switch (pil)
	{
	case 1:
		system("cls");
			//input
			cout<<"\tHITUNG PERSEGI"<<endl;
			cout<<"=============================="<<endl;
       		cout<<" Masukkan nilai sisi : "; cin>>s;
       		//hitung
       		lp=s*s;
       		kp=s*4;
       		//hasil
       		cout<<" Luas Persegi        : "<<lp<<endl;
       		cout<<" Keliling Persegi    : "<<kp<<endl;
		getch();
		goto awal;

	case 2:
		system("cls");
     		//input
			cout<<"\tHITUNG PERSEGI PANJANG"<<endl;
     		cout<<"======================================"<<endl;
     		cout<<" Masukkan nilai panjang   : "; cin>>p;
     		cout<<" Masukkan nilai lebar     : "; cin>>l;
     		//hitung
     		lpp=p*l;
     		kpp=(2*p)+(2*l);
     		//hasil
     		cout<<" Luas Persegi Panjang     : "<<lpp<<endl;
     		cout<<" Keliling Persegi Panjang : "<<kpp<<endl;
		getch();
		goto awal; 

	case 3:
		system("cls");
			//input
			cout<<"\tHITUNG SEGITIGA SIKU-SIKU"<<endl;
			cout<<"================================"<<endl;
			cout<<" Masukkan nilai alas   : "; cin>>a;
			cout<<" Masukkan nilai tinggi : "; cin>>t;
			//hitung
			ls=0.5*a*t;
			miring=sqrt((a*a)+(t*t));
			ks=a+t+miring;
			cout<<" Luas Segitiga         : "<<ls<<endl;
			cout<<" Keliling Segitiga     : "<<ks<<endl;
		getch();
		goto awal;
	
	case 4:
		system("cls");
		goto exit; 

	default: cout<<"\n Maaf pilihan yang anda masukkan salah"<<endl;
		getch();
		goto awal;
	}

	
	exit:
	cout<<" Apakah anda yakin ingin keluar <y/n> : "; cin>>yn;
	if (yn=='y' || yn=='Y'){
		cout<<" Terima kasih sudah menggunakan"<<endl;
	}else if (yn=='n' || yn=='N'){
		goto awal;
	}
	
	
	getch();
}
