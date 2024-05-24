#pragma once
#include <iostream>
using namespace std;


class Urun {
public:
	string urun,B;
	int fiyat, adet,i;
	void urunBilgileriGoster();
	void urunAlma();
	void urunSilme();
	Urun(string _urun, int _fiyat, int _adet);
	Urun();
};

