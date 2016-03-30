#pragma once

#include "Date.h"

class Dodavka
{
	Dodavatel dodavatel;
	int mnozstvo;
	MineralnaVoda mineralna_voda;
	Date datum_plnenia;

public:
	Dodavka();
	~Dodavka();
};

