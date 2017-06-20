#pragma once
#include <iostream>
using namespace std;

template <class T> 
class List
{
	class Elem
	{
	public:
		T val;
		Elem *next;
		Elem();
		Elem(T);
		~Elem();
	};
	Elem *head;
	Elem *end;
public:
	List();
	~List();
	void add(T element);//добавление в конец списка
	bool remove(T key);//удаление по ключу
	Elem* find(T val);//поиск узла по ключу
	void show();//показать список в прямом направлении
};

template <class T>
List<T>::List()
{
	head = NULL;
	end = NULL;
}

template <class T> 
List<T>::~List()
{
	Elem* temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

template <class T> 
void List<T>::add(T element)
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

template <class T>
bool List<T>::remove(T key)
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

template <class T>
typename List<T>::Elem* List<T>::find(T val)
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

template <class T>
void List<T>::show()
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

template <class T>
List<T>::Elem::Elem()
{
	val = NULL;
	next = NULL;
}

template <class T>
List<T>::Elem::Elem(T element)
{
	val = element;
	next = NULL;
}

template <class T>
List<T>::Elem::~Elem()
{
}

