#include <iostream>
#include <vector> //vector ������� �߰�

using namespace std;

void printVec(vector<int> iVec);
int indexErr(vector<int> iVec, int index, string str);

int main()
{
	int num1, num2;

	cout << "** ���� ���� ���� ���α׷� **" << endl
		<< "�� ���� ������ �Է�? ";
	cin >> num1;

	cout << num1 << "���� ������ �Է��ϼ���." << endl << endl;
	
	//1.���� ����� �� ���� ���� �� ũ�� �Ҵ�
	vector<int> iVec(num1);

	for (int i = 0; i < num1; i++)
	{
		cout << i+1 << "�� ° ����: ";
		cin >> num2;

		//2.n���� ������ �Է� �޾� ���Ϳ� �߰�
		iVec[i] = num2;
	}


	//3.������ ũ�� ���
	cout << endl << "������ ũ���..\n" << iVec.size() << endl;
	

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
	cout << endl;


	//5.���� ū ���� ã�� ���
	cout << endl << "���� ū ����..\n" << max << endl;
	 

	//6.������ ��� ���Ҹ� �ι��
	cout << endl << "��� ���Ҹ� �ι��..\n";
	printVec(iVec);


	//7.�ε����� �Է¹޾� �ش� �ε����� �ִ� ���� ����
	int index1 = 0;
	string str1 = "���Ҹ� ������ �ε��� �Է�..\n";
	index1 = indexErr(iVec, index1, str1);

	iVec.erase(iVec.begin() + index1);
	printVec(iVec);


	//8.�ε����� �Է¹޾� �ش� �ε����� ���ο� ���� ����
	int index2 = 0, newValue;
	string str2 = "���Ҹ� ������ �ε��� �Է�..\n";

	index2 = indexErr(iVec, index2, str2);

	cout << endl << "���ο� ���� �� �Է�..\n";
	cin >> newValue;

	iVec.insert(iVec.begin() + index2, newValue);
	printVec(iVec);

	cout << endl;

	return 0;
}

void printVec(vector<int> iVec)
{
	for (int k = 0; k < iVec.size(); k++)
	{
		cout << iVec[k] << " ";
	}
	cout << endl;
}

int indexErr(vector<int> iVec, int index, string str)
{
	do {
		if (index >= iVec.size())
		{
			cout << endl << "** �ε����� ���� ũ�⸦ �Ѿ **"
				<< endl << endl << "[���Է�]";
		}

		cout << endl << str;
		cin >> index;
	} while (index >= iVec.size());

	return index;
}