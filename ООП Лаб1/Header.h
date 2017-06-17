#pragma once
#include <iostream>
using namespace std;
class List
{
	class Elem
	{
	public:
		int val;
		Elem *next;
		Elem();
		Elem(int);
		Elem(const Elem&);
		~Elem();
	};
	Elem *head;
	Elem *end;
public:
	List();
	~List();
	void add(int);//добавление в конец списка
	bool remove(int);//удаление по ключу
	List::Elem* find(int);//поиск узла по ключу
	void show();//показать список в прямом направлении
};

List::List()
{
	head = NULL;
	end = NULL;
}

List::~List()
{
	Elem* temp = head;
	while (head != NULL)
	{
		head = head->next;
		delete temp;
	}
}

void List::add(int element)
{
	Elem* pv = new Elem(element);
	if (head == 0)
		head = end = pv;
	else if (head != 0)
	{
		end->next = pv;
		end = pv;
	}
}

bool List::remove(int key)
{
	if (Elem *k = find(key))
	{
		if (k == head)
		{
			head = head->next;
		}
		else
		{
			Elem *cure = head;
			while (cure->next != k)
				cure = cure->next;
			cure->next = k->next;
			if (cure->next == NULL)
				end = cure;
	    }
		delete k;
		return true;
	}
	return false;
}

List::Elem* List::find(int val)
{
	Elem *pv = head;
	while (pv!=NULL)
	{
		if (pv->val == val)
			break;
		pv = pv->next;
	}
	return pv;
}

void List::show()
{
	Elem *pv = head;
	cout << "list:" << endl;
	while (pv)
	{
		cout << pv->val << " ";
		pv = pv->next;
	}
	cout << endl;
}

List::Elem::Elem()
{
	val = NULL;
	next = NULL;
}

List::Elem::Elem(int element)
{
	val = element;
	next = NULL;
}

List::Elem::Elem(const Elem &)
{
}

List::Elem::~Elem()
{
}

