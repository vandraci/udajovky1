#pragma once

#include <iostream>

#include "Date.h"

struct VodaNaplnena {
	int mnozstvo;
	Date datum_plnenia;
}; // voda naplnena v urcity datum

class SkladovanaVoda
{
	MineralnaVoda voda;
	PriorityFront<VodaNaplnena> naplnena_voda;
public:
	SkladovanaVoda();
	~SkladovanaVoda();

	bool vylozDodavku(Dodavka d);
	MineralnaVoda dajVodu();
	int dajMnozstvo();
};

