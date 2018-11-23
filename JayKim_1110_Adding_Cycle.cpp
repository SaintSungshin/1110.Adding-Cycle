#include<iostream>
using namespace std;

int cycle(int n) // 사이클 한 주기를 돌리는 함수
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

	int a = cycle(userNum);
		count++;

		while (a != userNum) 
		{
			int b = cycle(a);
			count++;
			a = b;
		}

	cout << count;

	system("pause");
	return 0;
}
