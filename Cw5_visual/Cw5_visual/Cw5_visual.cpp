// Cw5_visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>

using namespace std;

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
//int min(vector<int> tab)
//{
//	int wynik = tab[0];
//	for (int i = 1; i < tab.size(); i++)
//	{
//		if (tab[i] < wynik) //Różnica żeby zmienic na max to w tej linijce zmienic na '>'
//		{
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//int odlegloscDomow(vector<int> tab, int nrDomu)
//{
//	int odleglosc = 0;
//	for (int i = 0;i < tab.size();i++)
//	{
//		int tmp = nrDomu - tab[i];
//		tmp = abs(tmp);
//		odleglosc += tmp;
//	}
//	return odleglosc;
//}
//
//int NajlepszyDom(vector<int> tab)
//{
//	int wynik = tab[0];
//	int odleglosc = odlegloscDomow(tab,tab[0]);
//	for (int i = 0;i < tab.size();i++)
//	{
//		int tmpOdl = odlegloscDomow(tab, tab[i]);
//		if (tmpOdl < odleglosc)
//		{
//			odleglosc = tmpOdl;
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//int main()
//{
//	//mamy tablice
//	vector<int> tab = { 1,3,4,5,8,9 };
//	cout << "Najmniejsza liczba z tablicy: " << min(tab) << endl;;
//	cout << "Suma odleglosci: " << odlegloscDomow(tab, 5) << endl;
//	cout << "Najlepszy dom: " << NajlepszyDom(tab) << endl;
//}


//int min(vector<int> tab)
//{
//	int wynik = tab[0];
//	for (int i = 1; i < tab.size(); i++)
//	{
//		if (tab[i] < wynik) //Różnica żeby zmienic na max to w tej linijce zmienic na '>'
//		{
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//int odlegloscDomow(vector<int> tab, int nrDomu)
//{
//	int odleglosc = 0;
//	for (int i = 0;i < tab.size();i++)
//	{
//		int tmp = nrDomu - tab[i];
//		tmp = abs(tmp);
//		odleglosc += tmp;
//	}
//	return odleglosc;
//}
//
//int NajlepszyDom(vector<int> tab)
//{
//	int wynik = tab[0];
//	int odleglosc = odlegloscDomow(tab, tab[0]);
//	for (int i = 0;i < tab.size();i++)
//	{
//		int tmpOdl = odlegloscDomow(tab, tab[i]);
//		if (tmpOdl < odleglosc)
//		{
//			odleglosc = tmpOdl;
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//int main()
//{
//	//mamy tablice
//	vector<int> tab = { 1,3,4,5,8,9 };
//	cout << "Najmniejsza liczba z tablicy: " << min(tab) << endl;;
//	cout << "Suma odleglosci: " << odlegloscDomow(tab, 5) << endl;
//	cout << "Najlepszy dom: " << NajlepszyDom(tab) << endl;
//}

//int Odleglosc(vector<int> tab, int nrDomu)
//{
//	int odleglosc = 0;
//	for (int i = 0;i < tab.size();i++)
//	{
//		int tmp = nrDomu - tab[i];
//		tmp = abs(tmp);
//		odleglosc += tmp;
//	}
//	return odleglosc;
//}
//
//int NajlepszyDom(vector<int> tab)
//{
//	int wynik = tab[0];
//	int odleglosc = Odleglosc(tab, tab[0]);
//	for (int i = 0;i < tab.size();i++)
//	{
//		int tmpOdl = Odleglosc(tab, tab[i]);
//		if (tmpOdl < odleglosc)
//		{
//			odleglosc = tmpOdl;
//			wynik = tab[i];
//		}
//	}
//	return wynik;
//}
//
//int main()
//{
//	vector<int> tab = { 1,3,4,5,8,9 };
//	cout << "Odleglosc od 5 do wszystkich domow: " << Odleglosc(tab, 5) << endl;
//	cout << "Najlepszy dom: " << NajlepszyDom(tab) << endl;
//}

int min(vector<int> tab)
{
	int wynik = tab[0];
	for (int i = 1; i < tab.size(); i++)
	{
		if (tab[i] < wynik) //Różnica żeby zmienic na max to w tej linijce zmienic na '>'
		{
			wynik = tab[i];
		}
	}
	return wynik;
}

int Odleglosc(vector<int> tab, int NrDomu)
{
	int odleglosc = 0;
	for (int i = 0;i < tab.size();i++)
	{
		int tmp = NrDomu - tab[i];
		tmp = abs(tmp);
		odleglosc += tmp;
	}
	return odleglosc;
}

int Najlepszy(vector<int> tab)
{
	int wynik = tab[0];
	int odleglosc = Odleglosc(tab, tab[0]);
	for (int i = 0;i < tab.size();i++)
	{
		int tmpOdl = Odleglosc(tab, tab[i]);
		if (tmpOdl < odleglosc)
		{
			odleglosc = tmpOdl;
			wynik = tab[i];
		}
	}
	return wynik;
}

int main()
{
	vector<int> tab = { 1,3,4,5,8 };
	cout << "Odleglosc od 5 do wszystkich domow: " << Odleglosc(tab, 5) << endl;
	cout << "Najlepszy dom: " << Najlepszy(tab) << endl;
}














//}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int sumaDomu(vector<int>tab, int a) {
//	int wynik = 0;
//	for (int i = 0; i < tab.size(); i++) {
//		wynik += abs(a - tab[i]);
//	}
//	return wynik;
//}
//
//int vito(vector<int>tab) {
//	int najmniej = 0;
//	int temp = 99999;
//	int wynik = 0;
//	for (int i = 0; i < tab.size(); i++) {
//		wynik = sumaDomu(tab, tab[i]);
//		if (wynik < temp) {
//			temp = wynik;
//			najmniej = tab[i];
//		}
//	}
//	return najmniej;
//}
//
//int main()
//{
//	vector<int>domy = { 8, 3, 1, 4, 5, 9 };
//	cout << sumaDomu(domy, 1) << endl;
//	cout << vito(domy) << endl;
//}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
