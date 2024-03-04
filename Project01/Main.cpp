#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

bool is_there_local_min(int* vector, int length);
bool is_there_local_max(int* vector, int length);

int main() {
	int size = 5;
	int* vector = new int[size];
	
	random_init(vector, size, 0, 9);
	string msg_min = is_there_local_min(vector, size) 
		? "Yes, there is local min" : "No, there is no local min";
	string msg_max = is_there_local_max(vector, size) 
		? "Yes, there is local max" : "No, there is no local max";

	cout << "Vector:\n" << output(vector, size) << endl;
	cout << msg_min << endl;
	cout << msg_max << endl;

	return 0;
}