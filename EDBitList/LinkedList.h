#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <sstream>

template <class T>

class LinkedList
{
private:
	Node<T>* first;
	Node<T>* last;
	static Node<T>* getNewNode(T);
	int size;
public:
	LinkedList();
	~LinkedList();
	void add(T);
	void add(unsigned int, T);
	void addFirst(T);
	void addLast(T);
	void clear();
	bool contains(const T&);
	T get(unsigned int);
	T getFirst() const;
	T getLast() const;
	int getSize() const;
	int indexOf(const T&) const;
	bool isEmpty() const;
	Node<T>* listIterator(unsigned int);
	T pop();
	void push(T);
	void remove(unsigned int);
	void removeItem(const T&);
	void reverse();
	void set(unsigned int, T);
	void setFirst(T);
	void setLast(T);
	std::string toString() const;
};
#endif
