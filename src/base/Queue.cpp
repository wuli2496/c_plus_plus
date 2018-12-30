/*
 * Queue.cpp
 *
 *  Created on: 2018Äê4ÔÂ15ÈÕ
 *      Author: John
 */
#include <cstdio>
#include "Queue.h"
#include <cstdlib>

using namespace std;

Queue::Queue():
		qsize(0)
{
	// TODO Auto-generated constructor stub

}

Queue::Queue(int qs):
		qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue() {
	// TODO Auto-generated destructor stub
	Node *tmp;

	while (front != NULL)
	{
		tmp = front;
		front = front->next;
		delete tmp;
	}
}


bool Queue::enQueue(const Item &item)
{
	if (isFull()) return false;

	Node *add = new Node;
	if (add == NULL)
	{
		return false;
	}

	add->item = item;
	add->next = NULL;

	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;

	items++;

	return true;
}

bool Queue::deQueue(Item &item)
{
	if (front == NULL) return false;

	item = front->item;
	Node *tmp = front;

	front = front->next;
	delete tmp;

	items--;
	if (items == 0)
	{
		rear = NULL;
	}

	return true;
}

void Customer::set(long when)
{
	processTime = std::rand() % 3 + 1;
	arrive = when;
}
