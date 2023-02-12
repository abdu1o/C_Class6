#include <iostream>
#include <string>
#include "Laptop.h"
#include "LaptopComponents.h"
using namespace std;


int main()
{
	Laptop laptop(CPU(12, 4, 500), 
		VideoCard(12, 500), 
		RAM(10), 
		Motherboard(120, 1));

	cout << laptop << endl << endl;

	Screen screen(20, 10, 144);
	Keyboard keyboard(1, 144);
	Mouse mouse(1, 144);
	Vebcam vebcam(4000);

	Laptop* laptop_aggr = new Laptop(&screen, &keyboard, &mouse, &vebcam);
	laptop_aggr->PrintAggregation();

	delete laptop_aggr;
}
