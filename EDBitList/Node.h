#pragma once
#ifndef NODE_H
#define NODE_H

template <class T>

class Node
{
private:
	T data;
	Node<T>* next;
	Node<T>* previous;
public:
	explicit Node(T);
	T getData() const;
	void setData(T);
	Node<T>* getNext() const;
	void setNext(Node<T>*);
	Node<T>* getPrevious() const;
	void setPrevious(Node<T>* previous);
};
#endif
