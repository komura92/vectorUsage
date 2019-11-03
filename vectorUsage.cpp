#include <iostream>
#include <vector>
#include <algorithm>

bool increasingSort(const int &a, const int &b);
bool decreasingSort(const int &a, const int &b);
void display(std::vector<int> &s);

int main()
{

	std::vector<int> s;
	s.push_back(3);
	s.push_back(6);
	s.push_back(1);
	s.push_back(8);

	display(s);
	std::cout << std::endl;

	std::sort(s.begin(), s.end(), decreasingSort);

	display(s);

	system("pause");
	return 0;
}

bool increasingSort(const int &a, const int &b)
{
	if (a < b)
		return true;
	return false;
}

bool decreasingSort(const int &a, const int &b)
{
	if (a >= b)
		return true;
	return false;
}

void display(std::vector<int> &s)
{
	for (std::vector<int>::iterator i = s.begin(); i != s.end(); i++)
		std::cout << *i << std::endl;
}