#include <iostream>

//Написать функцию сложения двух чисел, используя только прибавление единицы.

int rec_calc(int a, int b) {

	int i = 0;
	if (a > 0) {
		a--;
		i++;
	}
	else {
		if (a < 0) {
			a++;
			i--;
		}
	}

	if (b > 0) {
		b--;
		i++;
	}
	else {if (b < 0) {
		b++;
		i--;
	};
	}

	if (a == 0 && b == 0) {
		return i;
	}
	i += rec_calc(a, b);
}

int main() {

	int x = 2, y = -3;

	std::cout << rec_calc(x, y);
	return 0;
}