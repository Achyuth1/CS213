#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class isTrue
{
public:
	bool operator()(int a,int b )
	{
		return a==b ;
	}
};

int main()
{
	int a,b;
	a = 1;
	b = 2;
	isTrue fn;
	cout << boolalpha << fn(a,b) << endl;
	return 0;
}