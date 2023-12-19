// Include standard c librart
#include <iostream>
#include <Windows.h>

int main() {
	// First important comment.
	// Use standard output stream.
	std::cout << "Hello in the world!!!\n" << std::endl;
	std::cout << "World is hell!!!" << std::endl;
	std::cout << "World is pain!!" << std::endl;
	std::cout << "World is beautiful, and interesting thing!!!\n" << std::endl;

	// Set Urkrainian language for next output.
	//setlocale(LC_CTYPE, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Óêğà¿íñüêà âëàäà - ïîïóë³ñòè!!!" << std::endl;
	std::cout << "Óêğà¿íö³ öå ïîòóæíà ñèëà!!!" << std::endl;
	std::cout << "ÑËÀÂÀ ÓÊĞÀ¯Í² - ÃÅĞÎßÌ ÑËÀÂÀ!!!" << std::endl;

	// Hold console open
	system("pause");
	
}
