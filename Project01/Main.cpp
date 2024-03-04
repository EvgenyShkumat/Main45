#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

int main() {
	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 0, 9);

	cotu << "Vector:\n" << output(vector, size);

	return 0;
}