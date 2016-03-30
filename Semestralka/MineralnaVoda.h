#pragma once
class MineralnaVoda
{
	std::string ean;
	std::string nazov;
	Dodavatel dodavatel;
public:
	MineralnaVoda(std::string ean, std::string nazov, Dodavatel dodavatel);
	~MineralnaVoda();
};

