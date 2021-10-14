//Brzozowski Michal 235597
#pragma once
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class Meble
{
public:
	int dlugosc;
	int szerokosc;
	int wysokosc;
};
class Pokoj
{
public:
	int dlugoscPokoj;
	int szerokoscPokoj;
	int wysokoscPokoj;
	void stworz();
};
class Biurko
	:public Meble {
public:
	Biurko(int = 200, int = 100, int = 70);
};
class Szafa
	:public Meble {
public:
	Szafa(int = 80, int = 70, int = 260);
};
class Lozko
	:public Meble {
public:
	Lozko(int = 200, int = 100, int = 0);
};
