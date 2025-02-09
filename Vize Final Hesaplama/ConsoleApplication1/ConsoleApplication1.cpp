#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
   
    string isim;
    double vize, final, sonuc;

    cout << "İsminizi Giriniz: ";
    cin >> isim;
    cout << "Vize notunuzu giriniz: ";
    cin >> vize;
    cout << "Final notunuzu giriniz: ";
    cin >> final;
    sonuc = vize * 40 / 100 + final * 60 / 100;
    
    if (sonuc>=50)
    {
        cout << "Tebrikler " << isim << " Geçtiniz.";

    }
    else
    {
        cout << "Maalesef " << isim << " Kaldınız.";
    }
}


