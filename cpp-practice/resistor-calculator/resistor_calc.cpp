#include<iostream>

int main() {
	double voltage = 9;
	double drop = 2;
	double amps = 0.02;
	double resist = (voltage - drop) / amps;
	std::cout << "The resistor is: " << resist << " Ohms" << std::endl;
	bool safe = (amps <= 0.03);
	std::cout << safe << std::endl;
}