// Cw2_Visual.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

//int main()
//{
//    int a = 2;
//    cout << "a: " << a << "\n";
//    int b = -8;
//    cout << "b: " << b << "\n";
//    int c = 4;
//    cout << "c: " << c << "\n";
//    int delta = (b * b) - (4 * a * c);
//    if (delta < 0)
//    {
//        cout << "delta rowna sie: " << delta<<"\n";
//        cout << "gdy delta jest ujemna, trojmian kwadratowy nie ma pierwiastkow rzeczywistych"<<"\n";
//    }
//    else
//    {
//        double pierwiastekzdelty = sqrt(delta);
//        cout << "delta jest rowna:" << delta << "\n";
//        cout << "pierwiastek z delty jest rowny: " << pierwiastekzdelty << "\n";
//        double x1 = (-b - pierwiastekzdelty) / (2 * a);
//        double x2 = (-b + pierwiastekzdelty) / (2 * a);
//        cout << "x1 rowna sie: " << x1 << "\n";
//        cout << "x2 rowna sie: " << x2 << "\n";
//    }
//
//}

//int main()
//{
//    int a, b, c;
//    cout << "Podaj 3 liczby: "<< endl;
//    cin >> a >> b >> c;
//    cout << "a: " << a << "\nb: " << b << "\nc: " << c << "\n";
//    int delta = b * b - 4 * a * c;
//    if (delta < 0)
//    {
//        cout << "delta rowna sie: " << delta << endl;
//        cout << "Gdy delta jest ujemna, trojmian kwadratowy nie ma pierwiastkow rzeczywistych";
//    }
//    else
//    {
//        double pierwiastekZDelty = sqrt(delta);
//        cout << "Delta jest rowna: " << delta << endl;
//        cout << "pierwiastek z delty jest rowny: " << pierwiastekZDelty << "\n";
//        double x1 = (-b - pierwiastekZDelty) / (2 * a);
//        double x2 = (-b + pierwiastekZDelty) / (2 * a);
//        cout << "x1 rowna sie: " << x1 << "\n";
//        cout << "x2 rowna sie: " << x2 << "\n";
//    }
//        
//}


//int main()
//{
//	int a, b, c;
//	cout << "Podaj liczby:" << "\n";
//	cin >> a >> b >> c;
//	double delta = b * b - 4 * a * c;
//	if (delta < 0)
//	{
//		cout << "delta rowna sie: " << delta << "\n";
//		cout << "Gdy delta jest ujemna to trojmian kwadratowy nie posiada pierwiastkow rzeczywistych";
//	}
//	else
//	{
//		cout << "delta rowna sie: " << delta << "\n";
//		double pierwiastek = sqrt(delta);
//		cout << "Pieriwastek wynosi: " << pierwiastek << "\n";
//		double x1 = (-b - pierwiastek) / (2 * a);
//		double x2 = (-b + pierwiastek) / (2 * a);
//		cout << "X1: " << x1 << "\n";
//		cout << "X2: " << x2 << "\n";
//	}


int main()
{
	int a, b, c;
	cout << "Podaj liczby: " << "\n";
	cin >> a >> b >> c;
	double delta = b * b - 4 * a * c;
	if (delta < 0)
	{
		cout << "Delta rowna: " << delta << "\n";
		cout << "PIerdolenie o szopenie" << "\n";
	}
	else
	{
		cout << "Delta rowna: " << delta << "\n";
		double pierwiastek = sqrt(delta);
		cout << "Pierwiastek z delty: " << pierwiastek << "\n";
		double x1 = (-b - pierwiastek) / (2 * a);
		double x2 = (-b + pierwiastek) / (2 * a);
		cout << "x1: " << x1 << "\n";
		cout << "x2: " << x2 << "\n";
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
