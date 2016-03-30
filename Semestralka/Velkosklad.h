#pragma once

#include <iostream>

#include "Zakaznik.h"
#include "Dodavatel.h"
#include "Poziadavka.h"
#include "MineralnaVoda.h"
#include "Predajna.h"
#include "Dodavka.h"
#include "Auto.h"
#include "SkladVody.h"

class Velkosklad
{
	ArrayList<Dodavatel> dodavatelia;
	ArrayList<Zakaznik> zakaznici;
	PriorityFront<Poziadavka> poziadavky;
	SkladVody sklad;

public:
	Velkosklad();
	~Velkosklad();

	bool pridajZakaznika(Zakaznik z);
	bool pridajDodavatela(Dodavatel d);
	bool pridajMineralnuVodu(MineralnaVoda m);
	bool pridajPredajnu(Zakaznik z, Predajna p);
	bool evidujDodavku(Dodavka d);
	bool evidujPoziadavku(Poziadavka p);
	void kontrolujPoziadavky();
	Auto vyskladnenie();
	void vypisMineralnychVod();
	Zakaznik vyhladajOdberatela(MineralnaVoda m);
	Zakaznik vyhladajOdberatela(Dodavatel d);
	void nezrealizovanePoziadavky(); // vypise nezrealizovane poziadavky
	void vyhladajDodavatelaSMaxOdbytom();
	bool ulozitDoSuboru(std::string path);
	bool nacitatZoSuboru(std::string path);
};

