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
	MinMaxHeap()
	{
		size = 0;
	}
	void max_heapify(vector <T> x )
	{
		//write code for making it into max_heap
	} 
	void min_heapify(vector <T> x)
	{
		//write code for turing it into min_heap
	}
	void insert(T elem)
	{
		a.push_back(elem);
		return;
	}
	void deleteMin()
	{
		a.min_heapify();
		a.erase(a.begin());
		return;
	}

	void deleteMax()
	{
		a.max_heapify();
		a.erase(a.begin());
		return;
	}

	T getMin()
	{
		a.min_heapify();
		return a[0];
	}
	T getMax()
	{
		a.max_heapify();
		return a[0];
	}
	void deleteElems(Predicate <T> predObject)
	{
		a.erase(a.begin(),a.begin()+a.size());	
	}
};

