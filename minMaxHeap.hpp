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
	vector <T> min_heap;
	vector <T> max_heap;
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
		if(elem < min_heap[0])
		{
			min_heap.insert(min_heap.begin(),elem);
		}
		else
		{
			min_heap.push_back(elem);
			min_heap.min_heapify();
		}
		if(max_heap[0] < elem)
		{
			max_heap.insert(elem);
		}
		else
		{
		max_heap.push_back(elem);
		max_heap.max_heapify();			
		}
		return;
	}
	void deleteMin()
	{
		if(min_heap.size() != 0)
		{
			min_heap.erase(min_heap.begin());
			a = min_heap;
			max_heap = min_heap;
			max_heap.max_heapify();
		}
		return;
	}

	void deleteMax()
	{
		if(max_heap.size()!=0)
		{
			max_heap.erase(max_heap.begin());
			a = max_heap();
			min_heap = max_heap;
			min_heap.min_heapify();			
		}
		return;
	}

	T getMin()
	{
		return min_heap[0];
	}
	T getMax()
	{
		return max_heap[0];
	}
	void deleteElems(Predicate <T> predObject)
	{
		a.erase(a.begin(),a.begin()+a.size());	
	}
};

