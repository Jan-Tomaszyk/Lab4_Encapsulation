#include <iostream>
#include <string>
#include <memory>
#include <sstream>
#include <vector>
#include <list>
#include <set>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

const int domysl = -10000;


int randomInt(int min, int max) {
    static std::default_random_engine e{};
    std::uniform_int_distribution<int> d(min, max);
    return d(e);
}

/*
void z1()
{
    VerboseObject V0("");
    VerboseObject V0a;
    VerboseObject V1("pierwszy");
    unique_ptr<VerboseObject> V2 = make_unique<VerboseObject>("drugi");
    VerboseObject* V3 = new VerboseObject("trzeci");
    VerboseObject* V3a = new VerboseObject("trzeci a");
    VerboseObject* V4 = new VerboseObject("czwarty");
    delete V3;
    delete V3a;
    delete V4;
    konstruktory obiekt�w automatyczych s� wywo�ywane w kolejno�ci zapisanych instrukcji, ale destruktory w odwrotnej kolejno�ci
    konstruktory i desktruktory obiekt�w dynamicznych tworzonych r�cznie s� wywo�ywane w kolejno�ci zapisanych instrukcji
    jest to wi�c ta sama kolejno�� konstruktor�w, ale inna destruktor�w.
}
*/

void z2()
{
    srand(time(0));
    int n;
    list <int> liczby;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        liczby.push_front((rand() % 40) - 20);
    }
    /*for (int i = 0; i < n; i++)
    {
        cout << liczby[i] << " ";
    }*/
    for (list<int>::iterator it = liczby.begin(); it != liczby.end(); ++it)
    {
        cout << *it << " ";
    }

}

void z9()
{

}

void z10()
{

}

int main()
{
    string kont = "T";
    while (kont == "T" || kont == "t")
    {
        int odp;
        cout << "Wybierz zadanie do aktywacji:";
        cin >> odp;
        switch (odp)
        {
        case 1:
            cout << "Zadanie 1\n";
            z1();
            break;
        case 8:
            cout << "Zadanie 8\n";
            z8();
            break;
        case 9:
            cout << "Zadanie 9\n";
            //cout<<2.0/3.0;
            //cout<<findRepeatingSequence(4, 9)<<"\n";
            //cout<<findRepeatingSequence(27, 33)<<"\n";
            z9();
            break;
        case 10:
            cout << "Zadanie 10\n";
            z10();
            break;
        case 11:
            cout << "Zadanie 11\n";

            break;
        case 12:
            cout << "Zadanie 12\n";

            break;
        case 13:
            cout << "Zadanie 13\n";

            break;
        }
        cout << "Czy chcesz kontynuacji?(T/N)";
        cin >> kont;
    }
    return 0;
}



// #include 

class Osoba {

    // Konstruktor
   
    // Gettery
    
    // Settery
   
    // Sprawdzenie poprawności wieku
            
    // Metoda wyświetlająca dane
   
};

int main() {
    // Tworzenie obiektu Osoba
    
    // Użycie getterów
    
    // Użycie setterów
    
    return 0;
}
