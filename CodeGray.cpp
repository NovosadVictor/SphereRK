#include <iostream>
#include <bitset>
#include <cmath>


int main()
{
	int N ;
	std::cin >> N;
	int codeGray;
	for (int i = 0; i < pow(2,N);i++)
	{
		codeGray = i ^ (i >> 1);
		for (int i = N - 1; i >= 0; --i)
			printf("%d", (codeGray >> i) & 1);
		std::cout << std::endl;
	}

	//system("pause");
	return 0;
}