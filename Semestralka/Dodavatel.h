#pragma once

#include <iostream>

#include "MineralnaVoda.h"

class Dodavatel
{
	std::string nazov;
	std::string adresa;

	ArrayList<MineralnaVoda> mineralne_vody;

public:
	Dodavatel(std::string nazov, std::string adresa)
	{
		this->nazov = nazov;
		this->adresa = adresa;
	}
	~Dodavatel();

	bool pridajVodu(MineralnaVoda mv);
	std::string dajNazov();
};

