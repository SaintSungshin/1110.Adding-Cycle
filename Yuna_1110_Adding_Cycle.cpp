#include<iostream>
using namespace std;
/*
0<=n<=99�� ������ �Է�
�־��� ���� 10���� ���� -> �տ� 0�� �ٿ� ���ڸ� ���� ����� ���ڸ��� ���ڸ� ���Ѵ�
�� ����, �־��� ���� ���� ������ �ڸ� ���� �տ��� ���� ���� ���� ������ �ڸ� ���� �̾� ���̸� ���ο� ���� ���� �� �ִ�.
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