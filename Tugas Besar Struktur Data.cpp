#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
 int a=1,n,d,c,b;

struct Pasien
{
    string alamat;
    string nama;
    int nip;
    char jk;
    string gejala;
    string umur;
}psn[40];

struct Poli
{
    string nama;
    string spesialis;
    int nik;
}pl[40];

struct Pendaftaran
{
    string tgl;

}Pdf[19];

void tambah_psn(Pasien)
{
        int pilih=1;
        do {system("cls");
        cout<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|     Menginputkan Data Pasien      |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|     1.Input Data Pasien          :|"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|     2.Tampilkan Data Pasien      :|"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|     3.Update Data Pasien         :|"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|     4.Hapus Data Pasien          :|"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|     0.Kembali                    :|"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|     Pilih menu                   :|"<<endl;
        cout<<"|-----------------------------------|"<<endl;cin>>pilih;
        switch(pilih)
{

        case 1:
        d=0;
        cout<<"Jumlah Data Yang Akan Dimasukan :";cin>>b;
        for(c=0;c<b;c++)
        {
        d=d+1;
        cout<<"\nData Ke-"<<d<<endl;
        cout<<"Masukan Nomor Induk Pasien :";cin>>psn[a].nip;
        cout<<"Masukkan Nama Pasien :";cin>>psn[a].nama;
        cout<<"Masukan Umur :";cin>>psn[a].umur;
        cout<<"Masukkan Jenis Kelamin (L/P) :";cin>>psn[a].jk;
        cout<<"Masukkan Alamat :";cin>>psn[a].alamat;
        cout<<"Masukkan Gejala/Penyakit:";cin>>psn[a].gejala;
        a++;}
        break;

        case 2:

         int i,j;
            j=0;
            for(i=1;i<a;i++)
                {j=j+1;
        cout<<"Data-data Pasien"<<endl;
        cout<<"_________________________"<<endl;
        cout<<"NIP              :"<<psn[i].nip<<endl;
        cout<<"Nama Pasien      :"<<psn[i].nama<<endl;
        cout<<"Umur             :"<<psn[i].umur<<endl;
        cout<<"Jenis Kelamin    :"<<psn[i].jk<<endl;
        cout<<"Alamat           :"<<psn[i].alamat<<endl;
        cout<<"Gejala/Penyakit  :"<<psn[i].gejala<<endl;
        break;

        case 3:
        cout<<"Pilih Data Pasien Yang Akan Di Update"<<endl;
        int k,l;
        cout<<"Masukan Data yang akan diedit : ";cin>>k;
        l=k-1;

        cout<<"NIP              :"; cin>>psn[i].nip;
        cout<<"Nama Pasien      :"; cin>>psn[i].nama;
        cout<<"Umur             :"; cin>>psn[i].umur;
        cout<<"Jenis Kelamin    :"; cin>>psn[i].jk;
        cout<<"Alamat           :"; cin>>psn[i].alamat;
        cout<<"Gejala/Penyakit  :"; cin>>psn[i].gejala;
        cout<<endl;
        break;

        case 4:

        cout<<"Pilih data Yang Akan Dihapus"<<endl;
        int x,y;
         cout<<"Hapus data ke-";cin>>x;
         y=x-1;
         a--;
         for(int i=y;i<a;i++)
         {psn[i]=psn[i+1];}
        cout<<"Data Yang Dihapus :"<<x<<endl;
        break;

        case 0:
            cout<<"Selesai, Terima Kasih"<<endl;
            break;
        default:
            cout<<"Silahkan PiliH Menu Kembali"<<endl;
    }
        break;

}
        system ("pause");
}
        while(pilih!=0);
}


void tambah_pl(Poli)
{
        int pilih=1;
        do {system("cls");
        cout<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|            Daftar Poli            |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|1.Poli Penyakit Dalam              |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|2.Poli Mata                        |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|3.Poli Tulang                      |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|4.Poli Gigi                        |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|5.Poli Anak                        |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|0.kembali                          |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|pilih:                             |"<<endl;
        cout<<"|-----------------------------------|"<<endl;cin>>pilih;

            switch(pilih);

{

        cout<<"Masukan Nomor Induk Karyawan :";cin>>pl[a].nik;
        cout<<"Masukkan Nama Dokter :";cin>>pl[a].nama;
        cout<<"Masukan Dokter Spesialis :";cin>>pl[a].spesialis;
        a++;
}
break;
}
    while(pilih!=0);
}

void transaksi_Pdf(Pendaftaran)
{
    int pilih=1;
        do {system("cls");
        cout<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|            Pendaftaran            |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|1.Masukan Tnggal                   |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|2.Tampil Data Pasien               |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|3.Tampil Data Poli                 |"<<endl;
        cout<<"|-----------------------------------|"<<endl;cin>>pilih;

            switch(pilih);
{
    cout<<"Masukan Tanggal Pendaftaran :";cin>>Pdf[a].tgl;
    cout<<"Tampil Data Pasien :"<<endl;
    cout<<"Tampil Data Pasien :"<<endl;
}
break;
}
while(pilih!=0);
}

int main(){
    int pilih=0;
    do {system ("cls");
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|Daftar Pelayanan Puskesmas :       |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|1. Data Pasien                     |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|2. Data Poli                       |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|3. Transaksi Pendaftaran           |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|0. Keluar                          |"<<endl;
        cout<<"|-----------------------------------|"<<endl;
        cout<<"|Pilih Menu :                       |"<<endl;
        cout<<"|-----------------------------------|"<<endl;cin>>pilih;
        switch(pilih)

    {
        case 0:{cout<<"terimakasih "<<endl;break;}
        case 1:{tambah_psn(psn[50]);} break;
        case 2:{tambah_pl(pl[49]);} break;
        case 3:{transaksi_Pdf(Pdf[19]);}break;

        default:cout<<"Salah pilih menu "<<endl;}

    system("pause");
    }
    while(pilih!=0);
    return 0;

}



