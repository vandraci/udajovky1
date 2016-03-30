#pragma once
class Poziadavka
{
	MineralnaVoda mineralna_voda;
	int mnozstvo;
	Predajna predajna;
	Date datum_dorucenia;
	bool zrealizovana = false;
public:
	Poziadavka();
	~Poziadavka();

	bool zrealizuj();
	bool jeZrealizovana();
};

