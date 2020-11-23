

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter your number: ";

	double num2;
	double sum;
	int chose;
	cin >> sum;


	start:

    cout << "MENU\n 0 - exit \n 1 - addition \n 2 - subtraction \n 3 - multiplication \n 4 - division \n Your choice?: ";

    
    cin >> chose;

	switch (chose)
	{
	case 0:
		goto end;
		break;

	case 1:
		cout << sum << " + :";
		cin >> num2;
		sum = sum + num2;
		goto start;
		break;

	case 2:
		cout << sum << " - :";
		cin >> num2;
		sum = sum - num2;
		goto start;
		break;
		
	case 3:
		cout << sum << " * :";
		cin >> num2;
		sum = sum * num2;
		goto start;
		break;

	case 4:
		cout << sum << " / :";
		cin >> num2;
		if (num2 == 0)
		{
			cout << "error";
			goto start;
		}
		sum = sum / num2;
		goto start;
		break;

	default:
		cout << "error";
		break;
	}

	end:

	cout << "result = " << sum;










	return 0;
}

