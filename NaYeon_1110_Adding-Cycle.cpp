#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int keynumber;
	cin >> keynumber;

	keynumber >= 0 && keynumber <= 99; 
	
		int count = 0;

	while (keynumber < 100) //26
	{
		count++;			//count++를 while 문 맨 아래에 해야 될거 같아~else 아래에~(유나)
		int num = keynumber;
		int newnumber;
		newnumber = (num % 10) + (num / 10); //2+6 = 8
		cout << newnumber << endl;

		int num2 = (newnumber % 10) + ((num % 10) * 10); //8+60
		cout << num2 << endl;
		if (num2 == keynumber)
			break;
		else
			continue;
	}

	cout <<"»çÀÌÅ¬ÀÇ È½¼ö´Â "<< count << endl;

	return 0;
}
