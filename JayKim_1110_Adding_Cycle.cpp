#include<iostream>
using namespace std;

int cycle(int n) // ����Ŭ �� �ֱ⸦ ������ �Լ�
{
	int result;
	result = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;

	return result;
}

int main() 
{
	int userNum;
	int count = 0;
	cin >> userNum;

	cycle(userNum);
		count++;

	do {
		cycle(userNum);
		count++;
	}
	while()

	/*
	do {
		if 
		result = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;
		count++;
		if (result == n)
		break;
	} while (n >= 0 && n <= 99);
	*/



	cout << count;

	system("pause");
	return 0;
}
