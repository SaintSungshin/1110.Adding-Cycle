#include <iostream>
using namespace std;

int main() {

	const int MAX = 8;
	int notes[MAX];
	for (int i = 0; i < MAX; i++)
		cin >> notes[i];

	int asc = 0;
	int des = 0;
	for (int j = 0; j < (MAX - 1); j++) {
		if (notes[j] < notes[j + 1])
			asc++;
		else
			des++;
	}

	if (asc == MAX - 1)
		cout << "ascending" << endl;
	else if (des == MAX - 1)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;

	system("pause");
	return 0;
}