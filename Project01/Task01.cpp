bool is_there_local_min(int* vector, int length) {
	int flag = false;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) < * (vector + i + 1) && *(vector + i) < * (vector + i - 1)) {
			flag = true;
			break;
		}
	}

	return flag;
}

bool is_there_local_max(int* vector, int length) {
	int flag = false;

	for (int i = 0; i < length; i++)
	{
		if (*(vector + i) > * (vector + i + 1) && *(vector + i) > * (vector + i - 1)) {
			flag = true;
			break;
		}
	}

	return flag;
}