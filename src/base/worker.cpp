/*
 * worker.cpp
 *
 *  Created on: 2018Äê4ÔÂ29ÈÕ
 *      Author: John
 */
#include "worker.h"
#include <iostream>

using namespace std;

Worker::~Worker()
{

}

void Worker::Set()
{
	cout << "Enter worker's name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;

	while (cin.get() != '\n')
	{
		continue;
	}
}

void Worker::Show()const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

void Waiter::Set()
{
	Worker::Set();
	cout << "Enter waiter's panache rating: ";
	cin >> panache;

	while (cin.get() != '\n')
	{
		continue;
	}
}

void Waiter::Show() const
{
	cout << "Category watier" << endl;
	Worker::Show();
	cout << "Panache rating: " << panache << endl;
}

char * Singer::pt[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
	Worker::Set();
	cout << "Enter number for singer's vocal range: " << endl;

	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pt[i] << " ";
		if (i % 4 == 3) cout << endl;
	}

	if (i % 4 != 0) cout << endl;

	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

void Singer::Show() const
{
	cout << "Category singer: " << endl;
	Worker::Show();
	cout << "Vocal range: " << pt[voice] << endl;
}


