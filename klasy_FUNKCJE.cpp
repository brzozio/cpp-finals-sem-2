//Brzozowski Michal 235597
#include<iostream>
#include<cstdlib>
#include<string>
#include"klasy_H.h"

Biurko::Biurko(int dlugoscTymczasowa, int szerokoscTymczasowa, int wysokoscTymczasowa) {
	dlugosc = dlugoscTymczasowa;
	szerokosc = szerokoscTymczasowa;
	wysokosc = wysokoscTymczasowa;
}
Szafa::Szafa(int dlugoscTymczasowa, int szerokoscTymczasowa, int wysokoscTymczasowa) {
	dlugosc = dlugoscTymczasowa;
	szerokosc = szerokoscTymczasowa;
	wysokosc = wysokoscTymczasowa;
}
Lozko::Lozko(int dlugoscTymczasowa, int szerokoscTymczasowa, int wysokoscTymczasowa) {
	dlugosc = dlugoscTymczasowa;
	szerokosc = szerokoscTymczasowa;
	wysokosc = wysokoscTymczasowa;
}

void Pokoj::stworz() {
	std::cout << "Podaj dlugosc pokoju (max 2000)" << std::endl;
	std::cin >> dlugoscPokoj;
	std::cout << "Podaj szerokosc pokoju (max 2000)" << std::endl;
	std::cin >> szerokoscPokoj;
	std::cout << "Podaj wysokosc pokoju (max 310)" << std::endl;
	std::cin >> wysokoscPokoj;
	std::cout << "Podsumowanie:" << std::endl;
	std::cout << "Dlugosc pokoju: " << dlugoscPokoj << std::endl;
	std::cout << "Szerokosc pokoju: " << szerokoscPokoj << std::endl;
	std::cout << "Wysokosc pokoju: " << wysokoscPokoj << std::endl;
};



