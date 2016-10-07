#include <iostream>
#include <cmath>

int main()
{
	long long N;
	long long count = 0;
	std::cin >> N;
	for (long long i = 0; i*i < N; ++i)
	{
		if (sqrt(N - i*i) - (int)sqrt(N - i*i) == 0)
			count += (int)sqrt(N - i*i);
		else
			count += (int)sqrt(N - i*i) + 1;
	}
	printf("%lld\n", count);
	//system("pause");
	return 0;
}