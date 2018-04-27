/*
 * Student.h
 *
 *  Created on: 2018Äê4ÔÂ25ÈÕ
 *      Author: John
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <valarray>

class Student : private std::string, private std::valarray<double> {
public:
	Student() : std::string("Null Student"), ArrayDb() {}
	Student(const std::string &s) : std::string(s), ArrayDb() {}
	Student(int n) : std::string("Nully"), ArrayDb(n) {}
	Student(const std::string& s, int n) : std::string(s), ArrayDb(n) {}
	Student(const std::string &s, const std::valarray<double> &a) : std::string(s), ArrayDb(a) {}
	Student(const char *str, const double *pd, int n) : std::string(str), ArrayDb(pd, n) {}
	virtual ~Student();

	double average() const;
	double& operator[](int i);
	double operator[](int i) const;
	const std::string& name() const;

	friend std::istream& operator>>(std::istream &is, Student &stu);
	friend std::istream& getline(std::istream &is, Student &stdu);
	friend std::ostream& operator<<(std::ostream &os, const Student &stu);

private:
	typedef std::valarray<double> ArrayDb;
	std::ostream& arr_out(std::ostream &os) const;

};

#endif /* STUDENT_H_ */
