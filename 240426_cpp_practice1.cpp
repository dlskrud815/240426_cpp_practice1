#include <iostream>
#include <string>
using namespace std;

//입력자료형 판단 추후 수정
// 
//함수 선언
int InputCheck();

int main()
{
	/*
	// 1 글자만 판단
	string name = "nia*258";

	for (int i = 0; i < name.length(); i++)
	{
		cout << "name:\t" << name[i] << endl;
		cout << "isdigit:\t" << isdigit(name[i]) << endl;
		cout << "isalhpa:\t" << isalpha(name[i]) << endl;

		if (isdigit(name[i]) != 0) //숫자
		{

		}
		if (isalpha(name[i]) == 2) //문자
		{

		}
	}
	*/


	///*
	string input_x, input_y;

	cout << "** 2차원 동적 배열 **" << endl
		<< "두 개의 자연수를 입력해주세요" << endl
		<< "( x,y에 -1 입력 시 종료 )" << endl;

	while (1)
	{
		cout << endl << "x를 입력하세요: ";
		cin >> input_x;
		cout << "y를 입력하세요: ";
		cin >> input_y;

		if (input_x == "-1" && input_y == "-1") {
			cout << endl << "종료합니다." << endl;
			return 0;
		}
		else if (stoi(input_x) <= 0 || stoi(input_y) <= 0)
		{
			cout << endl << "x와 y 모두에 양수를 입력해주세요." << endl;
		}
		else if (stoi(input_x) > 0 && stoi(input_y) > 0)
		{
			int x = stoi(input_x);
			int y = stoi(input_y);

			//2차원 동적 배열 xyArr 선언
			int** xyArr = new int* [x];
			int num = 1;

			for (int i = 0; i < x; i++)
			{
				xyArr[i] = new int[y];
			}

			//arr[0][0] ~ arr[x][y] 순서대로 1부터 x*y 저장
			for (int j = 0; j < x; j++)
			{
				for (int k = 0; k < y; k++)
				{
					xyArr[j][k] = num;
					num++;
				}
			}

			//arr[0][0] ~ arr[x][y] 출력
			for (int j = 0; j < x; j++)
			{
				cout << endl;

				for (int k = 0; k < y; k++)
				{
					cout << xyArr[j][k] << "\t";
				}
			}

			cout << endl;

			//메모리 해제
			for (int i = 0; i < x; i++)
			{
				delete[] xyArr[i];
			}
			delete[] xyArr;
		}
		else
		{
			cout << "자연수를 입력해주세요." << endl;
		}
	}
	//*/

}

/*
//함수 본문
int InputCheck()
{
	
}
*/
