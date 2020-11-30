#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Uoc le cua n la:" << " ";
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
		{
			if (i % 2 == 1)
			{
				cout << i << ' ';
			}
		}
	return 0;
}