#include <iostream>
using namespace std;

int main() {

	srand((unsigned)time(NULL));

	while (true)
	{
		int num1 = rand() % 10 + 1;
		int num2 = rand() % 10 + 1;

		int num3 = num1 + num2;

		int num4;
		cout << num1 << " + " << num2 << " = " << endl;
		cin >> num4;

		if (num4 == num3)
		{
			cout << "回答正确！" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "回答错误！" << endl;
			system("pause");
			system("cls");
		}
	}

	system("pause");
	return 0;
}
