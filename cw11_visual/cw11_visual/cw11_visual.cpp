// cw11_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> konwertuj(int liczba) {
    vector<int> wynik;
    do {
        int a = liczba % 10;
        wynik.push_back(a);
    } while (liczba);
    return wynik;
}

int cyfrakontrolna(vector<int> pesel) {
    int temp = pesel[0] * 1 + pesel[1] * 3 + pesel[2] * 7 + pesel[3] * 9 + pesel[4] * 1 + pesel[5] * 3 + pesel[6] * 7 + pesel[7] * 9 + pesel[8] * 1 + pesel[9] * 3 + pesel[10] * 1;
    int lastnumber = temp % 10;
    int kontrolny = 10 - lastnumber;
    return kontrolny;
}

bool czypesel(vector<int> liczba) {
    while (liczba.size() < 11) {
        liczba.push_back(0);
    }
    int cyfra = cyfrakontrolna(liczba);
    return true;
}

int main()
{
    vector<int> pesel = { 0,0,2,3,0,8,0,6,2,7,8 };
    cout << czypesel({ 0,0,2,3,0,8,0,6,2,7,8 }) << endl;
    cout << cyfrakontrolna({ 0,0,2,3,0,8,0,6,2,7,8 }) << endl;
    
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
