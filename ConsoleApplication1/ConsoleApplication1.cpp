#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int toplam,notsayaci,notu,ortalama;
	toplam = 0;
	notsayaci = 0;
		while (notsayaci<2)
		{
			cout << "Notu Giriniz: ";
			cin >> notu;
			toplam = toplam + notu;
			notsayaci = notsayaci + 1;

		}
	ortalama = toplam / notsayaci;
	cout << "Sınıf Ortalaması " << ortalama << endl;
	return 0;
}