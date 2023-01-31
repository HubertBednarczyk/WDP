// Cw8_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

//#include <iostream>
//#include <vector>
//#include <random>
//
//using namespace std;
////na wejsciowke: index,wypisz,max,min,czynalezy,czyzawiera, 6 punktow, suma ,podzielnosc,generuj
//void wypisz(vector<int> tab) {
//    for (int i = 0;i < tab.size();i++) {
//        cout << tab[i] << endl;
//    }
//}
//
//int min(vector<int> tab) {
//    int wynik = tab[0];
//    for (int i = 0;i < tab.size();i++) {
//        if (tab[i] < wynik) {
//            wynik = tab[i];
//        }
//    }
//    return wynik;
//}
//
//vector<int> podzielnosc(vector<int> tab, int dzielnik, int reszta = 0) {
//    vector<int> wynik;
//    for (int i = 0;i < tab.size();i++) {
//        if (tab[i] % dzielnik == reszta) {
//            wynik.push_back(tab[i]);
//        }
//    }
//    return wynik;
//}
//
//vector<int> generuj(int n, int koniec) {
//    vector<int> wynik;
//    for (int i = 0;i < n;i++) {
//        int tmp = rand() % koniec;
//        wynik.push_back(tmp);
//    }
//    return wynik;
//}
//
//int main()
//{
//    vector<int> tab = { 6,5,4,3,2 };
//    wypisz(podzielnosc(tab,6,0));
//    srand(time(NULL));
//    wypisz(generuj(1,7));
//}

//na wejsciowke : index, wypisz, max, min, czynalezy, czyzawiera, 6 punktow, suma, podzielnosc, generuj

//0 punkt - wiedziec o co chodzi (unikalnosc - wyciagnac liczby ktore sa unikalne)
//1 punkt - do zadania wymyslec przyklad ( unikalnosc = [8,1,1,7,5,8,3])
//2 punkt - sprawdzic czy przyklad jest kompletny(odpowiadajacy danej funkcji)
//3 punkt - sformalizowanie przykladu
//4 punkt - naglowek funkcji
//5 punkt - cialo funkcji
//6 punkt - Nie wiesz co pisac? Wroc do przykladu
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie
//#include <vector>
//#include <iostream>
//#include <random>
//
//using namespace std;
//
//void wypisz(vector<int> tab) {
//	for (int i = 0;i < tab.size();i++) {
//		cout << tab[i] << endl;
//	}
//}
//
//int index(vector<int> tab, int a) {
//	for (int i = 0;i < tab.size();i++) {
//		if (tab[i] = a) {
//			return i;
//		}
//	}
//	return -1;
//}
//
//int min(vector<int> tab) {
//	int wynik = tab[0];
//	for (int i = 0;i < tab.size();i++) {
//		if (tab[i] < wynik) {
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//bool czynalezy(vector<int> tab, int a) {
//	return index(tab, a) > -1;
//}
//
//bool czyzawiera(vector<int> tab, vector<int> tab2) {
//	for (int i = 0;i < tab2.size();i++) {
//		if (!czynalezy(tab, tab2[i])) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int suma(vector<int> tab) {
//	int wynik = 0;
//	for (int i = 0;i < tab.size();i++) {
//		wynik += tab[i];
//	}
//	return wynik;
//}
//
//vector<int> podzielnosc(vector<int> tab, int dzielnik, int reszta = 0) {
//	vector<int> wynik;
//	for (int i = 0;i < tab.size();i++) {
//		if (tab[i] % dzielnik == reszta) {
//			wynik.push_back(tab[i]);
//		}
//	}
//	return wynik;
//}
//
//vector<int> generuj(int n, int koniec) {
//	vector<int> wynik;
//	for (int i = 0;i < n;i++) {
//		int tmp = rand() % koniec;
//		wynik.push_back(tmp);
//	}
//	return wynik;
//}
//
//int main() {
//	vector<int> tab1 = { 4,5,6,7,8,9 };
//	vector<int> tab2 = { 4,5,6 };
//	cout << "Tab1: " << endl;
//	wypisz(tab1);
//	cout << "Index liczby 7 w tab1: " << index(tab1, 7) << endl;
//	cout << "Min w tab1: " << min(tab1) << endl;
//	cout << "Czy nalezy 10: " << czynalezy(tab1, 10) << endl;
//	cout << "Czy tab2 zawiera sie w tab 1: " << czyzawiera(tab1, tab2) << endl;
//	cout << "Suma el. tab2: " << suma(tab2) << endl;
//	cout << "Liczby z tab1 podzielne przez 2: " << endl;
//	wypisz(podzielnosc(tab1, 2, 0));
//	srand(time(NULL));
//	cout << "Generuj: " << endl;
//	wypisz(generuj(1, 7));
//}

//wiedziec o co chodzi
//wymyslec przyklad
//sprawdzic czy przyklad jest odpowiedni
//sformalizowac przyklad
//naglowek funkcji
//cialo funkcji
//nie wiesz co pisac, wroc do przykladu

#include <vector>
#include <iostream>
#include <random>

using namespace std;

int index(vector<int> tab, int a) {
	for (int i = 0;i < tab.size();i++) {
		if (tab[i] == a) {
			return i;
		}
	}
	return -1;
}

void wypisz(vector<int> tab) {
	for (int i = 0;i < tab.size();i++) {
		cout << tab[i] << endl;
	}
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

bool czynalezy(vector<int> tab, int a) {
	return index(tab, a) > -1;
}

bool czyzawiera(vector<int> tab, vector<int> tab2) {
	for (int i = 0;i < tab2.size();i++) {
		if (!czynalezy(tab, tab[i])) {
			return false;
		}
	}
	return true;
}

int suma(vector<int> tab) {
	int wynik = 0;
	for (int i = 0;i < tab.size();i++) {
		wynik += tab[i];
	}
	return wynik;
}

vector<int> podzielnosc(vector<int> tab, int dzielni, int reszta) {
	vector<int> wynik;
	for (int i = 0;i < tab.size();i++) {
		if (tab[i] % dzielni == reszta) {
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}

vector<int> generuj(int n, int koniec) {
	vector<int> wynik;
	for (int i = 0;i < n;i++) {
		int tmp = rand() % koniec;
		wynik.push_back(tmp);
	}
	return wynik;
}

vector<int> unikalnosc(vector<int> tab2)
{
	vector<int> wynik;
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!czynalezy(wynik, tab2[i]))
		{
			wynik.push_back(tab2[i]);
		}
	}
	return wynik;
}

int main() {
	vector<int> tab1 = { 4,5,6,7,8,9 };
	vector<int> tab2 = { 4,5,6 };
	cout << "Tab1: " << endl;
	wypisz(tab1);
	cout << "Index liczby 7 w tab1: " << index(tab1, 7) << endl;
	cout << "Min w tab1: " << min(tab1) << endl;
	cout << "Czy nalezy 10: " << czynalezy(tab1, 10) << endl;
	cout << "Czy tab2 zawiera sie w tab 1: " << czyzawiera(tab1, tab2) << endl;
	cout << "Suma el. tab2: " << suma(tab2) << endl;
	cout << "Liczby z tab1 podzielne przez 2: " << endl;
	wypisz(podzielnosc(tab1, 2, 0));
	srand(time(NULL));
	cout << "Generuj: " << endl;
	wypisz(generuj(1, 7));
	wypisz(unikalnosc(tab1));
}
// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
