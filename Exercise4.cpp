#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	clock_t start, end;
	double result;

	//현재 시간
	start = clock();

	//수행시킬 코드
	cout << "수행 코드" << endl;
	//

	end = clock();
	result = (double)(end - start);

	cout << "수행 시간: " << result << "ms\n";
	cout << "수행 시간: " << ((result) / CLOCKS_PER_SEC) << "sec\n";
}