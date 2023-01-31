// Cw6_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void wypisz(vector<int> tab)
//{
//    for (int i = 0;i < tab.size();i++)
//    {
//        cout << tab[i] << endl;
//    }
//}
//
//bool czynalezy(vector<int> tab, int a)
//{
//    for (int i = 0;i < tab.size();i++)
//    {
//        if (tab[i] == a)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool czyzawiera(vector<int> tab, vector<int> drugatab)
//{
//    for (int i = 0;i < drugatab.size();i++)
//    {
//        if (!czynalezy(tab, drugatab[i]))
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//
//vector<int> unikalnosc(vector<int> tab2)
//{
//    vector<int> wynik;
//    for (int i = 0; i < tab2.size(); i++)
//    {
//        if (!czynalezy(wynik, tab2[i]))
//        {
//            wynik.push_back(tab2[i]);
//        }
//    }
//    return wynik;
//}
//
//int main()
//{
//    vector<int> tab = { 0,1,1,2,3,3,4,5,5 };
//    vector<int> tab2 = { 3,4,5 };
//    bool wynik = czyzawiera(tab, tab2);
//    {
//        if (wynik)
//        {
//            cout << "TAK" << endl;
//        }
//        else
//        {
//            cout << "Nie" << endl;
//        }
//    }
//    
//    wypisz(unikalnosc(tab));
//}


//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//void wypisz(vector<int> tab)
//{
//	for (int i = 0;i < tab.size();i++)
//	{
//		cout << tab[i] << endl;
//	}
//}
//
//int min(vector<int> tab)
//{
//	int wynik = tab[0];
//	for (int i = 0;i < tab.size();i++)
//	{
//		if (tab[i] < wynik)
//		{
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//int suma(vector<int> tab)
//{
//	int wynik = 0;
//	for (int i = 0;i < tab.size();i++)
//	{
//		wynik += tab[i];
//	}
//	return wynik;
//}
//
//int index(vector<int> tab, int a)
//{
//	for (int i = 0;i < tab.size();i++)
//	{
//		if (tab[i] == a)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//bool czynalezy(vector<int> tab, int a)
//{
//	return index(tab, a) > -1;
//}
//
//bool czyzawiera(vector<int> tab, vector<int> tab2)
//{
//	for (int i = 0;i < tab2.size();i++)
//	{
//		if (!czynalezy(tab, tab2[i]))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
// vector<int> unikalnosc(vector<int> tab)
//{
//vector<int> wynik;
//for (int i = 0; i < tab.size(); i++)
//{
//	if (!czynalezy(wynik, tab[i]))
//	{
//		wynik.push_back(tab[i]);
//	}
//}
//return wynik;
//}
// 
//int main()
//{
//    vector<int> tab = { 9,5,7,8,4 };
//    vector<int> tab2 = { 7,8,4 };
//    cout << "Tablica 1 prezentuje sie tak: " << endl;
//    wypisz(tab);
//    cout << "Tablica 2 prezentuje sie tak: " << endl;
//    wypisz(tab2);
//    cout << "Suma elementow tablicy: " <<suma(tab) << endl;
//    cout << "Minimalny el: " << min(tab) << endl;
//    cout << "Index liczby 8: " << index(tab, 8) << endl;
//    cout << "Czy nalezy liczba 10: " << czynalezy(tab, 10) << endl;
//    cout << "Czy tab2 zawiera sie w tab1: " << czyzawiera(tab, tab2) << endl;
//}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

#include <vector>
#include <iostream>

using namespace std;

void wypisz(vector<int> tab) {
	for (int i = 0;i < tab.size();i++){
		cout << tab[i] << endl;
	}
}

int suma(vector<int> tab) {
	int wynik = 0;
	for (int i = 0;i < tab.size();i++) {
		wynik += tab[i];
	}
	return wynik;
}

int min(vector<int> tab) {
	int wynik = tab[0];
	for (int i = 0;i < tab.size();i++) {
		if (tab[i] < wynik) {
			wynik = tab[i];
		}
	}
	return wynik;
}

int index(vector<int> tab, int a) {
	for (int i = 0;i < tab.size();i++) {
		if (tab[i] == a) {
			return i;
		}
	}
	return -1;
}

bool czynalezy(vector<int> tab, int a) {
	return index(tab, a) > -1;
}

bool czyzawiera(vector<int> tab, vector<int> tab2) {
	for (int i = 0;i < tab2.size();i++) {
		if (!czynalezy(tab, tab2[i])) {
			return false;
		}
	}
	return true;
}

vector<int> unikalnosc(vector<int> tab) {
	vector<int> wynik;
	for (int i = 0;i < tab.size();i++) {
		if (!czynalezy(wynik, tab[i])) {
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}

int main() {
	vector<int> tab = { 9,8,7,7,6,5,4,3,2 };
	vector<int> tab2 = { 4,3,6 };
	cout << "Tablica tab1: " << endl;
	wypisz(tab);
	cout << "Tablica tab2: " << endl;
	wypisz(tab2);
	cout << "Min tab1: " << min(tab) << endl;
	cout << "Suma el tab1: " << suma(tab) << endl;
	cout << "Index liczby 6 w tab1: " << index(tab, 6) << endl;
	cout << "Czy nalezy liczba 10: " << czynalezy(tab, 10) << endl;
	cout << "Czy tab2 zawiera sie w tab1: " << czyzawiera(tab, tab2) << endl;
	cout << "Unikalnosc: " << endl;
	wypisz(unikalnosc(tab));
}

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
