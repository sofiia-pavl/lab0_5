#include <iostream>

using namespace std;

int f(int a, int level, int& depth) 
{
	if (level > depth)        
		depth = level; 
	if (level < 12)
	f(a, level + 1, depth);
	return depth;
}

int Fib(int i)
{
	if (i < 1) 
		return 1;
	if (i == 1) 
		return 1;
	return Fib(i - 1) + Fib(i - 2);
}

int main()
{
	int a = 0;
	int depth = 0;                           
	cout << "depth = " << f(a, 1, depth) << endl;

	int i = 0;


	while (i < 13)
	{
		
		cout << "S1 " << Fib(i) << endl;
		i++;
	}
	return 0;
}