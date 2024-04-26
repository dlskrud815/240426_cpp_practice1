#include <iostream>
using namespace std;

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

		if (x == -1 && y == -1) {
			cout << endl << "종료합니다." << endl;
			return 0;
		}
		else if (x <= 0 || y <= 0)
		{
			cout << endl << "0이나 음수는 입력할 수 없습니다." << endl;
		}
		else
		{
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
					cout << xyArr[j][k] << " ";
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
	}
}