#include "kontroler.h"

kontroler::kontroler()
{
    naped *asd1 = new naped();
    napedy.push_back(asd1);
    m_wytworcza *asd2 = new m_wytworcza();
    m_w.push_back(asd2);
    this->wczytaj_cz();
}

kontroler::~kontroler()
{
    //dtor
}

void kontroler::wczytaj_cz()
{
    this->czujniki=m_w.at(0)->stworz();
}

void kontroler::akcja()
{
    int wybor;
    int wartosc;
    do
    {
        cout << "\nWybierz:\n1: Ruch\n2: Obrot\n3: Odczyt\n4: Zmiana stanu czujnika\n0: Wylacz\n\nWybor:" ;
        cin >> wybor;
        switch(wybor)
        {
        case 1:
            cout << "Podaj wartosc: " ;
            cin  >> wartosc;
            napedy.at(0)->ruch(wartosc);
            break;
        case 2:
            cout << "Podaj wartosc: " ;
            cin  >> wartosc;
            napedy.at(0)->obrot(wartosc);
            break;
        case 3:
            for(int i=0;i<czujniki.size();i++)
            czujniki.at(i)->show();
            break;
        case 4:
            for(int i=0;i<czujniki.size();i++)
            {
                cout << i+1 << ". ";
                czujniki.at(i)->show();
            }
            cout << "\nWybierz: " ;
            cin  >> wartosc;
            czujniki.at(wartosc-1)->zmiana_stanu();
            break;
        case 0:
            break;
        default:
            cout << "Bledny wybor" << endl;
            break;
        }
    }while(wybor!=0);
}

