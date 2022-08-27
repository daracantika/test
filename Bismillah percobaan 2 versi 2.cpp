#include <iostream>
#include <cstdlib> // untuk memudahkan perhitungan nilai mutlak, menggunakan fungsi abs
#include <cmath> // dalam codding ini digunakan untuk membuat fungsi abs dari 'cstdlib' bisa menggunakan type variable float
using namespace std;

int main()
{
	int i;
	int d;
	int x;
	float xpart[i];
	string t;
	
	float xteori[d];
	float xpercobaan[d];
	float teori;
	float percobaan;
	float hasil;
	
	cout<<"A. Perhitungan Rata-Rata,Standar deviasi, ketelitian"<<endl;
	cout<<"B. Perhitungan KSR"<<endl;
	cout<<"Pilih indek 'A' atau 'B' untuk menentukan program yg ingin dijalankan"<<endl;
	cin>>t;

if(t=="A")
{
	cout<<"berapa data percobaan yang ingin anda input"<<endl;
	cin>>x;
	if(x>0 )
	{	
			for(i=0;i<x;i++) //mengiputkan data
			{
				cout<<"masukan nilai data ke-"<<i+1<<" = ";
				cin>>xpart[i];
			}cout<<endl;
			int jumlah=0;
			for(i=0;i<x;i++)
			{
				jumlah=jumlah+xpart[i];
			}
			//operasi rata-rata
		float n=x;
		float rata2;
			rata2=jumlah/n;
			cout<<"total penjumlahan seluruh data adalah "<<jumlah<<" dengan Rata-ratanya = "<<rata2<<endl;
			//operasi standar deviasi
		float standardeviasi[i];
		float pangkat;
		int z=2;
			for(i=0;i<x;i++)
			{
				hasil=rata2-xpart[i];
				pangkat=pow(hasil,z);
				standardeviasi[i]=(pangkat)/n*(n-1);
			}
		float total=0;
			for(i=0;i<x;i++)
			{
				total=total+standardeviasi[i];
			}
			//operasi akar Dari total Standar Deviasi
		float c;
		c=sqrt(total);
		cout<<"Nilai Standar Deviasi percobaan kali ini adalah "<<c<<endl;
			//operasi ketelitian
		float ketelitian;
	
		float ketelitianx;
			ketelitian=(1-c/rata2)*100;
			ketelitianx=abs(ketelitian);
			
			cout<<"Ketelitian dari semua data percobaan ini adalah "<<ketelitianx<<" %"<<endl;
	}
	else
	{
		cout<<"DATA HARUS LEBIH DARI NOL"<<endl;
	}
}else if(t=="B")
{
	cout<<"berapa data percobaan yang ingin anda input"<<endl;
	cin>>d;
	if(d>0)
	{
		for(i=0;i<d;i++)
		{
			cout << "Masukkan Xpercobaan Ke- " << i+1 << " = " ;
			cin  >> percobaan ;
			xpercobaan[i]=percobaan ;
			cout << "Masukkan Xteori Ke-" << i+1 << " = " ;
			cin  >> teori ;
			xteori[i]=teori;		
		}cout<<endl;
			for (i=0;i<d;i++)
		{
			cout<<"data percobaan ke-"<< i+1 << " adalah "<<xpercobaan[i]<<endl;
			cout<<"data teori percobaan ke-"<< i+1 << " adalah "<<xteori[i]<<endl;
		}cout<<endl;
			float ksr;
			for (i=0;i<d;i++)
		{
			hasil=xpercobaan[i]-xteori[i];
			ksr=(hasil/xteori[i])*100;
			float mutlak;
		    mutlak=abs(ksr);
	    	cout<<"KSR dari ke-"<<i+1<< " percobaan adalah "<<mutlak<<" %"<<endl;
		}cout<<endl;
	}else 
	{
	    cout<<"DATA HARUS LEBIH DARI NOL";
    }
}
return 0;
}
