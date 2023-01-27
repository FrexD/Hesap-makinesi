#include <iostream>

using namespace std;

int main(){
	double sayiBir,sayiIki;
	char tercih;
	cout<<"Ilk Sayiyi giriniz: ";
	cin>>sayiBir;
	cout<<"Ikinci Sayiyi giriniz: ";
	cin>>sayiIki;
	cout<<"Yapmak Istediginiz islemi seciniz"<<endl;
	cout<<"================================="<<endl;
	cout<<"Toplama Islemi icin + basiniz"<<endl<<"Cikarma Islemi icin - basiniz"<<endl<<"Carpma Islemi icin * basiniz"<<endl<<"Bolme Islemi icin / basiniz"<<endl;
	cout<<"================================="<<endl;
	cin>>tercih;
	
	double toplam=sayiBir+sayiIki;
	double cikarma=sayiBir-sayiIki;
	double carpma=sayiBir*sayiIki;
	double bolme=sayiBir/sayiIki;
	
	if(tercih=='+'){
		cout<<"Toplama Islemi Sonucu: "<<toplam;
	}else if(tercih=='-'){
		cout<<"Cikarma Islemi Sonucu: "<<cikarma;
	}else if(tercih=='*'){
		cout<<"Carpma Islemi Sonucu: "<<carpma;
	}else if(tercih=='/'){
		cout<<"Bolme Islemi Sonucu: "<<bolme;
	}else{
		cout<<"Hatali islem";
	}
	
}
