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
	vector <T> a;
	T min;
	T max;
	int size;
public:
	MinMaxHeap( vector <T> c , int siz)
	{
		a = c;
		size = siz;
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

protected:
	vector <T> minHeap( vector <T> x )
	{
		
	}
	vector <T> maxHeap(vector <T> x)
	{

	}
};

