//Brzozowski Michal 235597
#include <iostream>
#include <cstdlib>
#include <cmath>

struct Punkty {
	float x;
	float y;
};
Punkty punkty[3];

void wprowadzaniePunktow(struct Punkty punkty[]);
void wyswietlaniePunktow(struct Punkty punkty[]);
void LiczeniePolaTrojkata(struct Punkty punkty[]);

int main4545() {
	wprowadzaniePunktow(punkty);
	wyswietlaniePunktow(punkty);
	LiczeniePolaTrojkata(punkty);
	return 0;
}
void wprowadzaniePunktow(struct Punkty punkty[]) {
	// wprowadzanie punktow
	for (int i = 0; i < 3; i++) {
		std::cout << "Podaj wspolrzedna X\n";
		std::cin >> punkty[i].x;
		std::cout << "Podaj wspolrzedna Y\n";
		std::cin >> punkty[i].y;
	}
}
void wyswietlaniePunktow(struct Punkty punkty[]) {
	// wyswietlanie punktow
	for (int i = 0; i < 3; i++) {
		std::cout << "Punkt " << i << std::endl;
		std::cout << "Wspolrzedna X = " << punkty[i].x << std::endl;
		std::cout << "Wspolrzedna Y = " << punkty[i].y << std::endl;
	}
}
void LiczeniePolaTrojkata(struct Punkty punkty[]) {
	// laczenie w odcinki (1 z 2, 2 z 3 itd)
	float l = 0;
	float dlugoscOdcinka, odcinki[3];
	for (int i = 1; i < 3; i++) {
		float Punkt1X = punkty[i - 1].x;
		float Punkt1Y = punkty[i - 1].y;
		float Punkt2X = punkty[i].x;
		float Punkt2Y = punkty[i].y;
		dlugoscOdcinka = sqrt((Punkt2X - Punkt1X) * (Punkt2X - Punkt1X) + (Punkt2Y - Punkt1Y) * (Punkt2Y - Punkt1Y));
		l += dlugoscOdcinka;
		odcinki[i] = dlugoscOdcinka;
		std::cout << "Dlugosc odcinka " << i - 1 << " - " << i << "|Punkt " << i << " , Punkt " << i + 1 << "|" << " wynosi " << dlugoscOdcinka << std::endl;
		if (i == 2) { // liczenie odleglosci ostatniego punktu od pierwszego
			float Punkt1X = punkty[i].x; // punkt ostatni
			float Punkt1Y = punkty[i].y;
			float Punkt2X = punkty[0].x; // punkt pierwszy
			float Punkt2Y = punkty[0].y;
			dlugoscOdcinka = sqrt((Punkt2X - Punkt1X) * (Punkt2X - Punkt1X) + (Punkt2Y - Punkt1Y) * (Punkt2Y - Punkt1Y));
			l += dlugoscOdcinka;
			std::cout << "Dlugosc odcinka " << i << " - " << 0 << "|Punkt " << i << " , Punkt " << i + 1 << "|" << " wynosi " << dlugoscOdcinka << std::endl;
		}
	}
	
	float wzorHerona;
	std::cout << "L = " << l << std::endl;
	std::cout << "Odcinek 1 = " << odcinki[1] << std::endl;
	std::cout << "Odcinek 2 = " << odcinki[2] << std::endl;
	std::cout << "Odcinek 3 = " << dlugoscOdcinka << std::endl;

	wzorHerona = sqrt(l/2 * (l/2 - odcinki[1]) * (l/2 - odcinki[2]) * (l/2 - dlugoscOdcinka));

	std::cout << "Pole trojkata liczone wzorem Herona wynosi: " << wzorHerona << std::endl;
	system("PAUSE");
}
