#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	clock_t start, end;
	double result;

	//���� �ð�
	start = clock();

	//�����ų �ڵ�
	cout << "���� �ڵ�" << endl;
	//

	end = clock();
	result = (double)(end - start);

	cout << "���� �ð�: " << result << "ms\n";
	cout << "���� �ð�: " << ((result) / CLOCKS_PER_SEC) << "sec\n";
}