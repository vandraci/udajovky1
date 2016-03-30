#pragma once
class Zakaznik
{
	std::string adresa_centraly;
	ArrayList<ArrayList<Predajna>> predajneVZone; // predajne zoradene v arraylistoch podla zony, potom zoznam predajni v jednotlivych zonach
	std::string nazov;
public:
	Zakaznik();
	~Zakaznik();
};

