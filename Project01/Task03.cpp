int count_all_local_min(int* vector, int length) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) < *(vector + i + 1) && *(vector + i) < *(vector + i - 1)) {
			count++;
		}
	}

	return count;
}

int count_all_local_max(int* vector, int length) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) > * (vector + i + 1) && *(vector + i) > * (vector + i - 1)) {
			count++;
		}
	}

	return count;
}