#include<iostream>
using namespace std;
/*
0<=n<=99인 정수를 입력
주어진 수가 10보다 작음 -> 앞에 0을 붙여 두자리 수로 만들고 각자리의 숫자를 더한다
그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다.
*/
int findRightNumber(int number)
{
	return number % 10;
}

int addNumber(int number)
{
	return number / 10 + number % 10;
}

int main()
{
	cout << "Enter the number : ";
	int number;
	cin >> number;

	int count = 0;
	int a = -1;

	
		int rightNumber = findRightNumber(number);
		int sum = addNumber(number);

		int leftNumber = sum % 10;

		cout << "The number is " << rightNumber * 10 + leftNumber << endl;
		a = rightNumber * 10 + leftNumber;
		count++;
		
		while (number != a)
		{
			int rightNumber = findRightNumber(a);
			int sum = addNumber(a);

			int leftNumber = sum % 10;

			cout << "The number is " << rightNumber * 10 + leftNumber << endl;
			a = rightNumber * 10 + leftNumber;
			count++;
		}


	cout << "The cycle count is " << count << endl;

	return 0;
}