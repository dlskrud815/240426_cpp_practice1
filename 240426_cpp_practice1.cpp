#include <iostream>
using namespace std;

// xyArr 초기화 안 함 오류남 추후 수정

int main()
{
	int x, y;

	cout << "** 2차원 동적 배열 **" << endl << "( x,y에 -1 입력 시 종료)" << endl;

	while (1)
	{
		cout << endl << "x를 입력하세요: ";
		cin >> x;
		cout << "y를 입력하세요: ";
		cin >> y;

		int type;
		int** xyArr; //2차원 동적 배열 변수 xyArr 

		if (x == -1 && y == -1) {
			type = 0;
		}
		else if (x <= 0 || y <= 0)
		{
			type = 1;
		}
		else
		{
			type = 2;

			//2차원 동적 배열 xyArr 선언
			xyArr = new int* [x];

			for (int i = 0; i < x; i++)
			{
				xyArr[i] = new int[y];
			}

			//arr[0][0] ~ arr[x][y] 순서대로 1부터 x*y 저장
			int num = 1;

			for (int j = 0; j < x; j++)
			{
				for (int k = 0; k < y; k++)
				{
					xyArr[j][k] = num;
					num++;
				}
			}
		}


		switch (type)
		{
		case 0:
			cout << endl << "종료합니다." << endl;

			return 0;

		case 1:
			cout << endl << "x와 y 모두에 양수를 입력해주세요." << endl;

			break;

		case 2:
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

			break;
		}
	}
}