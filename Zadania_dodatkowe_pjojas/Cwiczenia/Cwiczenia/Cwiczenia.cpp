// Cwiczenia.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

void pierwsze() {
    double liczba;
    cout << "Podaj liczbe wymierna: " << endl;
    cin >> liczba;
    cout << "Twoja liczba: " << liczba << endl;
}

//void wartosc_wielomianow() {
//    cout << "Podaj liczby po kolei a,b,c,d oraz x: " << endl;
//    int a, b, c, d,x;
//    cin >> a >> b >> c >> d >> x;
//    //a=1 b=2 c=3 d=4 x=5
//    int A = (a * pow(x,3)) + (b * pow(x,2)) + (c * x + d);
//    //1*(5^2)+(2*5)+3
//    int B = (a * pow(x, 2)) + (b * x) + c;
//    cout << "A(x): " << A << " B(x): " << B << endl;
//}

bool czy_przestepny(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int srednia_arytm() {
    int a, b, c;
    cin >> a >> b >> c;
    int srednia = (a + b + c) / 3;
    return srednia;
}

void wielokrotnosc() {
    int n, m;
    cout << "Liczba: " << endl;
    cin >> n >> m;
    int temp = 0;
    for (int i = 0;i < m;i++) {
        cout << i + 1 << ". " << n * i << endl;
    }
}

int fib() {
    int liczba;
    cin >> liczba;
    int poprzedni = 1;
    int przedpoprzedni = 0;
    int wynik=0;
    if (liczba >= 2 && liczba <=3) {
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

void wielokrotnosc_mniejsz_od_m() {
    int n, m;
    cout << "Podaj liczbe n: " << endl;
    cin >> n;
    cout << "Podaj liczbe m: " << endl;
    cin >> m;
    for (int i = 0;i < m;i++) {
        if (n < m && n > 0) {
            cout << i+1<<". " << n * i << endl;
        }
    }
}

void celsjusze_na_k_f() {
    double celsjusz;
    cout << "podaj swoja temperature: " << endl;
    cin >> celsjusz;
    double fahrenheit = (1.8 * celsjusz) + 32;
    cout << "Przeliczone na fahrenheity: " << fahrenheit << endl;
    double kelvin = celsjusz + 273.15;
    cout << "Przeliczone na kelviny: " << kelvin << endl;
}

void wartosc_bezwzgledna() {
    int n;
    cout << "Podaj liczbe n: " << endl;
    cin >> n;
    if (n <= 0) {
        cout << n * (-1);
    }
    else {
        cout << n;
    }
}
//int poprawna_data() {
//    int dzien, miesiac, rok;
//
//    cout << "Podaj dzien: " << endl;
//    cin >> dzien;
//    cout << "Podaj miesiac: " << endl;
//    cin >> miesiac;
//    cout << "Podaj rok: " << endl;
//    cin >> rok;
//    if (dzien < 1 || dzien>31 || miesiac < 1 || miesiac > 12) {
//        cout << "Bledna data" << endl;
//        return -1;
//    }
//    if (miesiac == 2) {
//        if (dzien < 1 || dzien>28) {
//            cout << "Bledna data" << endl;
//            return -1;
//        }
//    }
//    else if(miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11){
//        if (dzien < 1 || dzien > 30) {
//            cout << "Bledna data" << endl;
//            return -1;
//        }
//    }
//    cout << "wpisales poprawna date" << endl;
//}

void wieksza_wartosc_bezw() {
    int liczba1, liczba2;
    cout << "podaj dwie liczby: " << endl;
    cout << "Wypisze ci liczbe ktora po dzialaniu wartosci bezwzglednej jest wieksza" << endl;
    cin >> liczba1 >> liczba2;
    if (liczba1 < 0 || liczba2 < 0) {
        cout<<"Liczba pierwsza: " << liczba1 <<" Liczba druga: " << liczba2 << endl;
        if (abs(liczba1) > abs(liczba2)) {
            cout << abs(liczba1) << endl;
        }
        else if (abs(liczba2) > abs(liczba1)) {
            cout << abs(liczba2) << endl;
        }
    }
    
}

double rownanie_liniowe(double x) {
    double a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    if (a == 0 && b == 0)
    {
        cout << "X has infinitely many solutions" << endl;
        return 0;
    }

    if (a == 0)
    {
        cout << "X doesn't exist" << endl;
        return 0;
    }

    if (b == 0)
    {
        cout << "X is 0" << endl;
        return 0;
    }

    x = -b / a;

    cout << "X is: " << x << endl;

    return 0;
}

//int ktore() {
//    //int samochod = 1024, auto = 2048; //niewlasciwe
//    int wrti = wrti; // prawidlowe
//    //int wrti(int()); //niewlasciwe
//    //double pensja = zarobki = 9999.99; //niewlasciwe
//    //cin >> int wartosc; //niewlasciwe
//    return 0;
//}

int zadanie_20(int n, int m, int k) {
    if (n < 0 || m < 0 || k < 0) {
        return -1;
    }
    if (m % n == 0 && m % k == 0) {
        return 2;
    }
    else if (m % n == 0 || m % k == 0) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int najPotega(int n)
{
    int pow = 1;

    while (pow < n)
    {
        pow *= 3;
    }

    return pow / 3;

}

void zadanie25() {

    int k;

    cout << "Podaj liczbe n: ";
    cin >> k;

    cout << "Wynik dzialania programu dla liczby: " << k << ": " << najPotega(k)<<endl;
}

int zadanie24suma(int a, int b, int c) {
    if (a < 0 || b < 0 || c < 0) {
        return -1;
    }
    int suma = 0;
    for (int i = 3 * a + 1;i <= b;i++) {
        if (i % c != 0) {
            suma += i;
        }
    }
    return suma;
}

float fun(int n, float x)
{
    float suma = 1;
    for (int i = 1;i <= n; i++)
    {
        float powx = x;
        int powi = i;
        for (int j = 1;j < i;j++)
        {
            powx *= x;
            powi *= i;
        }
        suma += powx / powi;

    }
    return suma;
}

void czymiesiac() {
    int dzien;
    cout << "Podaj poprawny dzien miesiaca: " << endl;
    cin >> dzien;
    if (dzien >= 1 && dzien <= 31) {
        cout << "Najprawdopodobniej ta liczba moze byc dniem miesiaca" << endl;
    }
    else {
        cout << "Ta liczba nie jest dniem miesiaca" << endl;
    }
}
#include <vector>

void sortowanie() {
    int first, second, third;
    cout << "Give me 3 numbers and i will sort them for you: " << endl;
    cin >> first >> second >> third;
    if (first >= second && first >= third)
    {
        if (second >= third)
        {
            cout << first << ", " << second << ", " << third << endl;
        }
        else
        {
            cout << first << ", " << third << ", " << second << endl;
        }
    }
    else if (second >= first && second >= third)
    {
        if (first >= third)
        {
            cout << second << ", " << first << ", " << third << endl;
        }
        else
        {
            cout << second << ", " << third << ", " << first << endl;
        }
    }
    else
    {
        if (first >= second)
        {
            cout << third << ", " << first << ", " << second << endl;
        }
        else
        {
            cout << third << ", " << second << ", " << third << endl;
        }
    }

    
}

int zliczanie(int a, int b) {
    int suma = 0;
    for (int i = a;i <= b;i++) {
        if (i % 3 == 0) {
            suma += i;
        }
    }
    return suma;
}
#include <cstdio>

void wypisz(vector<int> tab) {
    for (int i = 0;i < tab.size();i++) {
        cout << tab[i] << endl;
    }
}

void wypisz2(vector<int> tab) {
    for (int i = 0;i < tab.size();i++) {
        printf("%d, ", tab[i]);
    }
}

void wektorek() {
    int n;
    cout << "Podaj ile liczb: " << endl;
    cin >> n;
    int m;
    vector<int> ciag;
    for (int i = 0;i < n;i++) {
        cout << "\nPodaj liczbe: " << endl;
        cin >> m;
        if (m % 5 == 0) {
            cout << endl;
            ciag.push_back(m);
        }
    }
    wypisz(ciag);
}

void wektor() {
    int n;
    cout << "Podaj ilosc liczb: " << endl;
    cin >> n;
    int m;
    vector<int> tab;
    for (int i = 0;i < n;i++) {
        cout << "Podaj liczbe: " << endl;
        cin >> m;
        if (m % 3 == 0)
        {
            if (m % 2 != 0) {
                tab.push_back(m);
            }
        }
    }
    wypisz(tab);
}

void ciagnaturalnych() {
    int n;
    cout << "Podaj ilosc liczb: " << endl;
    cin >> n;
    int m;
    vector<int> tab;
    for (int i = 0;i < n;i++) {
        cout << "Podaj liczbe: ";
        cin >> m;
        cout << i + 1 << ". " << m << endl;
        tab.push_back(m);
    }
    wypisz2(tab);
}

void czykwadraty() {
    int n;
    cout << "Podaj ilosc liczb: " << endl;
    cin >> n;
    int m;
    vector<int> tab2;
    for (int i = 0;i < n;i++) {
        cout << "Podaj liczbe: ";
        cin >> m;
        int root = sqrt(m);
        if (floor(sqrt(m)) == sqrt(m)) {
            tab2.push_back(m);
        }
    }
    wypisz2(tab2);
}

void ilespelnia() {
    int n;
    cout << "Podaj ile liczb; ";
    cin >> n;
    int m;
    for (int i = 2;i < n;i++) {
        cout << "Podaj liczbe: " << endl;
        cin >> m;

    }
}

int suma(vector<int> tab) {
    int suma = 0;
    for (int i = 0;i <tab.size();i++) {
        suma += tab[i];
    }
    return suma;
}

int suma() {
    int n;
    cout << "podaj ilosc liczb: " << endl;
    cin >> n;
    int m;
    int suma = 0;
    for (int i = 0;i < n;i++) {
        cout << "Podaj liczbe: " << endl;
        cin >> m;
        suma += m;
    }
    return suma;
}

void maxdzielnik() {
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

int reku(int n) {
    if (n == 0) {
        return 4;
    }
    else if (n == 1) {
        return 3;
    }
    else {
        return reku(n - 1) + reku(n - 2);
    }
}

int main()
{
    //pierwsze();
    //int a = 3, b = 2, c = 4, d;
    //d = a++ + b - c % 3; //a=4  ,b=2  , c=4  ,d=4
    //d = ++a + b - c % 3; //a=5  ,b=2  , c= 4 ,d=6
    //d = (b = c) + 2; //a=5  ,b=4  , c=4  ,d=6
    //wartosc_wielomianow();
    //cout << czy_przestepny(2020) << endl;
    //cout << srednia_arytm() << endl;
    //wielokrotnosc();
    //cout << fib() << endl;
    //wielokrotnosc_mniejsz_od_m();
    //celsjusze_na_k_f();
    //wartosc_bezwzgledna();
    //poprawna_data();
    //wieksza_wartosc_bezw();
    //rownanie_liniowe(3);
    //cout << zadanie_20(3,18,6);
    //cout << najPotega(12) << endl;
    //zadanie25();
    //cout<<zadanie24suma(1,10,2)<<endl;
    //cout<< fun(3, 3) << endl;
    //czymiesiac();
    //sortowanie();


    //Zadanie 23
    //int a, b;
    //cout << "Podaj liczbe a: " << endl;
    //cin >> a;
    //cout << "Podaj liczbe b: " << endl;
    //cin >> b;
    //cout<<zliczanie(a, b)<<endl;
    //wektorek();
    //wektor();
    //ciagnaturalnych();
    //czykwadraty();
    
    //ZADANIE 28
    //int n;
    //cout << "Podaj liczbe: " << endl;
    //cin >> n;
    //int m;
    //vector<int> tab;
    //for (int i = 0;i < n;i++) {
    //    cout << "Podaj liczby:";
    //    cin >> m;
    //    tab.push_back(m);
    //}
    //cout<<suma(tab)<<endl;
    //cout << suma() << endl;
    //maxdzielnik();
    cout << reku(4) << endl;
    return 0;
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
