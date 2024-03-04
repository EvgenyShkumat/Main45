#include <iostream>
#include <string>
using namespace std;

string find_all_local_min(int* vector, int length) {
	string msg = "";

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) < *(vector + i + 1) && *(vector + i) < *(vector + i - 1)) {
			msg += to_string(*(vector + i)) + " ";
		}
	}

	return msg;
}

string find_all_local_max(int* vector, int length) {
	string msg = "";

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) > *(vector + i + 1) && *(vector + i) > *(vector + i - 1)) {
			msg += to_string(*(vector + i)) + " ";
		}
	}

	return msg;
}