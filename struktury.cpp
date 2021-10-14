#include <iostream>
#include <cstdlib>
#include <cmath>

struct Punkt {
	float x;
	float y;
};
Punkt *punkty;
int iloscTymczasowaPunktow;

void wprowadzaniePunktow2(struct Punkt punkty[]);
void wyswietlaniePunktow2(struct Punkt punkty[]);
void LiczeniePolaTrojkata2(struct Punkt punkty[]);

int mainSSSSS() {
	std::cout << "Podaj ile punktow bedziesz chcial wprowadzic" << std::endl;
	std::cin >> iloscTymczasowaPunktow;

	punkty = new Punkt[iloscTymczasowaPunktow];

	wprowadzaniePunktow2(punkty);
	wyswietlaniePunktow2(punkty);
	LiczeniePolaTrojkata2(punkty);
	return 0;
}
void wprowadzaniePunktow2(struct Punkt punkty[]) {
	// wprowadzanie punktow
	for (int i = 0; i < iloscTymczasowaPunktow; i++) {
		std::cout << "Podaj wspolrzedna X\n";
		std::cin >> punkty[i].x;
		std::cout << "Podaj wspolrzedna Y\n";
		std::cin >> punkty[i].y;
	}
}
void wyswietlaniePunktow2(struct Punkt punkty[]) {
	// wyswietlanie punktow
	for (int i = 0; i < iloscTymczasowaPunktow; i++) {
		std::cout << "Punkt " << i << std::endl;
		std::cout << "Wspolrzedna X = " << punkty[i].x << std::endl;
		std::cout << "Wspolrzedna Y = " << punkty[i].y << std::endl;
	}
}
void LiczeniePolaTrojkata(struct Punkt punkty[]) {
	// laczenie w odcinki (1 z 2, 2 z 3 itd)
	float l = 0;
	float dlugoscOdcinka, *odcinki, dlugoscOstatniegoOdcinka = 0;
	odcinki = new float[iloscTymczasowaPunktow];
	int iloscOdcinkow = 0;

	for (int i = 1; i < iloscTymczasowaPunktow; i++) {
		float Punkt1X = punkty[i - 1].x;
		float Punkt1Y = punkty[i - 1].y;
		float Punkt2X = punkty[i].x;
		float Punkt2Y = punkty[i].y;
		dlugoscOdcinka = sqrt((Punkt2X - Punkt1X) * (Punkt2X - Punkt1X) + (Punkt2Y - Punkt1Y) * (Punkt2Y - Punkt1Y));
		l += dlugoscOdcinka;
		odcinki[i] = dlugoscOdcinka;
		iloscOdcinkow++;
		std::cout << "Dlugosc odcinka " << i - 1 << " - " << i << "|Punkt " << i << " , Punkt " << i + 1 << "|" << " wynosi " << dlugoscOdcinka << std::endl;
		if (i == iloscTymczasowaPunktow - 1) { // liczenie odleglosci ostatniego punktu od pierwszego
			float Punkt1X = punkty[iloscTymczasowaPunktow - 1].x; // punkt ostatni
			float Punkt1Y = punkty[iloscTymczasowaPunktow - 1].y;
			float Punkt2X = punkty[0].x; // punkt pierwszy
			float Punkt2Y = punkty[0].y;
			dlugoscOdcinka = sqrt((Punkt2X - Punkt1X) * (Punkt2X - Punkt1X) + (Punkt2Y - Punkt1Y) * (Punkt2Y - Punkt1Y));
			l += dlugoscOdcinka;
			dlugoscOstatniegoOdcinka = dlugoscOdcinka;
			iloscOdcinkow++;
			std::cout << "Dlugosc odcinka " << i << " - " << 0 << "|Punkt " << i << " , Punkt " << i + 1 << "|" << " wynosi " << dlugoscOdcinka << std::endl;
		}
	}

	/*float podwojoneL = 0, l;
		for (int i = 1; i <= iloscOdcinkow; i++) {
			if (i = iloscOdcinkow) {
				podwojoneL += dlugoscOdcinka;
			}
			else {
				podwojoneL += odcinki[i];
			}
		}
		l = (1 / 2) * podwojoneL; */
	float srodekWzoruHerona;
	float jednaDrugaL = l/2;
	srodekWzoruHerona = jednaDrugaL - dlugoscOstatniegoOdcinka;
		//std::cout << "Srodek przed = " << srodekWzoruHerona << std::endl;

		for (int i = 1; i < iloscOdcinkow; i++) { // mnozenie pod pierwiastkiem kolejnych odleglosci
			srodekWzoruHerona = srodekWzoruHerona * (jednaDrugaL - odcinki[i]);
		}
	
	float wzorHerona = sqrt(jednaDrugaL*srodekWzoruHerona);

	std::cout << "Pole trojkata liczone wzorem Herona wynosi: " << wzorHerona << std::endl;
	system("PAUSE");
}