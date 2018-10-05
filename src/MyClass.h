/*
 * MyClass.h
 *
 *  Created on: 2018��10��3��
 *      Author: John
 */

#ifndef MYCLASS_H_
#define MYCLASS_H_


template <typename T>
 class MyClass
 {
 private:
	T value;

 public:
	template <typename X>
	void assign(const MyClass<X>& x)
	{
		value = x.getValue();
	}

	T getValue() const
	{
		return value;
	}
 };


#endif /* MYCLASS_H_ */
