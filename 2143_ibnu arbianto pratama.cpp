#include <iostream>
#include <string>
using namespace std;


int jenjang,gajipko,anak,stat,tjgistri,tjganak, gajitot,jmkerja,totkerja,gender,hslsmntr,gajibersih,gajlmp;
void funjnjg();
void funnkh();
int funjmkerja();
int main (){
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
	string nama,alamat;
	cout<<"Masukkan nama anda : "<<endl;
	getline (cin, nama); 
	cout<<"Masukkan alamat anda : "<<endl;
	getline (cin, alamat);
	cout<<"=========================================="<<endl;
	cout<<"  Jenjang Pendidikan Anda :  "<<endl;
	cout<<"	1. SMA "<<endl;
	cout<<"	2. D3 "<<endl;
	cout<<"	3. S1 "<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Masukkan jenjang pendidikan anda :  "<<endl;
	cin>>jenjang;
	funjnjg();
	cout<<"=========================================="<<endl;
	cout<<"Sudah menikah atau belum?"<<endl;
	cout<<"1. Sudah"<<endl;
	cout<<"2. Belum"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"jawaban anda : "<<endl;
	cin>>stat;
	cout<<"=========================================="<<endl;
	cout<<"Jenis Kelamin:"<<endl;
	cout<<"1. Laki-Laki"<<endl;
	cout<<"2. Perempuan"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Masukkan jenis kelamin : "<<endl;
	cin>>gender;
	funnkh();
	cout<<"masukkan jam kerja : "<<endl;
	cin>>jmkerja;
	int funjmkerja();
	
	cout<<"\n=============================="<<endl;
	cout<<" BERIKUR DETAI SLIP GAJI ANDA "<<endl;
	cout<<"Nama karyawan : "<<nama<<endl;
	cout<<"Gaji Kotor anda : Rp."<<gajitot<<endl;
	gajibersih = gajitot - 0.0025;
	cout<<"Gaji Bersih anda : Rp."<<gajibersih<<endl;
	cout<<"\n=============================="<<endl;
}
void funjnjg(){
	if(jenjang==1){
	gajipko = 500000;
} else if (jenjang==2) {
	gajipko = 750000;
} else if (jenjang==3) {
	gajipko = 1000000;
}
}
void funnkh(){
	switch(stat)
{
  case 1:
 	if (stat==1)
	{
		if(gender==1) {
			tjgistri= 300000+gajipko;
			cout<<"jumlah anak : "<<endl;
			cin>>anak;
			if (anak<=2)
			{
				tjganak = anak * 100000;
				gajitot = tjgistri + tjganak;
			} else if (anak>=2){
				tjganak = 2 * 100000;
				gajitot = tjgistri + tjganak;
				cout<<"karena jumlah anak anda lebih dari 2 maka yang di hitung dalam tunjangan maksimal 2 orang anak"<<endl;
			} else {
				cout<<"maaf anda tidak mendapat tunjangan anak"<<endl;
			}
		} else if (gender==2){
			cout<<"jumlah anak : "<<endl;
			cin>>anak;
			if (anak<=2)
			{
				tjganak = anak * 100000;
				gajitot = tjganak + gajipko;
			} else if (anak>=2){
				tjganak = 2 * 100000;
				gajitot = tjganak + gajipko;
				cout<<"karena jumlah anak anda lebih dari 2 maka yang di hitung dalam tunjangan maksimal 2 orang anak"<<endl;
			} else {
				cout<<"maaf anda tidak mendapat tunjangan anak"<<endl;
			}
		} else {
		cout<<"Pilihan anda tidak masuk list"<<endl;
	}
	} else {
		cout<<"Pilihan anda tidak masuk list"<<endl;
	}
	break;
	case 2:
	if (gender==1){
		gajitot=gajipko;
	} else if (gender==2){
		gajitot=gajipko;
	} else {
		cout<<"Pilihan anda tidak masuk list"<<endl;
	}
	break;
	default :
	cout<<"Pilihan anda tidak masuk list"<<endl;
	break;
}
}
int funjmkrja(){
	if(jmkerja>=6){
		totkerja = jmkerja * 10000;
		gajitot = gajitot + totkerja;
		cout<<"total jam lembur anda"<<totkerja<<endl;
	} else if (jmkerja<6) {
		totkerja = gajitot;	
	} else {
		cout<<"maaf anda tidak mendapatkan upah lembur"<<endl;
	}
	return 1;
}



