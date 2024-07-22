#include <iostream>

using namespace std;

int main() {

 // Zmienne do przechowywania danych wejściowych, wypisania wyniku oraz dla stałej przelicznika ze stóp na metry
 int stopy;
 double metry;
 double przelicznik = 0.3;
 

 cout << "Podaj wysokosc w stopach ";
 //Pobieranie danych od użytkownika
 cin >> stopy;
 //Właściwe przeliczenie
 metry = stopy * przelicznik;

 cout << "\n";
 //------wypisywanie wyników-------
 cout << stopy << " stop - to jest: " << metry << " metrow\n";

}
