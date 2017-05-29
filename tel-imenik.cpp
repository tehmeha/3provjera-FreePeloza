#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int brojOsoba = 0;
    int izbor;
    int MAX = 50;
    string prezimeIme[MAX];
    unsigned long long brTelefona[MAX];
    string adresa[MAX];
    ofstream datotekaUpisivanje;
    ifstream datotekaUcitavanje;

    while(1)
    {
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos nove osobe" << endl;
        cout << "2. Ispisi sve podatke" << endl;
        cout << "3. Pretraga prema telefosnkom broju" << endl;
        cout << "4. Pretraga prema prezimenu i imenu" << endl;
        cout << "5. Izmjena podataka prema telefosnkom broju" << endl;
        cout << "6. Ispisi sortirano prema prezimenu i imenu" << endl;
        cout << "7. Izlaz iz programa" << endl;
        cout << "Upisite broj iz izbornika: ";
        cin >> izbor;
        if( izbor == 1 )
        {
            cout << "Unesite ime i prezime: ";
            cin.ignore();
            getline(cin, prezimeIme[brojOsoba]);
            //!Unos broja telefona i adresa
            cout<<"Upisite broj telefona:";
            cin>>brTelefona[brojOsoba];
            cout<<"Unesite adresu:";
            cin.ignore();
            getline(cin,adresa[brojOsoba]);
            brojOsoba++;
        }
        else if( izbor == 2 )
        {
            cout << "prezime i ime" << "\t" << "broj telefona" << "\t" << "adresa" << endl;
            for( int i = 0; i < brojOsoba; i++ )
            {
                cout << prezimeIme[i] << "\t" << brTelefona[i]<<"\t"<< adresa[i] <<endl;

            }
        }
        else if( izbor == 3 )
        {
                unsigned long long int brtelefona;
                cout<<"Unesite broj telefona kojeg zelite pronaci: ";
                cin>>brtelefona;
                bool postoji=false;
                for(int i=0;i<brojOsoba;i++)
                {
                    if(brtelefona==brTelefona[i])
                    {
                         cout<<"Postoji u imeniku.";
                         postoji=true;
                         break;
                    }
                }
                if(postoji==false)
                {
                    cout<<"Ne postoji u imeniku.";
                }
        }
        else if( izbor == 4 )
        {
            unsigned long long int brtelefona;
            cout<<"Unesite broj telefona  osobe koju zelite pronaci: ";
            cin>>broj telefona;
            bool postoji=false
            for(int i=0; i<brojOsoba;i++)
            if(brojtelefona==brojtelefona[i])
            {
                cout<<"Postoji u telefonskom imeniku"<<endl;
                postoji=true;
                cout<<prezimeime[i] <<"\t" <<brojtelefona[i] <<"\t" << "\t"<<adresa;
                break;
            }
        }
        else if( izbor == 5 )
        {
        }
        else if( izbor == 6 )
        {
        }
        else if( izbor == 7 )
        {
            cout << "Kraj rada" << endl;
            break;
        }
        else
        {
            cout << "Unijeli ste krivi broj." << endl;
        }
        cout << endl;
    }
}
