#include<iostream>
using namespace std;
int main()
{
	float num1, num2;
	char oper;
	cout << "_____NEW MATHEMATICAL OPERATION____" << endl;
	cout << "                                                            " << endl;
	cout << "                                                            " << endl;
	cout << "enter first num" << endl;
	cin >> num1;
	cout << "enter operator (+,-,*,/) " << endl;
	cin >> oper;
	cout << "enter second num" << endl;
	cin >> num2;
	switch (oper)
	{
	case'+': cout << num1 << "+" << num2 << "= " << num1 + num2 << endl;
		break;
		
	case'-': cout << num1 << "-" << num2 << "= " << num1 - num2 << endl;
		break;

	case'*': cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
		break;

	case'/': cout << num1 << "/" << num2 << "= " << num1 / num2 << endl;
		break;
	default:
		cout << "you should choose operator from these (+,-,*,/) ^__^ " << endl;

	}
	cout << "*****************************************************" << endl;
	cout << " program finished !" << endl;
	int option;
	cout << "press 1 .CONTAINU" << endl;
	cout << "press 2.EXIT" << endl;
	cin >> option;
	if (option == 1) 
	{
		float num1, num2;
		char oper;
		cout << "_____NEW MATHEMATICAL OPERATION____" << endl;
		cout << "                                                            " << endl;
		cout << "                                                            " << endl;
		cout << "enter first num" << endl;
		cin >> num1;
		cout << "enter operator (+,-,*,/) " << endl;
		cin >> oper;
		cout << "enter second num" << endl;
		cin >> num2;
		switch (oper)
		{
		case'+': cout << num1 << "+" << num2 << "= " << num1 + num2 << endl;
			break;

		case'-': cout << num1 << "-" << num2 << "= " << num1 - num2 << endl;
			break;

		case'*': cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
			break;

		case'/': cout << num1 << "/" << num2 << "= " << num1 / num2 << endl;
			break;
		default:
			cout << "you should choose operator from these (+,-,*,/) ^__^ " << endl;

		}
		
		cout << " program finished !" << endl;
		cout << "*****************************************************" << endl;
		int option;
		cout << "press 1 --> CONTAINU" << endl;
		cout << "press 2 --> EXIT" << endl;
		cin >> option;

	}
	else
		cout << "thank you" << endl;















	return 0;
}