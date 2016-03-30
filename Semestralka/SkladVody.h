#pragma once
class SkladVody
{
	ArrayList<SkladovanaVoda> skladovane_vody;
	ArrayList<Dodavka> dodavky;

public:
	SkladVody();
	~SkladVody();

	void vypisMineralnychVod();
	bool evidujDodavku(Dodavka d);
	bool pridajMineralnuVodu(MineralnaVoda mv);
};

