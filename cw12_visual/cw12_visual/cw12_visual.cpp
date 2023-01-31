// cw12_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


//void zliczanie(string jakiswyraz) {
//    int ile;
//    for (char c{'W'}; c <= 'K'; c++) {
//        
//    }
//}
int index(string tab, int a) {
    for (int i = 0;i < tab.length();i++) {
        if (tab[i] == a) {
            return i;
        }
    }
    return -1;
}

bool czynalezy(string tab, int a) {
    return index(tab, a) > -1;
}

bool czyzawiera(string tab, string tab2) {
    for (int i = 0;i < tab2.length();i++) {
        if (!czynalezy(tab, tab2[i])) {
            return false;
        }
    }
    return true;
}

int progc05() {
    string tekst;
    while (getline(cin, tekst)) {
        string nowy = "";
        char x = tekst[0];
        tekst.erase(0, 2);
        for (int i = 0;i < tekst.length();i++) {
            if (tekst[i] != x) {
                nowy += tekst[i];
            }
        }
        cout << nowy << endl;
    }
    return 0;
}

void czysto() {
    string tekst;
    string sto = "sto";
    while (getline(cin, tekst)) {
        for (int i = 0;i < tekst.length();i++) {
            if (!czyzawiera(tekst, sto)) {
                cout << "Nie wystepuje slowo sto\n";
            }
        }
    }
    cout << "Wystepuje slowo sto!\n";
}

int main()
{
    //cout<<progc05();
    czysto();

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
