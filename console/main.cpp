// Include standard c librart
#include <iostream>

int main() {
	// First important comment.
	// Use standard output stream.
	std::cout << "Hello in the world!!!\n" << std::endl;
	std::cout << "World is hell!!!" << std::endl;
	std::cout << "World is pain!!" << std::endl;
	std::cout << "World is beautiful, and interesting thing!!!\n" << std::endl;

	// Set Urkrainian language for next output.
	setlocale(LC_CTYPE, "ukr");

	std::cout << "��������� ����� - ��������!!!" << std::endl;
	std::cout << "������� �� ������� ����!!!" << std::endl;
	std::cout << "����� �����Ͳ - ������ �����!!!" << std::endl;

	// Hold console open
	system("pause");
	
}
