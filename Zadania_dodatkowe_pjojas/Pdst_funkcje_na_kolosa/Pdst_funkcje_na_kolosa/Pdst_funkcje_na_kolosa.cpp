// Pdst_funkcje_na_kolosa.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

bool czyPierwsza(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int silnia_iteracyjnie() {
    int liczba;
    long long silnia = 1;

    cout << "podaj liczbe" << endl;
    cin >> liczba;

    for (int i = 1; i <= liczba;i++)
    {
        silnia *= i;
    }

    cout << silnia << endl;

    system("PAUSE");
    return(0);
}

int silnia_reku(int liczba)
{
    if (liczba < 2)
    {
        return liczba;
    }
    return liczba * silnia_reku(liczba - 1);
}

void NWD() {
    int n, m;
    cout << "Podaj n: " << endl;
    cin >> n;
    cout << "Podaj m: " << endl;
    cin >> m;
    int max = 0;
    for (int i = 1;i <= n && i <= m;i++) {
        if (n % i == 0 && m % i == 0) {
            max = i;
        }
    }
    cout << "the biggest dzielnik xd: " << max << endl;
}

int fib() {
    int liczba;
    cin >> liczba;
    int poprzedni = 1;
    int przedpoprzedni = 0;
    int wynik = 0;
    if (liczba >= 2 && liczba <= 3) {
        return 1;
    }
    if (liczba == 1) {
        return 0;
    }
    for (int i = 2;i < liczba;i++) {
        wynik = poprzedni + przedpoprzedni;
        przedpoprzedni = poprzedni;
        poprzedni = wynik;
    }
    return wynik;
}
#include <string>
int progc05() {
    // Wejscie : e dabdceaaaa Wyjscie: dabdcaaaa
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

void rownanie(double a, double b, double c) {
    if (a == 0 && b == c) {
        cout << "NWR\n";
    }
    if (a == 0 && b != c) {
        cout << "BR\n";
    }
    else {
        double x;
        x = (c - b) / a;
        cout << x << "\n";
    }
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
    
    if (liczba.size() > 11) {
        cout << "Bledna ilosc liczb. " << endl;
        return false;
    }
    int cyfra = cyfrakontrolna(liczba);
    return true;
}


int main()
{
    //cout<<czyPierwsza(5)<<endl;
    //cout << silnia_iteracyjnie() << endl;
    //cout << silnia_reku(5) << endl;
    //NWD();
    //cout << fib() << endl;
    //cout << progc05() << endl;

    /*rownanie(0.52, 1.60, -5.44);
    rownanie(0.00, 2.00, 3.00);
    rownanie(0.00, 2.00, 2.00);*/

    //vector<int> pesel = { 0,0,2,3,0,8,0,6,2,7,8 };
    cout << czypesel({ 0,0,2,3,0,8,0,6,2,7,8 }) << endl;
    //cout << cyfrakontrolna({ 0,0,2,3,0,8,0,6,2,7,8 }) << endl;

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
