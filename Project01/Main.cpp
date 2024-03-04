#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

bool is_there_local_min(int* vector, int length);
bool is_there_local_max(int* vector, int length);

string find_all_local_min(int* vector, int length);
string find_all_local_max(int* vector, int length);

int main() {
	int size = 6;
	int* vector = new int[size];
	
	random_init(vector, size, 0, 9);
	

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << "All local max: " << find_all_local_max(vector, size) << endl;
	cout << "All local min: " << find_all_local_min(vector, size) << endl;

	return 0;
}