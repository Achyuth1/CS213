#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	vector <int> v;
	vector <int> z;
	v.push_back(1);
	v.push_back(2);
	z = v;
	z.push_back(3);
	v = z;
	v.erase(v.begin());
	cout << v[0]<<endl;
	return 0;
}