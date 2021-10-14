//Brzozowski Michal 235597
#include<iostream>
#include<cstdlib>
#include<string>
#include"klasy_H.h"

int main() {
	Pokoj pokoik;
	Biurko biurko;
	Szafa szafa;
	Lozko lozko;
	pokoik.stworz();

	// sprawdzanie dlugosci pokoju
	if (lozko.dlugosc > pokoik.dlugoscPokoj) {
		std::cout << "Za dlugie lozko niestety, nie zmiesci sie do naszego pokoiku" << std::endl;
	}
	else {
		std::cout << "Zmieszcza sie!" << std::endl;
	}
	if (szafa.dlugosc + biurko.dlugosc > pokoik.dlugoscPokoj) {
		std::cout << "Za dlugie polaczenie szafa biurko" << std::endl;
	}
	else {
		std::cout << "Zmieszcza sie!" << std::endl;
	}

	// sprawdzanie szerokosci pokoju
	if (biurko.szerokosc + szafa.szerokosc > pokoik.szerokoscPokoj) {
		std::cout << "Za szerokie polaczenie szafa biurko" << std::endl;
	}
	else {
		std::cout << "Szerokosc w porzadku" << std::endl;
	}

	if (biurko.szerokosc + lozko.szerokosc > pokoik.szerokoscPokoj) {
		std::cout << "Za szerokie polaczenia lozko biurko" << std::endl;
	}
	else {
		std::cout << "Zmieszcza sie!" << std::endl;
	}
	// sprawdzanie wysokosci pokoju
	if (biurko.wysokosc > pokoik.wysokoscPokoj) {
		std::cout << "Za wysokie biurko!\nMusialbys je postawic u sasiada, aby zmiescilo sie w twoim pokoju!" << std::endl;
	}
	if (szafa.wysokosc > pokoik.wysokoscPokoj) {
		std::cout << "Za wysoka szafa!\nMusialbys ja postawic u sasiada, aby zmiescila sie w twoim pokoju!" << std::endl;
	}
	if (lozko.wysokosc > pokoik.wysokoscPokoj) {
		std::cout << "Za wysokie lozko!\nMusialbys je postawic u sasiada, aby zmiescilo sie w twoim pokoju!" << std::endl;
	}
	return 0;
}
