#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int liczbamax = 0, roznica, najwliczba, najwodbicie, takichsamych =0, dwojek =0, trojek =0, wszystkich = 100,pierwszalicz = 0, pierwszeodbicie =0, ile =0, roznych;
    bool czypierwszaliczba = false, czypierwszeodbicie = false;
    int tab [wszystkich];
    string liczba,nowaliczba;
    ifstream plik;
    plik.open("liczby.txt");
    for(int i =0; i<100; i++)
    {
        plik>>liczba;
        nowaliczba = liczba;
        for(int j = 0; j<liczba.length(); j++)
        {
            nowaliczba[j] = liczba[liczba.length()-j-1];

        }
        int number = 0;
        for(int m =0; m<nowaliczba.length(); m++)
        {
            number = number *10 + (nowaliczba[m]- '0');
        }
        if (number % 17== 0)
        {
            cout<< number << endl;
        }
    }
    ifstream plik2;
    plik2.open("liczby.txt");
    for(int i =0; i<100; i++)
    {
        plik2>>liczba;
        nowaliczba = liczba;
        for(int j = 0; j<liczba.length(); j++)
        {
            nowaliczba[j] = liczba[liczba.length()-j-1];

        }
        int wartoscodbicia = 0;
        for(int m =0; m<nowaliczba.length(); m++)
        {
            wartoscodbicia = wartoscodbicia *10 + (nowaliczba[m]- '0');
        }
        int wartoscliczby = 0;
        for(int n =0; n<nowaliczba.length(); n++)
        {
            wartoscliczby = wartoscliczby *10 + (liczba[n]- '0');
        }
        roznica = abs(wartoscliczby- wartoscodbicia);
        if (roznica > liczbamax)
        {
            liczbamax = roznica;
            najwodbicie = wartoscodbicia;
            najwliczba = wartoscliczby;
        }
    }
    cout <<"NAJWIEKSZA LICZBA TO "<<najwliczba<<" A NAJWIEKSZA ROZNICA ODBIC TO " <<liczbamax << endl;
    ifstream plik3;
    plik3.open("liczby.txt");
    for(int i= 0; i<100; i++)
    {
        plik3>>liczba;
        nowaliczba = liczba;
        for(int j = 0; j<liczba.length(); j++)
        {
            nowaliczba[j] = liczba[liczba.length()-j-1];

        }
        int wartoscodbicia = 0;
        for(int m =0; m<nowaliczba.length(); m++)
        {
            wartoscodbicia = wartoscodbicia *10 + (nowaliczba[m]- '0');
        }
        int wartoscliczby = 0;
        for(int n =0; n<nowaliczba.length(); n++)
        {
            wartoscliczby = wartoscliczby *10 + (liczba[n]- '0');
        }
        pierwszalicz =0;
        pierwszeodbicie=0;
        czypierwszaliczba = false;
        czypierwszeodbicie  =false;
        for(int k =2; k<wartoscliczby/2; k++)
        {
            if(wartoscliczby%k==0)
            {
                pierwszalicz++;
            }

        }
        if(pierwszalicz ==0)
        {
            czypierwszaliczba = true;
        }

        for (int o =2; o<wartoscodbicia/2; o++)
        {
            if(wartoscodbicia%o==0)
            {
                pierwszeodbicie++;
            }

        }

        if(pierwszeodbicie==0)
        {
            czypierwszeodbicie = true;
        }
        if (czypierwszeodbicie && czypierwszaliczba)
        {
            cout <<"JEST PIERWSZA LICZBA " <<wartoscliczby<< endl;
        }
    }



    ifstream plik4;
    plik4.open("liczby.txt");

    for(int i =0; i<wszystkich; i++)
    {
        plik4>>tab[i];
    }
    for(int j =0; j<wszystkich; j++)
    {

        takichsamych=0;
        for(int o =0; o<wszystkich; o++)
        {
            if (tab[j]>0&&tab[o]>0)
            {
                if(tab[j]==tab[o]&& j!=o)
                {

                    takichsamych++;
                    tab[o] = 0;
                }
            }
        }

        roznych = wszystkich - ile;
        if(takichsamych == 1)
        {
            dwojek++;
        }
        if(takichsamych ==2)
        {
            trojek++;
        }


        ile+= takichsamych;
    }
    cout <<"ROZNYCH JEST: "<< roznych<<", DWOJEK JEST: " <<dwojek<<", TROJEK JEST: " << trojek<< endl;
}






















