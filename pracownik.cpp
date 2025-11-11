#include <iostream>
#include <string>

using namespace std;

class Pracownik{
protected:
    string stanowisko;
    float wynagrodzenie;

public:
    Pracownik(string s, float wyn)
    {
        stanowisko=s;
        wynagrodzenie=wyn;
    }
    // Metoda wyświetlająca stanowisko (dostępna tylko dla klas dziedziczących)

};

class Nauczyciel
 : public Pracownik
{
    public:
    Nauczyciel(string s, float wyn)
        : Pracownik(s, wyn)
    {}
    void pokazDane()
    {
        cout<<stanowisko<<" "<<wynagrodzenie;
    }
};

class Administracja
 : public Pracownik
{
    public:
    Administracja(string s, float wyn)
        : Pracownik(s, wyn)
    {}
    void pokazDane()
    {
        cout<<stanowisko<<" "<<wynagrodzenie;
    }
};

int main()
{
    Administracja Leciej("dyrektor", 6125.23);
    Nauczyciel Wilczynska("matematyczka", 4784.98);
    Leciej.pokazDane();
    Wilczynska.pokazDane();
    return 0;
}
