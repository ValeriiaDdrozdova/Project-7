// Project7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//project program done by: VALERIIA DROZDOVA 



#include <iostream>
#include <cmath>



using namespace std;





int choice;

long long bignumStr1, bignumStr2, bignumResult;
long double BignumStr1, BignumStr2, BignumResult;


int main()
{

	cout << " WELCOME TO OUR CALCULATOR PROJECT\n\n";

	while (true) {

		cout << "1. Addition\n" <<

			"2. Subtraction\n" <<

			"3. Multiplication\n" <<

			"4. Division\n" <<

			"5. Exit\n\n" <<

			"Choose an Operation:";

		cin >> choice;

		if (choice == 5)
			break;





		if (choice == 1)
		{
			cout << "Please enter the first number: \n";

			cin >> bignumStr1;

			cout << "Please enter the second number: \n";

			cin >> bignumStr2;

			bignumResult = bignumStr1 + bignumStr2;

			cout << "\n The result of your calculation is:  \n" << bignumResult << endl;
		}
		else
		{
			if (choice == 2)
			{
				cout << "Please enter the first number: \n";

				cin >> bignumStr1;

				cout << "Please enter the second number: \n";

				cin >> bignumStr2;

				bignumResult = bignumStr1 - bignumStr2;

				cout << "\n The result of your calculation is:  \n" << bignumResult << endl;
			}
			else
			{
				if (choice == 3)
				{
					cout << "Please enter the first number: \n";

					cin >> bignumStr1;

					cout << "Please enter the second number: \n";

					cin >> bignumStr2;

					bignumResult = bignumStr1 * bignumStr2;

					cout << "\n The result of your calculation is:  \n" << bignumResult << endl;
				}
				else
				{
					if (choice == 4)

						cout << "Please enter the first number: \n";

					cin >> BignumStr1;

					cout << "Please enter the second number: \n";

					cin >> BignumStr2;

					BignumResult = BignumStr1 / BignumStr2;

					cout << "\n The result of your calculation is:  \n" << BignumResult << endl;

				}
			}
		}


	}



	cout << " Thank you and Good bye\n\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
