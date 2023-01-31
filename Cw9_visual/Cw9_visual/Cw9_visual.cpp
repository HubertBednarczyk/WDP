// Cw9_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
//Do domu:
//Zamienic wszystkie petle for na while
//Nauczyc sie odczytywania z plikow i zapisywania do plikow
//czestosc funkcja

//#include <iostream>
//#include <vector>
//#include <map>
//#include <random>
//na wejsciowke oddatowo czestosc
//using namespace std;

//void wypisz(vector<int> tab) {
//    for (int i = 0;i < tab.size();i++) {
//        cout << tab[i] << endl;
//    }
//}


//map<int, int> czestosc(vector<int> tab2){
//	map<int, int> wynik;
//	for (int i = 0; i < tab2.size(); i++){
//		if (!czynalezyklucz(wynik, tab2[i])){
//			wynik.insert({ tab2[1],1 });
//		}
//		else{
//			wynik[{tab2[i]}]++;
//		}
//	}
//	return wynik;
//}

//map<int, int> czestosc(vector<int> tab) {
//    map<int, int> m;
//    m.insert({ 2,4 });
//    m.insert({ 1,5 });
//    m[2] = 6;
//    if (m.find() != m.end()) {
//
//    }
//    for (auto& el : m) {
//        cout << el.first;
//        cout << el.second;
//    }
//    return m;
//}



//int main()
//{
//    vector<int> numbers = { 1, 3, 4, 3, 1, 1, 5, 6 };
//    wypiszwhile(numbers);
//}

//NA WEJSCIOWKE
//#include <vector>
//#include <iostream>
//#include <map>
//#include <random>
//
//using namespace std;
////!!BRAK CZESTOSCI!!
////wiedziec o co chodzi
////wymyslec przyklad
////sprawdzic czy przyklad jest odpowiedni
////sformalizowac przyklad
////naglowek funkcji
////cialo funkcji
////nie wiesz co pisac, wroc do przykladu
//vector<int> generujwhile(int n, int koniec) {
//    vector<int> wynik;
//    int i = 0;
//    while (i < n) {
//        int tmp = rand() % koniec;
//        wynik.push_back(tmp);
//        i++;
//    }
//    return wynik;
//}
//
//int indexwhile(vector<int> tab, int a) {
//    int i = 0;
//    while (i < tab.size()) {
//        if (tab[i] == a) {
//            return i;
//        }
//        i++;
//    }
//    return -1;
//}
//
//void wypiszwhile(vector<int> tab) {
//    int i = 0;
//    while (i < tab.size())
//    {
//        cout << tab[i] << endl;
//        i++;
//    }
//}
//
//int maxwhile(vector<int> tab) {
//    int wynik = tab[0];
//    int i = 0;
//    while (i < tab.size()) {
//        if (tab[i] > wynik) {
//            wynik = tab[i];
//        }
//        i++;
//    }
//    return wynik;
//}
//
//bool czynalezy(vector<int> tab, int a) {
//    return indexwhile(tab, a) > -1;
//}
//
//bool czyzawierawhile(vector<int> tab, vector<int> tab2) {
//    int i = 0;
//    while (i < tab2.size()) {
//        if (!czynalezy(tab, tab2[i])) {
//            return false;
//        }
//        i++;
//    }
//    return true;
//}
//
//vector<int> unikalnoscwhile(vector<int> tab2) {
//    vector<int> wynik;
//    int i = 0;
//    while (i < tab2.size()) {
//        if (!czynalezy(wynik, tab2[i])) {
//            wynik.push_back(tab2[i]);
//        }
//        i++;
//    }
//    return wynik;
//}
//
//int sumawhile(vector<int> tab) {
//    int wynik = 0;
//    int i = 0;
//    while (i < tab.size()) {
//        wynik += tab[i];
//        i++;
//    }
//    return wynik;
//}
//
//vector<int> podzielnoscwhile(vector<int> tab, int dzielnik, int reszta) {
//    vector<int> wynik;
//    int i = 0;
//    while (i < tab.size()) {
//        if (tab[i] % dzielnik == reszta) {
//            wynik.push_back(tab[i]);
//        }
//        i++;
//    }
//    return wynik;
//}
//
//int main() {
//    vector<int> tab = { 4,5,6,7,8,9 };
//    vector<int> tab2 = { 4,5,6 };
//    vector<int> tab3 = { 4,4,5,5,6,6 };
//    cout << "Tak prezentuje sie tab: " << endl;
//    wypiszwhile(tab);
//    cout << "Index liczby 7: " << indexwhile(tab, 7) << endl;
//    cout << "Generuj: " << endl;
//    wypiszwhile(generujwhile(1, 7));
//    cout << "Max element: " << maxwhile(tab) << endl;
//    cout << "Czy nalezy0/1: " << czynalezy(tab, 10) << endl;
//    cout << "Czy tab2 zawiera sie w tab1: " << czyzawierawhile(tab, tab2)<<endl;
//    cout << "Unikalnosc tab3: " << endl;
//    wypiszwhile(unikalnoscwhile(tab3));
//    cout << "Suma elementow tab1: " << sumawhile(tab) << endl;
//    cout << "Liczby podzielne: " << endl;
//    wypiszwhile(podzielnoscwhile(tab, 3, 0));
//}


//0. Wiedziec o co chodzi
//1. Wymyslec przyklad
//2. Sprawdzic czy przyklad jest kompletny
//3. Sformalizowac przyklad
//4. Naglowek funkcji
//5. Cialo funkcji
//6. Nie wiesz co pisac wroc do przykladu
//#include <vector>
//#include <iostream>
//#include <random>
//
//using namespace std;
//
//vector<int> generujwhile(int n, int koniec) {
//	vector<int> wynik;
//	int i = 0;
//	while (i < n) {
//		int tmp = rand() % koniec;
//		wynik.push_back(tmp);
//		i++;
//	}
//	return wynik;
//}
//
//int indexwhile(vector<int> tab, int a) {
//	int i = 0;
//	while (i < tab.size()) {
//		if (tab[i] == a) {
//			return i;
//		}
//		i++;
//	}
//	return -1;
//}
//
//void wypiszwhile(vector<int> tab) {
//	int i = 0;
//	while (i < tab.size()) {
//		cout << tab[i] << endl;
//		i++;
//	}
//}
//
//int max(vector<int> tab) {
//	int wynik = tab[0];
//	int i = 0;
//	while (i < tab.size()) {
//		if (tab[i] > wynik) {
//			wynik = tab[i];
//		}
//		i++;
//	}
//	return wynik;
//}
//
//bool czynalezy(vector<int> tab, int a) {
//	return indexwhile(tab, a) > -1;
//}
//
//bool czyzawierawhile(vector<int> tab, vector<int> tab2) {
//	int i = 0;
//	while (i < tab2.size()) {
//		if (!czynalezy(tab, tab2[i])) {
//			return false;
//		}
//		i++;
//	}
//	return true;
//}
//
//vector<int> unikalnoscwhile(vector<int> tab) {
//	vector<int> wynik;
//	int i = 0;
//	while (i < tab.size()) {
//		if (!czynalezy(wynik, tab[i])) {
//			wynik.push_back(tab[i]);
//		}
//		i++;
//	}
//	return wynik;
//}
//
//int suma(vector<int> tab) {
//	int wynik = 0;
//	int i = 0;
//	while (i < tab.size()) {
//		wynik += tab[i];
//		i++;
//	}
//	return wynik;
//}
//
//vector<int> podzielnoscwhile(vector<int> tab, int dzielnik, int reszta) {
//	vector<int> wynik;
//	int i = 0;
//	while (i < tab.size()) {
//		if (tab[i] % dzielnik == reszta) {
//			wynik.push_back(tab[i]);
//		}
//		i++;
//	}
//	return wynik;
//}
//
//int main() {
//	vector<int> tab1 = { 9,8,7,6,5,4,2,3 };
//	vector<int> tab2 = { 5,4,2,3 };
//	vector<int> tab3 = { 9,9,8,9,7,7,3,3 };
//	cout << "Generuj: " << endl;
//	wypiszwhile(generujwhile(3, 7));
//	cout << "Index liczby 2: " << indexwhile(tab1, 2) << endl;
//	cout << "Tab1: " << endl;
//	wypiszwhile(tab1);
//	cout << "Max element: " << max(tab1) << endl;
//	cout << "Czy 10 nalezy do tab1: " << czynalezy(tab1, 10) << endl;
//	cout << "Czy tab2 zawiera sie w tab1: " << czyzawierawhile(tab1, tab2) << endl;
//	cout << "Unikalnosc tab3: " << endl;
//	wypiszwhile(unikalnoscwhile(tab3));
//	cout << "Suma tab2: " << suma(tab2) << endl;
//	cout << "Podzielne przez 3 z tab3: " << endl;
//	wypiszwhile(podzielnoscwhile(tab3, 3, 0));
//}
// 
#include <vector>
#include <iostream>
#include <random>

using namespace std;
//0.Wiedziec o co chodzi
//1. Wymyslec przyklad
//2.sprawdzic czy kompletny
//3.sformalizowac przyklad
//4. naglowek funkcji
//5. cialo funkcji
//6.nie wiesz co pisac wroc do przykladu
void wypiszwhile(vector<int> tab) {
	int i = 0;
	while (i < tab.size()) {
		cout << tab[i] << endl;
		i++;
	}
}

int index(vector<int> tab, int a) {
	i = 0;
	while (i < tab.size()) {
		if (tab[i] == a) {
			return i;
		}
		i++;
	}
	return -1;
}

int maxwhile(vector<int> tab) {
	int wynik = tab[0];
	i = 0;
	while (i < tab.size()) {
		if (tab[i] > wynik) {
			wynik = tab[i];
		}
		i++;
	}
	return wynik;
}

bool czynalezy(vector<int> tab, int a) {
	return index(tab, a) > -1;
}

bool czyzawierawhile(vector<int> tab, vector<int> tab2) {
	int i = 0;
	while (i < tab2.size()) {
		if(!czynalezy())
	}
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
