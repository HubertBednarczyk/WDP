// kolosik.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;
//Zadanie 1
bool zadanie1kolo(vector<int> v1, vector<int> v2) {
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    return v1 == v2;
}

//ZAD 2

int konwertuj(vector<int> tab)
{
    int wynik = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        int potega = tab.size() - 1 - i;
        wynik += tab[i] * pow(10, potega);
    }
    return wynik;
}

int zadanie2kolo(vector<int> tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == -1)
        {
            for (int j = 1; j < 10; j++)
            {
                tab[i] = j;
                if (konwertuj(tab) % 7 == 0) return j;
            }
        }
    }
    return -1;
}

//int find_missing_digit(vector<int> v) {
//    int missing_digit = -1;
//    int sum = 0;
//    for (auto i : v) {
//        if (i == -1) {
//            missing_digit = i;
//        }
//        else {
//            sum += i;
//        }
//    }
//    if (missing_digit == -1) {
//        return -1;
//    }
//    else {
//        return 7 - (sum % 7);
//    }
//}

//ZADANIE 3

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void twin_primes_greater_than(int n) {
    for (int i = n + 1; i < n + 100; i++) {
        if (is_prime(i) && is_prime(i + 2)) {
            cout << i << " and " << i + 2 << endl;
        }
    }
}

int main()
{
    vector<int> v1 = { 3,5,3,4 };
    vector<int> v2 = { 3,3,5 };
    //cout << zadanie1kolo(v1, v2);
    
    vector<int> tab = { 1,2,3 };
    //cout << konwertuj(tab) << endl;
    vector<int> x1 = { 1,7,1,-1 };
    vector<int> x2 = { 3,-1,9,4 };
    //cout << zadanie2kolo(v1) << endl;
    //cout << zadanie2kolo(v2) << endl;
    twin_primes_greater_than(22);

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
