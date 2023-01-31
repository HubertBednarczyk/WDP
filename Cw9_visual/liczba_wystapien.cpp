//Zliczanie wystapien elementu w tablicy
//Adam Czapla
//www.algorytm.org

#include <stdio.h>
#include <iostream>

using namespace std; //przestrzen nazw std

int a[5]={5,1,2,5,4};

// funkcja sprawdzajaca ilosc wystapien zadanego elementu w tablicy
int ile(int rozmiar, int *tabl, int szuk)// parametry: rozmiar tablicy, tablica, szukany elemet
{
	int x,wynik=0;
	for(x=0;x<=rozmiar-1; x++) 
		if (tabl[x]==szuk) 
			wynik++;
	return wynik;
}

//funkcja glowna
int main()
{
	int il,szuk=10;

	il=ile(5,a,szuk); // wywolanie funkcji sprawdzajacej ilosc wystapien
	
	if (il==0) 
		cout<<"Brak wystapien elemetu  "<<szuk<<" w tablicy";
	else
		cout<<"wartosc "<<szuk<<"  wystepuje  "<<il<<" razy";

	cout<<"\n";
	
	return 0;
}  
