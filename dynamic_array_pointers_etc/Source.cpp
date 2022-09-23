#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int size_arr{};
	cout << "enter size: "; cin >> size_arr;
	float * array_arr = new float[size_arr]{};

	for (int i{}; i < size_arr; i++) {
		*(array_arr + i) = static_cast<float>(1 / pow((i + 1), 2));
	}

	float sum{};

	for (int j{}; j < size_arr; j++) {
		sum += static_cast<float>( * (array_arr + j));
	}
	sum *= 6.0;
	cout << "Square root of the sum: " << sqrt(sum)<<endl;

	return 0;
}