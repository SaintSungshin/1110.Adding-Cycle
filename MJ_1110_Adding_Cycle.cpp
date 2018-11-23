#include <iostream>
using namespace std;

int add(int n) {
	int digit;
	digit = (n / 10) + (n % 10);
	n = 10 * (n % 10) + (digit % 10);
	return n;
}

int main() {

	int num;
	cout << "0-99 숫자를 입력하시오: ";
	cin >> num;

	if (num < 0 || num > 100)
		return 0;

	add(num);
	int count = 1;

	while (add(num) != num) {
		add(num);
		count++;
	}

	cout << count << endl;

	system("pause");
	return 0;
}