// ZadaniaZKolosa.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//Zadanie 1
int sumOfSmallestDivisibleByFive(int n, vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end()); // sortujemy wektor liczb
    int sum = 0;
    int count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 5 == 0 && count < n) { // sprawdzamy czy liczba jest podzielna przez 5 i czy nie przekroczylismy juz n liczb
            sum += numbers[i];
            count++;
        }
    }
    return sum;
}
//Zadanie 2
double distanceTravelled(double fuelAmount, double fuelConsumption) {
    return (fuelAmount / fuelConsumption) * 100;
}
//Zadanie 3
int factorial(int number) {
    if (number == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}
//Albo rekurencyjnie
int factorial2(int number) {
    if (number == 0) {
        return 1;
    }
    return number * factorial(number - 1);
}

//Zadanie 4
void printNumbers(int w) {
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i * j*2 << " ";
        }
        cout << endl;
    }
}
//Zadanie 5
bool isPalindrome(int number) {
    int originalNumber = number;
    int reverse = 0;
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    return originalNumber == reverse;
}

int main() {
    //Zadanie 1
    
    vector<int> numbers = { 5, 10, 15, 20 };
    int n = 4;
    cout << sumOfSmallestDivisibleByFive(n, numbers) << endl;

    //Zadanie 2

    double fuelamount = 10;
    double fuelconsumption = 5;
    cout << distanceTravelled(fuelamount, fuelconsumption) << "km" << endl;

    //Zadanie 3

    int w = 5;
    printNumbers(w);

    //Zadanie 4

    int number1 = 5;
    cout << number1 << "! = " << factorial(number1) << endl;
    cout << number1 << "! = " << factorial(number1) << endl;
    
    //Zadanie 5
    int number = 101;
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    }
    else {
        cout << number << " is not a palindrome." << endl;
    }
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
