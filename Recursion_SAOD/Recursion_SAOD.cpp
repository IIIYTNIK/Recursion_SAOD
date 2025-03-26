#include <iostream>
#include <cassert>
#include "Rec_calc.h"
#include "Test.h"


//Написать функцию сложения двух чисел, используя только прибавление единицы.


int main() {
	test_rec_calc();

	int x = 101, y = -301;

	std::cout << rec_calc(x, y);
	return 0;
}