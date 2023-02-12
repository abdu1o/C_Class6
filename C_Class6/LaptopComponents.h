#pragma once
using namespace std;
class CPU
{
private:
	int generation;
	int num_cores;
	int energy_used;

public:

	CPU(): generation(0), num_cores(0), energy_used(0){}

	CPU(int _generation, int _num_cores, int _energy_used)
	{
		this->generation = _generation;
		this->num_cores = _num_cores;
		this->energy_used = _energy_used;
	}

	friend std::ostream& operator<<(std::ostream& out, const CPU& cpu)
	{
		out << "Generation of CPU: " << cpu.generation 
			<< "\nNumber of cores: " << cpu.num_cores 
			<< "\nEnergy consumption of CPU: " << cpu.energy_used << endl;
		return out;
	}
};
class VideoCard
{
private:
	int memory_size;
	int energy_used;

public:
	VideoCard(): memory_size(0), energy_used(0){}

	VideoCard(int _memory_size, int _energy_used)
	{
		this->memory_size = _memory_size;
		this->energy_used = _energy_used;
	}

	friend std::ostream& operator<<(std::ostream& out, const VideoCard& vcard)
	{
		out << "Memory size: " << vcard.memory_size
			<< "\nEnergy consumption of memory: " << vcard.energy_used << endl;
		return out;
	}
};
class RAM
{
private:
	int size;

public:
	RAM() : size(0){}

	RAM(int _size)
	{
		this->size = _size;
	}

	friend std::ostream& operator<<(std::ostream& out, const RAM& ram)
	{
		out << "Size of RAM: " << ram.size << endl;
		return out;
	}
};
class Motherboard
{
private:
	int memory_speed;
	bool isVideocard;

public:
	Motherboard(): memory_speed(0), isVideocard(0){}

	Motherboard(int _memory_speed, bool _IsVideocard)
	{
		this->memory_speed = _memory_speed;
		this->isVideocard = _IsVideocard;
	}

	friend std::ostream& operator<<(std::ostream& out, const Motherboard& mboard)
	{
		out << "Memory speed: " << mboard.memory_speed
			<< "\nIs with videcard: " << mboard.isVideocard;
		return out;
	}
};

class Screen
{
private:
	int height;
	int width;
	int hz_num;

public:

	Screen(int _height, int _width, int _hz_num)
	{
		this->height = _height;
		this->width = _width;
		this->hz_num = _hz_num;
	}

	const void Print()
	{
		cout << "Height: " << this->height << endl;
		cout << "Width: " << this->width << endl;
		cout << "Hz number: " << this->hz_num << endl;
	}
};
class Keyboard
{
private:
	bool isMechanical;
	int size;

public:

	Keyboard(bool _isMechanical, int _size)
	{
		this->isMechanical = _isMechanical;
		this->size = _size;
	}

	const void Print()
	{
		cout << "Is mechanical: " << this->isMechanical << endl;
		cout << "Size: " << this->size << endl;
	}
};
class Mouse
{
private:
	bool isWireless;
	int size;

public:

	Mouse(bool _isWireless, int _size)
	{
		this->isWireless = _isWireless;
		this->size = _size;
	}

	const void Print()
	{
		cout << "Is wireless: " << this->isWireless << endl;
		cout << "Size: " << this->size << endl;
	}
};
class Vebcam
{
private:
	int quality;

public:

	Vebcam(int _quality)
	{
		this->quality = _quality;
	}

	const void Print()
	{
		cout << "Quality: " << this->quality << endl;
	}
};