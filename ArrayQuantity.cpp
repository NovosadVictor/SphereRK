#include <iostream>
#include <vector>

int main()
{
	int n1, n2,k=0,i=0,j=0;
	std::vector<int> v1;
	std::vector<int> v2;
	std::cin >> n1;
	std::cin >> n2;
	for (int i = 0; i < n1; ++i)
	{
		int X;
		std::cin >> X;
		v1.push_back(X);
	}
	for (int j = 0; j < n2; ++j)
	{
		int X;
		std::cin >> X;
		push_back(X);
	}
	while (i < n1 && j < n2)
	{
		if (v1[i] < v2[j])
			++i;
		else
			if (v2[j] < v1[i])
				++j;
			else
			{
				++i;
				++j;
				++k;
			}
	}
	std::cout << k << std::endl;
	//system("pause");
	return 0;
}