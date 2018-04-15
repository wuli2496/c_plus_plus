/*
 * Queue.h
 *
 *  Created on: 2018Äê4ÔÂ15ÈÕ
 *      Author: John
 */

#ifndef QUEUE_H_
#define QUEUE_H_

class Customer
{
public:
	Customer()
	{
		arrive = processTime = 0;
	}

	void set(long when);
	long when() const {return arrive;}
	int pTime() const {return processTime;}

private:
	long arrive;
	int processTime;
};

typedef Customer Item;

class Queue {
public:
	Queue();
	Queue(int qz = Q_SIZE);
	virtual ~Queue();

	bool isEmpty() const { return items == 0;}
	bool isFull()const {return items == qsize;}
	int queueCount() const {return items;}
	bool enQueue(const Item &item);
	bool deQueue(Item &item);

private:
	Queue(const Queue& q):
		front(NULL),
		rear(NULL),
		items(0),
		qsize(0){}
	Queue& operator=(const Queue &q) { return *this;}
private:
	enum {Q_SIZE = 10};
	struct Node
	{
		Item item;
		struct Node *next;
	};

	Node *front;
	Node *rear;
	int items;
	const int qsize;

};

#endif /* QUEUE_H_ */
