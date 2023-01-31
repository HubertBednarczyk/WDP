// Cw7_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
//0 punkt - wiedziec o co chodzi (unikalnosc - wyciagnac liczby ktore sa unikalne)
//1 punkt - do zadania wymyslec przyklad ( unikalnosc = [8,1,1,7,5,8,3])
//2 punkt - sprawdzic czy przyklad jest kompletny(odpowiadajacy danej funkcji)
//3 punkt - sformalizowanie przykladu
//4 punkt - naglowek funkcji
//5 punkt - cialo funkcji
//6 punkt - Nie wiesz co pisac? Wroc do przykladu
#include <iostream>
#include <vector>
//suma,wpisz,max,min,czynalezy,czyzawiera,index,unikalnosc
using namespace std;

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

bool czynalezy(vector<int> tab, int a)
{
	return index(tab, a) > -1;
}


void wypisz(vector<int> tab)
{
	for (int i = 0;i < tab.size();i++)
	{
		cout << tab[i];
	}
}

vector<int> unikalnosc(vector<int> tab)
{
	vector<int> wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezy(wynik, tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
bool liczby_pierwsze(vector<int> tab, int a)
{
	int wynik = 0;
	if (a <= 2)
	{
		return 0;
	}
	for (int i = 0;i < tab.size();i++)
	{
		if (a % tab[i] == 0 && a % 1 == 0)
		{
			tab[i] = wynik;
			wynik = a;
		}
	}
	return wynik;
}
int main()
{
	vector<int> tab = { 2,9,3,3,7,10 };
	cout << "Normalna tablica: ";
	wypisz(tab);
	cout << "\nUnikalnosc: ";
	wypisz(unikalnosc(tab));
	cout<<"\nLiczby pierwsze: "<<liczby_pierwsze(tab,3)<<endl;
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
