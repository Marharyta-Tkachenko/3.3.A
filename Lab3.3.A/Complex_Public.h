#pragma once
#include "Complex.h"

class Complex_Public : public Complex
{
public:
	Complex_Public();
	Complex_Public(int x, int y);
	Complex_Public(const Complex_Public& v);

	Complex_Public& operator = (const Complex_Public& n);

	Complex_Public& operator --();
	Complex_Public& operator ++();
	Complex_Public operator --(int);
	Complex_Public operator ++(int);

	friend  Complex_Public operator + (const Complex_Public Z1, const Complex_Public Z2);
	friend  Complex_Public operator * (const Complex_Public Z1, const Complex_Public Z2);
	friend  bool operator == (const Complex_Public Z1, const Complex_Public Z2);
};
