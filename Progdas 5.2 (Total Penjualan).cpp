/* TUGAS
	Buat program untuk mencari total penjualan dari n jenis barang, dan pemberian diskon penjualan, dengan ketentuan, pembelian diatas 500 ribu mendapat diskon 10%,
	pembelian diatas 200 ribu sampai dengan 500 ribu mendapat diskon 5%, pembelian 200 ribu kebawah tidak mendapat diskon.*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int jml_brg;
    long int harga[10], jml[10];
    float total, bayar, diskon;

    cout<<"--------------------------------------"<<endl;
    cout<<"|        Total Penjualan Barang      |"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<" Jumlah barang: ";cin>>jml_brg;
            for(int i=0; i<jml_brg; i++){
                cout<<"--------------------------------------"<<endl;
                cout<<"Harga    : "; cin>>harga[i];
                cout<<"jumlah   : "; cin>>jml[i];
                cout<<endl;
                total+=harga[i]*jml[i];
            }

                if(total>=500000){
                    diskon=0.10*total;
                    bayar=total-diskon;
                        cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jumlah belanja     : "<<total<<endl;
                        cout<<"Diskon             : "<<diskon<<endl;
                        cout<<"Yang harus dibayar : "<<bayar<<endl;
                        cout<<"--------------------------------------"<<endl;
                }else if(total>=200000 && total<=500000){
                	diskon=0.05*total;
                	bayar=total-diskon;
                        cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jumlah belanja     : "<<total<<endl;
                        cout<<"Diskon             : "<<diskon<<endl;
                        cout<<"Yang harus dibayar : "<<bayar<<endl;
                        cout<<"--------------------------------------"<<endl;
                }else{
                	bayar=total;
                	    cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jumlah belanja     : "<<total<<endl;
                        cout<<"Diskon             : -"<<endl;
                        cout<<"Yang harus dibayar : "<<bayar<<endl;
                        cout<<"--------------------------------------"<<endl;
				}

}
