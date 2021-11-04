#pragma once
#include<list>

using namespace std;

template <typename T>
struct Node
{
	int priority;
	T data;
	Node(int pr, T d): priority(pr), data(d){}
};

template <typename T>
class PriorityQueue
{
private:
	list<Node<T>> queu;
public:
	void push(int prior, T data)
	{
		Node<T> elem(prior, data);
		typename list<Node<T>>::iterator it;
		if (queu.size() == 0)
		{
			
			queu.push_back(elem);
		}
		else
		{
			it = queu.begin();
			while (it != queu.end() && prior <= it->priority)
			{
				it++;
			}
			queu.insert(it, elem);
		}
	}
	int size()
	{
		return queu.size();
	}
	void pop()
	{
		queu.pop_front();
	}
	bool isEmpty()
	{
		return queu.size() == 0;
	}
	T front()
	{
		return queu.front().data;
	}
};