#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


template <class T>
class Predicate
{
public:
	virtual bool toDelete(T a)
	{
		return true;
	}
};

template <class T>
class MinMaxHeap
{
	vector <T> heap;
	vector <T> heap;
	vector <T> heap;
	int size;
public:
	T left( int i)
	{
		return (heap(2*(i-1-(int)log2(i))));
	}
	T right(int i)
	{
		return (heap(2*(i-1-(int)log2(i))+1));
	}
	void order(int i)
	{

	}
	MinMaxHeap()
	{
		size = 0;
	}
	void insert(T elem)
	{
		a.push_back(elem);

	}
	void deleteMin()
	{

	}
	T getMin()
	{

	}
	T getMax()
	{

	}
	void deleteElems(Predicate <T> predObject)
	{
		a.erase(a.begin(),a.begin()+a.size());	
	}
};

