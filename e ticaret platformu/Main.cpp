#include <iostream>
#include <string>
#include "magaza.h"
using namespace std;
//urun fiyat adet
	int main() {
		string urun;
		cout << "********************" << endl;
		cout << "*                  *" << endl;
		cout << "*       MENU       *" << endl;
		cout << "*                  *" << endl;
		cout << "********************" << endl;
		cout << "1.Urun Listesi" << endl;
		Urun urun0();
		Urun urun1("Pantolon", 350, 5);
		Urun urun2("Gomlek",300,10);
		Urun urun3("Elbise",480,3);
		Urun urun4("Kazak",150,10);
		Urun urun5("Bluz",100,10);
		Urun urun6("Etek",150,5);
		Urun urun7("Sort",200,5);
		Urun urun8("canta",380,10);
		Urun urun9("ayakkabi",1000,5);
		Urun urun10("Ceket",900,5);

		urun1.urunBilgileriGoster();
		cout << endl << endl;

		urun2.urunBilgileriGoster();
		cout << endl << endl;

		urun3.urunBilgileriGoster();
		cout << endl << endl;

		urun4.urunBilgileriGoster();
		cout << endl << endl;

		urun5.urunBilgileriGoster();
		cout << endl << endl;

		urun6.urunBilgileriGoster();
		cout << endl << endl;

		urun7.urunBilgileriGoster();
		cout << endl << endl;

		urun8.urunBilgileriGoster();
		cout << endl << endl;

		urun9.urunBilgileriGoster();
		cout << endl << endl;

		urun10.urunBilgileriGoster();
		cout << endl << endl;
		cout << "liste siralamasina göre istek listenizi doldurunuz" << endl;
		cout << "almýiycaginiz urun yerine B harfi birakisniz" << endl;
		cout << "Ýstenilen urunu girniz:" << endl;
		urun1.urunAlma();

		urun2.urunAlma();
		
		urun3.urunAlma();

		urun4.urunAlma();

		urun5.urunAlma();

		urun6.urunAlma();

		urun7.urunAlma();

		urun8.urunAlma();

		urun9.urunAlma();

		urun10.urunAlma();
			 
		return 0;
	}
