// ConsoleApplication30.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void wypisz(int a)
{
	cout << a << endl;
}

void wypisz2(vector<int> tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << endl;
	}
}

void wypisz3(map<int, int> mapa)
{
	for (auto elem : mapa)
	{
		cout << elem.first << "\t" << elem.second << endl;
	}
}

bool czynalezy(vector<int> tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}
	}
	return false;
}

bool czynalezyklucz(map<int, int> m, int klucz)
{
	for (auto item : m)
	{
		if (item.first == klucz)
		{
			return true;
		}
	}
	return false;
}

bool czyzawiera(vector<int> tab, vector<int> podzbior)
{
	for (int i = 0; i<podzbior.size(); i++)
	{
		if (!czynalezy(tab, podzbior[i]))
		{
			return false;
		}
	}
	return true;
}

int min(vector<int> tab)
{
	int wynik = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] < wynik)
		{
			wynik = tab[i];
		}
	}
	return wynik;
}

int max(vector<int> tab)
{
	int wynik = tab[0];
	for(int i=1;i<tab.size();i++)
	{
		if(tab[i]>wynik)
		{
			wynik=tab[i];
		}
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

map<int, int> czestosc(vector<int> tab2)
{
	map<int, int> wynik;
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!czynalezyklucz(wynik, tab2[i]))
		{
			wynik.insert({ tab2[1],1 });
		}
		else
		{
			wynik[{tab2[i]}]++;
		}
	}
	return wynik;
}

bool palindrom(vector<int> tabp)
{
	int koniec = tabp.size() - 1;
	for (int i = 0; i<tabp.size(); i++)
	{
		if (tabp[i] != tabp[koniec - i])
		{
			return false;
		}
	}
	return true;
}

vector<int> podzielnosc(vector<int> tabp, int dzielnik, int reszta = 0)
{
	vector<int> wynik;
	for (int i = 0; i < tabp.size(); i++)
	{
		if (tabp[i] % dzielnik == reszta)
		{
			wynik.push_back(tabp[i]);
		}
	}
	return wynik;
}

vector<int> generuj(int n)
{
	vector<int> wynik;
	for (int i = 0; i < n; i++)
	{
		wynik.push_back(rand());
	}
	return wynik;
}
int main()
{
	int a = 5;
	wypisz(a);
	
	vector<int> tab = { 1,2,2,3,3,-1 };
	vector<int> podzbior = { 1,2 };
	vector<int> tab2 = { 1,2,2,3,3,-1 };
	vector<int> tabp = { 1,2,3,2,1 };

	wypisz2(tab);

	bool wynik = czynalezy(tab, 4);
	{
		if (wynik)
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout << "NIE" << endl;
		}
	}

	bool wynik2 = czyzawiera(tab, podzbior);
	{
		if (wynik2)
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout << "NIE" << endl;
		}
	}

	cout << min(tab) << endl;
	cout << max(tab) << endl;

	wypisz2(unikalnosc(tab));
	wypisz3(czestosc(tab));
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
