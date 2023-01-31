// Cw4_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int min(vector<int> tab)
//{
//	int wynik = 0;
//	for (int i = 0; i < tab.size(); i++)
//	{
//		if (tab[i] < wynik)
//		{
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//int max(vector<int> tab)
//{
//	int wynik = tab[0];
//	for (int i = 1;i < tab.size();i++)
//	{
//		if (tab[i] > wynik)
//		{
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//bool czynalezy(vector<int> tab, int element)
//{
//	for (int i = 0; i < tab.size(); i++)
//	{
//		if (tab[i] == element)
//		{
//			return true;
//		}
//	}
//	return false;
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
//bool czyN(vector<int> tab, int a) //z uzyciem funkcji index | Z tego bedziemy korzystac
//{
//	return index(tab, a) > -1;
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
//
//void odleglosc(vector<int> tab2, int a)
//{
//	for (int i = 0;i < tab2.size();i++)
//	{
//		cout << min(tab2) << endl;
//	}
//}
//
//void wypisz(vector<int> tab)
//{
//	for (int i = 0;i < tab.size();i++)
//	{
//		cout << tab[i] << endl;
//	}
//}
//
//int main()
//{
//	int a = 5;
//	//vector<int> tab = { 6,7,8 };
//	//bool wynik = czynalezy(tab, 6);
//	//{
//	//	if (wynik)
//	//	{
//	//		cout << "TAK" << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << "NIE" << endl;
//	//	}
//	//}
//
//	//cout<<czyN(tab, 7)<<endl;
//	//cout << "Suma wszystkich elementow tablicy: " << endl;
//	//cout<<suma(tab)<<endl;
//
//	vector<int> tab2 = { 1,3,4,5,8,9 };
//	wypisz(tab2);
//	cout<<index(tab2, 1)<<endl;
//	cout << "Czy nalezy 10:" << czyN(tab2, 10) << endl;
//	cout << "suma elementow tablicy: " << suma(tab2) << endl;
//	/*odleglosc(tab2,a);*/
//	//Zadanie rozpisac
//	//1, ,3,4,5,  ,8,9
//	// 1.........
//	// 5.......
//	// 8.........
//	//Wypisz,index,czynalezy(z indexem),suma - to na wejsciowke
//}

//#include <vector>
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
//bool CzyNalezyIndex(vector<int> tab, int a)
//{
//	return index(tab, a) > -1;
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
//int main()
//{
//	vector<int> tab = { 9,8,7,6,5,4,3,2 };
//	cout << "Tak prezentuje sie tablica: " << "\n";
//	wypisz(tab);
//	cout << "Index liczby 5: " << index(tab, 5) << "\n";
//	cout << "Czy nalezy liczba 6: " << CzyNalezyIndex(tab, 6) << "\n";
//	cout << "Suma elementow: " << suma(tab)<<"\n";
//}
// 

#include <vector>

using namespace std;

void wypisz(vector<int> tab)
{
	for (int i = 0;i < tab.size();i++)
	{
		cout << tab[i]<<";"<<endl;
	}
}

int index(vector<int> tab, int a)
{
	for (int i = 0;i < tab.size();i++)
	{
		if (tab[i] == a)
		{
			return i;
		}
	}
	return -1;
}

bool CzyNalezyIndex(vector<int> tab, int a)
{
	return index(tab, a) > -1;
}

int suma(vector<int> tab)
{
	int wynik = 0;
	for (int i = 0;i < tab.size();i++)
	{
		wynik += tab[i];
	}
	return wynik;
}

int main()
{
	vector<int> tab = { 9,8,7,6,5,4,3,2 };
	cout << "Tak prezentuje sie tablica: \n";
	wypisz(tab);
	cout << "Index liczby 5: " << index(tab, 5) << "\n";
	cout << "Czy nalezy liczba 6: " << CzyNalezyIndex(tab, 6) << "\n";
	cout << "Suma elementow: " << suma(tab) << "\n";
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
