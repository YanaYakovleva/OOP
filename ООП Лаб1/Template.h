//#pragma once
//#include <iostream>
//
//template <class T>
//class List
//{
//	class Elem
//	{
//	public:
//		T val;
//		Elem *next;
//		Elem();
//		Elem(T);
//		Elem(const Elem&);
//		void show();
//	};
//	Elem *head;
//	Elem *end;
//public:
//	List();
//	~List();
//	void add(T);//добавление в конец списка
//	bool remove(int);//удаление по ключу
//	Elem* insert(int, T);//вставка узла после узла с ключом инт
//	Elem* find(int);//поиск узла по ключу
//	void show();//показать список в прямом направлении
//
//
//};
//
//template<class T>
//inline List<T>::Elem::Elem()
//{
//	val = NULL;
//	next = NULL;
//}
//
//template<class T>
//inline List<T>::Elem::Elem(T element)
//{
//	val = element;
//	next = NULL;
//}
//
//template<class T>
//inline List<T>::List()
//{
//	head = NULL;
//	end = NULL;
//}
//
//template<class T>
//inline List<T>::~List()
//{
//	
//}
//
//template<class T>
//inline void List<T>::add(T element)
//{
//	Elem* pv = new Elem(element);
//	if (head == 0)
//		head = end = pv;
//	else if (head!=0)
//	{
//		end->next = pv;
//		end = pv;
//	}
//}
//
//template<class T>
//inline bool List<T>::remove(int key)
//{
//	if (List *k = find(key))
//	{
//		if (k == head)
//		{
//			head = head->next;
//		}
//		else if (k == end)
//		{
//			end->next = 0;
//		}
//		else
//		{
//			(k->next);
//		}
//	}
//}
//
////template<class T>
////Elem * List<T>::insert(int, T)
////{
////	return NULL;
////}
//
//template<class T>
//inline Elem* List<T>::find(int key)
//{
//	Elem *pv = head;
//	while (pv)
//	{
//		if (pv->val == val)
//			break;
//		pv = pv->next;
//	}
//	return pv;
//}
//
//template<class T>
//inline void List<T>::show()
//{
//	Elem *pv = head;
//	cout << "list:" << endl;
//	while (pv)
//	{
//		cout << pv->val << " ";
//		pv = pv->next;
//	}
//	cout << endl;
//}
