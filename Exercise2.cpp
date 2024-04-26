#include <iostream>
#include <vector> //vector ������� �߰�

using namespace std;

void printVec(vector<int> iVec)
{
	for (int k = 0; k < iVec.size(); k++)
	{
		cout << iVec[k] << " ";
	}
}

int main()
{
	int num1, num2;

	cout << "�� ���� ������ �Է�? ";
	cin >> num1;

	cout << num1 << "���� ������ �Է��ϼ���." << endl << endl;
	
	//1.���� ����� �� ���� ���� �� ũ�� �Ҵ�
	vector<int> iVec(num1);

	for (int i = 0; i < num1; i++)
	{
		cout << i << "�� ° ����: ";
		cin >> num2;

		//2.n���� ������ �Է� �޾� ���Ϳ� �߰�
		iVec[i] = num2;
	}

	//3.������ ũ�� ���
	cout << endl << "������ ũ���..\n" << iVec.size();
	
	//4.������ ��� ���� ���
	cout << endl << "������ ��� ���Ҵ�..\n";
	int max = 0;

	for (int j = 0; j < iVec.size(); j++)
	{
		cout << iVec[j] << " ";

		//���� ū �� ���
		if (max <= iVec[j])
		{
			max = iVec[j];
		}

		iVec[j] = iVec[j] * 2;
	}

	//5.���� ū ���� ã�� ���
	cout << endl << "���� ū ����..\n" << max << endl;
	 
	//6.������ ��� ���Ҹ� �ι��
	cout << "��� ���Ҹ� �ι��..\n";
	printVec(iVec);

	//7.�ε����� �Է¹޾� �ش� �ε����� �ִ� ���� ����
	int index1 = 0;

	do {
		if (index1 >= iVec.size())
		{
			cout << "** �ε����� ���� ũ�⸦ �Ѿ **" 
				<< endl << "[���Է�]";
		}

		cout << endl << "���Ҹ� ������ �ε��� �Է�..\n";
		cin >> index1;
	} while (index1 >= iVec.size());

	iVec.erase(iVec.begin() + index1);
	printVec(iVec);

	//8.�ε����� �Է¹޾� �ش� �ε����� ���ο� ���� ����
	int index2 = 0, newValue;

	do {
		if (index2 >= iVec.size())
		{
			cout << "** �ε����� ���� ũ�⸦ �Ѿ **"
				<< endl << "[���Է�]";
		}

		cout << endl << "���Ҹ� ������ �ε��� �Է�..\n";
		cin >> index2;
	} while (index2 >= iVec.size());

	cout << "���ο� ���� �� �Է�..\n";
	cin >> newValue;

	iVec.insert(iVec.begin() + index2, newValue);
	printVec(iVec);

	cout << endl;

	return 0;
}