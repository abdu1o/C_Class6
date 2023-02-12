#pragma once
#include "LaptopComponents.h"

class Laptop
{
private:

	CPU cpu;
	VideoCard videcard;
	RAM ram;
	Motherboard motherboard;

	Screen *screen;
	Keyboard *keyboard;
	Mouse *mouse;
	Vebcam *vebcam;

public:

	Laptop(const CPU &_cpu, const VideoCard &_videcard, const RAM &_ram, const Motherboard &_motherboard)
		: cpu{ _cpu }, videcard{ _videcard }, ram{ _ram }, motherboard{ _motherboard }
	{
	}

	Laptop(Screen *_screen, Keyboard* _keyboard, Mouse* _mouse, Vebcam* _vebcam)
	{
		this->screen = _screen;
		this->keyboard = _keyboard;
		this->mouse = _mouse;
		this->vebcam = _vebcam;
	}
	
	friend std::ostream& operator<<(std::ostream& out, const Laptop& laptop)
	{
		out << laptop.cpu << laptop.videcard << laptop.ram << laptop.motherboard;
		return out;
	}

	const void PrintAggregation()
	{
		cout << "Screen: \n";
		this->screen->Print();
		cout << "\nKeyboard: \n";
		this->keyboard->Print();
		cout << "\nMouse: \n";
		this->mouse->Print();
		cout << "\nVebcam: \n";
		this->vebcam->Print();
	}
};
