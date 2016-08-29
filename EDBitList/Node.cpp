#include "Node.h"

template <class T>
Node<T>::Node(T data) : data(data), next(nullptr), previous(nullptr)
{
}

template <class T>
T Node<T>::getData() const
{
	return data;
}

template <class T>
void Node<T>::setData(T data)
{
	this->data = data;
}

template <class T>
Node<T>* Node<T>::getNext() const
{
	return next;
}

template <class T>
void Node<T>::setNext(Node<T>* next)
{
	this->next = next;
}

template <class T>
Node<T>* Node<T>::getPrevious() const
{
	return previous;
}

template <class T>
void Node<T>::setPrevious(Node<T>* previous)
{
	this->previous = previous;
}

template class Node<bool>;
