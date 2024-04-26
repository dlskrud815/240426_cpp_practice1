#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "** 2���� ���� �迭 **" << endl << "( x,y�� -1 �Է� �� ����)" << endl;

	while (1)
	{
		cout << endl << "x�� �Է��ϼ���: ";
		cin >> x;
		cout << "y�� �Է��ϼ���: ";
		cin >> y;

		if (x == -1 && y == -1) {
			cout << endl << "�����մϴ�." << endl;
			return 0;
		}
		else if (x <= 0 || y <= 0)
		{
			cout << endl << "0�̳� ������ �Է��� �� �����ϴ�." << endl;
		}
		else
		{
			//2���� ���� �迭 xyArr ����
			int** xyArr = new int* [x];
			int num = 1;

			for (int i = 0; i < x; i++)
			{
				xyArr[i] = new int[y];
			}

			//arr[0][0] ~ arr[x][y] ������� 1���� x*y ����
			for (int j = 0; j < x; j++)
			{
				for (int k = 0; k < y; k++)
				{
					xyArr[j][k] = num;
					num++;
				}
			}

			//arr[0][0] ~ arr[x][y] ���
			for (int j = 0; j < x; j++)
			{
				cout << endl;

				for (int k = 0; k < y; k++)
				{
					cout << xyArr[j][k] << " ";
				}
			}

			cout << endl;

			//�޸� ����
			for (int i = 0; i < x; i++)
			{
				delete[] xyArr[i];
			}
			delete[] xyArr;
		}
	}
}