#include <iostream>
#include <vector> //vector 헤더파일 추가

using namespace std;

void printVec(vector<int> iVec);
int indexErr(vector<int> iVec, int index, string str);

int main()
{
	int num1, num2;

	cout << "** 벡터 정수 저장 프로그램 **" << endl
		<< "몇 개의 정수를 입력? ";
	cin >> num1;

	cout << num1 << "개의 정수를 입력하세요." << endl << endl;
	
	//1.정수 저장용 빈 벡터 생성 후 크기 할당
	vector<int> iVec(num1);

	for (int i = 0; i < num1; i++)
	{
		cout << i+1 << "번 째 정수: ";
		cin >> num2;

		//2.n개의 정수를 입력 받아 벡터에 추가
		iVec[i] = num2;
	}


	//3.벡터의 크기 출력
	cout << endl << "벡터의 크기는..\n" << iVec.size() << endl;
	

	//4.벡터의 모든 원소 출력
	cout << endl << "벡터의 모든 원소는..\n";
	int max = 0;

	for (int j = 0; j < iVec.size(); j++)
	{
		cout << iVec[j] << " ";

		//가장 큰 값 계산
		if (max <= iVec[j])
		{
			max = iVec[j];
		}

		iVec[j] = iVec[j] * 2;
	}
	cout << endl;


	//5.가장 큰 값을 찾아 출력
	cout << endl << "가장 큰 값은..\n" << max << endl;
	 

	//6.벡터의 모든 원소를 두배로
	cout << endl << "모든 원소를 두배로..\n";
	printVec(iVec);


	//7.인덱스를 입력받아 해당 인덱스에 있는 원소 제거
	int index1 = 0;
	string str1 = "원소를 제거할 인덱스 입력..\n";
	index1 = indexErr(iVec, index1, str1);

	iVec.erase(iVec.begin() + index1);
	printVec(iVec);


	//8.인덱스를 입력받아 해당 인덱스에 새로운 원소 삽입
	int index2 = 0, newValue;
	string str2 = "원소를 삽입할 인덱스 입력..\n";

	index2 = indexErr(iVec, index2, str2);

	cout << endl << "새로운 원소 값 입력..\n";
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
			cout << endl << "** 인덱스가 벡터 크기를 넘어감 **"
				<< endl << endl << "[재입력]";
		}

		cout << endl << str;
		cin >> index;
	} while (index >= iVec.size());

	return index;
}