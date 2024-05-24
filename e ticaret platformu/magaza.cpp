#include <iostream>
#include "magaza.h"
using namespace std;

Urun::Urun() {

}

//urun constructor
Urun::Urun(string _urun, int _fiyat, int _adet){
	fiyat = _fiyat;
	urun = _urun;
	adet = _adet;
}
void Urun::urunBilgileriGoster() {
	cout << "Urun: " << Urun::urun << endl;
	cout << "Fiyat: " << Urun::fiyat << endl;
	cout << "Adet: " << Urun::adet << endl;
}
void Urun::urunAlma() {

	cout << "Alinmak istenilen urun adý:" << endl;
	cin >> urun;
	cout << "alinan urun:" << urun << endl;
	cout << "kalan urun sayisi:" << --adet << endl;
	cout << "ODENECEK TUTAR: " << fiyat << endl;
	("cls");
}
