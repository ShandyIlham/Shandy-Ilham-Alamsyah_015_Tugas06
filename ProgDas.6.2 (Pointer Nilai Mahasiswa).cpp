/*	Buatlah program untuk menentukan keterangan dari nilai mata kuliah menggunakan fungsi dengan parameter pointer. Dengan ketentuan jika :
	- Nilai >= 90 - 100 maka A
	- Nilai >= 80 - < 90 maka B
	- Nilai >= 70 - < 80 maka C
	- Nilai >= 60 - < 70 maka D
	- Nilai >= 50 - < 60 maka E
	- Nilai < 50 maka tidak lulus*/
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int nilai;
	char matkul[30], grade[30]="Keterangan nilai";
	string grd;
	char *ptr_matkul, *ptr_grade;
	ptr_matkul=matkul;
	ptr_grade=grade;
	
	cout<<"=================================================="<<endl;
	cout<<"|           Progam Nilai Mata Kuliah             |"<<endl;
	cout<<"=================================================="<<endl;
	cout<<"Input : "<<endl<<endl;
	cout<<" Masukkan nama mata kuliah  : "; cin>>ptr_matkul;
	cout<<" Masukkan nilai mata kuliah : "; cin>>nilai;
	
	if(nilai>=90 && nilai<=100){
			grd="A";
	} else if (nilai>=80 && nilai<90){
			grd="B";
		} else if (nilai>=70 && nilai<80){
			grd="C";
		} else if (nilai>=60 && nilai<70){
			grd="D";
		} else if (nilai>=50 && nilai<60){
			grd="E";
		}else if (nilai<50){
			grd="anda tidak lulus";
		}else{
			grd=" nilai yang anda masukkan salah!!";
		}
	
	cout<<endl;
	cout<<"=================================================="<<endl;
	cout<<" nilai "<<matkul<<" = "<<nilai<<", "<<ptr_grade<<" = "<<grd<<endl;
	
}
