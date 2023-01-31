// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;

void wypisz(vector<int> tab) {
    int i = 0;
    while (i < tab.size()) {
        cout << tab[i] << endl;
        i++;
    }
}

int index(vector<int> tab, int a) {
    int i = 0;
    while (i < tab.size()) {
        if (tab[i] == a) {
            return i;
        }
        i++;
    }
    return -1;
}

bool czynalezy(vector<int> tab, int a) {
    return index(tab, a) > -1;
}

int max(vector<int> tab) {
    int wynik = tab[0];
    int i = 0;
    while (i < tab.size()) {
        if (tab[i] > wynik) {
            wynik = tab[i];
        }
        i++;
    }
    return wynik;
}

bool czyzawiera(vector<int> tab, vector<int> tab2) {
    int i = 0;
    while (i < tab2.size()) {
        if (!(czynalezy(tab, tab2[i]))) {
            return false;
        }
        i++;
    }
    return true;
}

vector<int> unikalnosc(vector<int> unikalnosc) {
    vector<int> wynik;
    int i = 0;
    while (i < tab.size()) {
        if (!(czynalezy(wynik, unikalnosc[i]))) {
            wynik.push_back(unikalnosc[i]);
        }
        i++;
    }
    return wynik;
}

int suma(vector<int> tab) {
    int wynik = 0;
    int i = 0;
    while (i < tab.size()) {
        wynik += tab[i];
        i++;
    }
    return wynik;
}

vector<int> podzielnosc(vector<int> tab, int dzielnik, int reszta) {
    vector<int> wynik;
    int i = 0;
    while (i < tab.size()) {
        if (!(czynalezy(wynik, tab[i]))) {
            wynik.push_back(tab[i]);
        }
        i++;
    }
    return wynik;
}

vector<int> generuj(int n, int koniec) {
    vector<int> wynik;
    int i = 0;
    while (i < n) {
        int tmp = rand() % koniec;
        wynik.push_back(tmp);
        i++;
    }
    return wynik;
}

int main()
{
    std::cout << "Hello World!\n";
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
