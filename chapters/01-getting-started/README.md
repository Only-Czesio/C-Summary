# Zaczynamy

W każdym programie w języku C++ musi być specjalna funkcja zwana main
```
#include <iostream>

using namespace std;

int main() {
	cout << "Witamy na pokładzie" << endl;
}
```

Treść funkcji - jej ciało a inny i słowami: instrukcje wykonywane w ramach tej funkcji - zawarta jest między dwoma nawiasami klamrowymi { }

cout - (console out) - wypisuje treść do konsoli a znaki << właśnie oznaczają tę akcje

cin - (console in) - pobiera treść dla programu przy użyciu >> czyli odwrotnie niż cout co po czasie jest już bardzo intuicyjne

#include <iostream> - ta linijka odpowiedzialna jest za dołączenie specjalnej biblioteki,w której znajdują się funkcje. Dzięki temu możemy używać cout i cin i prawodpodobnie parę innych funkcji, które można znaleźć w dokumentacji biblioteki iostream. Kompilator przed przystąpieniem do pracy nad dalszymi linijkami programu wstawi w tym miejscu plik nagłówkowy biblioteki iostream, a następnie zapozna się z nim.

# Wolny (dowolny) format zapisu programu

Program pisze się, umieszczając kolejne instrukcje w linijkach jedna pod drugą. Koniec instrukcji określany jest przez średnik stawiany na końcu.

## Białe znaki

Wewnątrz instrukcji można postawic dodatkowe znaki spacji (odstępu) i tabulatory, czy nawet znaki nowej linii.

Wstawianie białych znaków służy nie kompilatorowi a programiście w czytelności.

# Kompilator

Wersja źródłowa programu musi zostać przetłumaczona z języka C++ na język maszyny (procesora). Do tego tłumaczenia służy tak zwany kompilator C++.

Tekst naszego programu poddajemy więc kompilacji i w jej rezultacie otrzymujemy skompilowaną wersję naszego programu. Skompilowaną, czyli przetłumaczoną na język maszynowy. Taka skompilowana wersja jest już wprawdzie w języku procesora, ale jest jeszcze niepełna - musi zostać połączona z tak zwanymi bibliotekami.

# Linker

Proces łączenia naszego programu z bibliotekami wykonywany jest przez program zwany zwykle linkerem

Przyłączenie funkcji bibliotecznych następuje dopiero w czasie linkowania. Nasza dyrektywa (instrukcja) #include zapoznała kompilator jedynie z samym nagłówkiem biblioteki. Potrzebny był on po to, by kompilator mógł sprawdzać poprawność naszego odnoszenia się do biblioteki. Natomiast sama treść funkcji bibliotecznych dołączana jest dopiero na etapie linkowania.

# Środowisko programowania

Istnieją specjalne narzędzia dla programistów, które służą do tworzenia programów C++.

Dzięki takiemu edytorowi, który kompiluje i wykonuje linkowanie będziemy wiedzieli czy popełniliśmy gdzieś błąd składni. Zostanie wskazane dokładne miejsce takiego błędu, podświetli się, albo wypisze numer linijki znajdującej błąd.

# Wyjaśnienie

W rezultacie trzech etapów pracy nad programem:

 - edycji,
 - kompilacji,
 - linkowania

otrzymaliśmy program w wersji nadającej się do uruchomienia.

Znak \n - (n - jak: new line) powoduje, że w trakcjie wypisywania tekstu na ekranie następuje przejście do nowej linii.

# Drugi program

```
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

```
Komentarze można zapisywać w dwa sposoby:

 - pierwszym jest zastosowanie znaków // (dwa ukośniki)

 - drugim jest ograniczenie jakiegoś tekstu znakami /* (z lewej) oraz */ (z prawej) - komentarze tego typu nie mogą być zagnieżdżane

Czas zużyty na pisanie komentarzy nigdy nie jest czasem straconym. Bardzo szybko zauważysz, że czas ten odzyskasz z nawiązką w trakcie uruchamiania programu lub przy późniejszych jego modyfikacjach.

Opisuj rzeczy ważne. Opisuj przede wszystkim wszystkie "kruczki", które zastosowałeś. Dla samego siebie i dla tych, którzy modyfikować będą Twoje programy wtedy, gdy Ty będziesz już pisał w języku C++ systemu operacyjne.

## Zmienne

W funkcji main zauważamy linijki:

 int stopy;
 double metry;

Są to DEFINICJE ZMIENNYCH występujące w programie.  Zmiennym tym nadaliśmy nazwy: stopy oraz metry. Nazwy te są wybrane przez nas by opisywały zastosowanie tych zmiennych. Można jednak zapytać ogólniej:

### Co może być nazwą w C++?

Nazwa nie może się zacząć od cyfry

Małe i duże litery sa rozróżniane

Odradza się też zaczynanie nazwy od znaków podkreślenia, bo często kompilator używa tego sposobu do swoich celów

Odradza się używanie wielkiej litery O, bo przypomina za bardzo cyfrę zero 0. Odradza się też małej litery l, bo na ekranie przypomina cyfre jeden 1

Zwróć uwagę, by wymyślane przez Ciebie nazwy były dla Ciebie wyjaśnieniem, a nie zagadką.

Nazwa nie może być identyczna z żadnym ze słów kluczowych języka C++. Te słowa kluczowe to:

alignas
alignof
and
and_eq
asm
auto
bitand
bitorbool
break
case
catch
char
char16_t
char32_t
class
compl
const
constexpr
const_cast
continue
decltype
default
delete
do
for
friend
goto
if
inline
int
long
mutable
namespace
new
noexcept
not
not_eq
nullptr
operator
or
or_eq
private
protected
public
register
reinterpret_cast
return
short
signed
sizeof
static
static_assert
static_cast
struct
switch
template
this
thread_local
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
viod
volatile
wchar_t
while
xor
xor_eq
export

Nazwy są nam potrzebne po to, by za ich pomocą odnosić się w programie do naszych zmiennych czy stałych - ogólnie mówić będziemy: do obiektów.

W języku C++ każda nazwa musi zostać zadeklarowana zanim zostanie użyta. Deklaracja mówi, jakiego typu jest to, co nazywaliśmy daną nazwą.

## Definicja a deklaracja

Jest subtelna różnica między tymi dwoma pojęciami. Załóżmy, że chodzi o naszą nazwę stopy.

Deklaracja, wtedy gdy napotka ją kompilator, mówi mu:
 Gdybyś zobaczył kiedyś słowo stopy, to wiedz, że oznacza ona obiekt typu całkowitego (int)
Definicja zaś mówi mu:
 A teraz zarezerwuj mi w pamięci miejsce na nowy obiekt typu całkowitego o nazwie stopy

Definicja jest równocześnie deklaracją. Ale nie odwrotnie
