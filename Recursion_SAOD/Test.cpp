#pragma once
#include <cassert>
#include <iostream>
#include "Rec_calc.h"

void test_rec_calc() {

	{
		int x = 10, y = 21;
		assert(rec_calc(x, y) == 31);
	}

	{
		int x = -9, y = 21;
		assert(rec_calc(x, y) == 12);
	}

	{
		int x = 10, y = -7;
		assert(rec_calc(x, y) == 3);
	}

	{
		int x = -100, y = -3;
		assert(rec_calc(x, y) == -103);
	}
}




