#include<iostream>
#include<string>
using namespace std;
int main() {
	int n1, n2;
	string check;
	cout << "**********************Simple Caclulator*********************" << endl;
	do {
		int ch;
		cout << "Enter the First number:" << endl;
		cin >> n1;
		cout << "Enter the Second number:" << endl;
		cin >> n2;
		cout << "Which operation do you want to perform" << endl;
		cout << "For Addition(+)*********Press 1" << endl;
		cout << "For Subtraction(-)******Press 2" << endl;
		cout << "For Multiplication(*)***Press 3" << endl;
		cout << "For Division(/)*********Press 4" << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			int sum = n1 + n2;
			cout << n1 << " + " << n2 << " is " << sum << endl;
			break;
		}
		case 2: {
			int dif = n1 - n2;
			cout << n1 << " - " << n2 << " is " << dif << endl;
			break;
		}
		case 3: {
			int pr = n1 * n2;
			cout << n1 << " * " << n2 << " is " << pr << endl;
			break;
		}
		case 4: {
			if (n2 == 0) {
				cout << "Error Cannot Divide by zero" << endl;
				break;
			}
			else {
				float div = (float)n1 / n2;
				cout << n1 << " / " << n2 << " is " << div << endl;
				break;
			}
		}
		default: {
			cout << "Invalid choice,Please enter between 1-4"<<endl;
		}
		}
		cout << "Do you want to do calculation again(yes / no)" << endl;
		cin >> check;
	} while (check == "yes"||"Yes");
	return 0;
}