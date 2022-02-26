// nama afriza tri rizki 
// tugas coding adt_menghitung luas dan keliling jajar genjang 
// informatika b , npm G1A021020

#include <iostream>
//iostream adalah header
using namespace std;
int main(){
float alas,tinggi,sisi_ab,sisi_bc,luas,keliling;
//variabel alas,tinggi,sisi_ab,sisi_bc,luas,keliling adalah variabel yang bertipe integer
char lagi;
do
{
double ip;

cout<<"Menghitung Luas dan Keliling Jajar Genjang"<<endl;
cout<<"Masukan Alas =";
cin>>alas;
cout<<"Masukan Tinggi =";
cin>>tinggi;
cout<<"Masukan Sisi ab =";
cin>>sisi_ab;
cout<<"Masukan Sisi bb =";
cin>>sisi_bc;
luas=alas*tinggi;
//rumus luas dan keliling jajar genjang akan di simpan pada variabel luas 
cout<<"luas ="<<luas<<endl;
//variabel yang sudah di isi dengan variabel 
//akan di outputkan oleh program sebagai hasil akhir 
keliling=2*(sisi_ab+sisi_bc);
//rumus keliling jajar genjang akan di simpan pada variabe keliling 
cout<<"keliling ="<<keliling<<endl;
//variabel yang sudah di isi dengan rumus keliling 
//akan di outpun kan oleh program sebagai hasil akhir

cout<<"\n\nReply [Y/T] : ";cin>>lagi;
}
while(lagi == 'y' || lagi == 'Y');
cout<<"\n";

return 0;
//return bertujuan untuk memulai kembali program 
}
