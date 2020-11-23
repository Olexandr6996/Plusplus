
#include <iostream>

using namespace std;

int main()
{
	int plussar[5] = { 50, 20, 10, 5, 1 };

	int sum;
	cout << "Enter numb";

	cin >> sum;

	for (int i = 0; i < 5; i++)
	{
		while (sum >= plussar[i])
		{

			sum = sum - plussar[i];

			cout << plussar[i] << ", ";

		}
	}
}

