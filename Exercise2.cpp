#include <iostream>
#include <vector> //vector ������� �߰�

using namespace std;

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
	cout << endl << "������ ũ���..\t\t" << iVec.size();
	
	//4.������ ��� ���� ���
	cout << endl << "������ ��� ���Ҵ�..\t";
	int max = 0;

	for (int j = 0; j < num1; j++)
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
	cout << endl << "���� ū ����..\t\t" << max << endl;
	 
	//6.������ ��� ���Ҹ� �ι��
	cout << "��� ���Ҹ� �ι��..\t";
	for (int k = 0; k < iVec.size(); k++)
	{
		cout << iVec[k] << " ";
	}

	//345 ��� �� 7 ����� ��� 8 ����� ���
	//7.�ε����� �Է¹޾� �ش� �ε����� �ִ� ���� ����
	int index1;
	cout << endl << "���Ҹ� ������ �ε��� �Է�..\t";
	cin >> index1;

	iVec.erase(iVec.begin() + index1);

	for (int k = 0; k < iVec.size(); k++)
	{
		cout << iVec[k] << " ";

	}
	//8.�ε����� �Է¹޾� �ش� �ε����� ���ο� ���� ����
	int index2, newValue;
	cout << endl << "���Ҹ� ������ �ε��� �Է�..\t";
	cin >> index2;
	cout << "���ο� ���� �� �Է�..\t";
	cin >> newValue;

	iVec.insert(iVec.begin() + index2, newValue);

	for (int k = 0; k < iVec.size(); k++)
	{
		cout << iVec[k] << " ";
	}

	cout << endl;

	return 0;
}