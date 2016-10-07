#include <iostream>
#include <vector>

int main()
{
	int Max = 1;
	std::vector<int> v;
	while (true)
	{
		int X;
		std::cin >> X;
		if (X >= 0)
			v.push_back(X);
		else
			break;
	}
	int max = v[0];
	int imax = 0;
	for (int i = 0; i < v.size(); ++i)
		if (v[i] > max)
		{
			max = v[i];
			imax = i;
		}
    for (int j = 0; j < v.size(); ++j)
			if (abs((j - imax)) > 7 && (max * v[j]) > Max)
				Max = max * v[j];
	std::cout << Max << std::endl;
	//system("pause");
	return 0;
}