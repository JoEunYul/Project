#include<iostream>

using namespace std;

int main()
{
	//int Number = 1;
	//cout << " ���ڸ� �Է��� �ּ��� : ";
	//cin >> Number;

	//if (Number % 2 == 0)
	//{
	//	cout << "¦�� �Դϴ�." << endl;
	//}
	//else
	//{
	//	cout << "Ȧ�� �Դϴ�." << endl;
	//}

	int Score = 0;
	cout << " ������ �Է��� �ּ��� : ";
	cin >> Score;
	if (100 >= Score && Score >= 90)
	{
		cout << " A �Դϴ�. " << endl;
	}
	else if (90 > Score && Score >= 80)
	{
		cout << " B �Դϴ�. " << endl;
	}
	else if (80 > Score && Score >= 70)
	{
		cout << " C �Դϴ�. " << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << " D �Դϴ�. " << endl;
	}
	else 
	{
		cout << " F �Դϴ�. " << endl;
	}








	return 0;
		//¦�� ���� 2�� �������� �������� ����� �Ѵ�.
}

