// Cw3_Visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

void wypisz(vector<int> tab)
{
	for (int i = 0;i < tab.size();i++)
	{
		cout << tab[i] << endl;
	}
}

int main()
{
	vector<int> tab = { 5,6,7,8 };
	cout << "Pierwszy element tablicy: " << tab[0] << endl;
	cout << "Drugi element tablicy: " << tab[1] << endl;
	cout << "Trzeci element tablicy: " << tab[2] << endl;
	cout << "Czwarty element tablicy: " << tab[3] << endl;
	cout << "Tablica przed zmianami: " << endl;
	wypisz(tab);
	//zmieniamy wartosci na poszczegolnych indeksach
	tab[0] = 15;
	tab[1] = 16;
	tab[2] = 17;
	tab[3] = 18;
	cout << "Pierwszy element po zmianie: " << tab[0] << endl;
	cout << "Drugi element po zmianie: " << tab[1] << endl;
	cout << "Trzeci element po zmianie: " << tab[2] << endl;
	cout << "Czwarty element po zmianie: " << tab[3] << endl;
	cout << "Tablica po zmianie: " << endl;
	wypisz(tab);
	tab.push_back(69);
	cout << "Element ktory zostal dodany na koniec: " << tab[4] << endl;
	cout << "Tablica po dodaniu elementu na koniec: " << endl;
	wypisz(tab);
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
