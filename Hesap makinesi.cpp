#include <iostream>

using namespace std;

int main(){
	int sayiBir,sayiIki,tercih;
	cout<<"Ilk Sayiyi giriniz: ";
	cin>>sayiBir;
	cout<<"Ikinci Sayiyi giriniz: ";
	cin>>sayiIki;
	cout<<"Yapmak Istediginiz islemi seciniz"<<endl;
	cout<<"================================="<<endl;
	cout<<"Toplama Islemi icin 1 e basiniz"<<endl<<"Cikarma Islemi icin 2 e basiniz"<<endl<<"Carpma Islemi icin 3 e basiniz"<<endl<<"Bolme Islemi icin 4 e basiniz"<<endl;
	cout<<"================================="<<endl;
	cin>>tercih;
	
	int toplam=sayiBir+sayiIki;
	int cikarma=sayiBir-sayiIki;
	int carpma=sayiBir*sayiIki;
	int bolme=sayiBir/sayiIki;
	
	if(tercih==1){
		cout<<"Toplama Islemi Sonucu: "<<toplam;
	}else if(tercih==2){
		cout<<"Cikarma Islemi Sonucu: "<<cikarma;
	}else if(tercih==3){
		cout<<"Carpma Islemi Sonucu: "<<carpma;
	}else if(tercih==4){
		cout<<"Bolme Islemi Sonucu: "<<bolme;
	}else{
		cout<<"Hatali islem";
	}
	
}
