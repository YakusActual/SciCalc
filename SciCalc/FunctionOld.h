/*
* File:   Functions.h
* Author: yakusactual
*
* Created on 25 October 2016, 14:05
*/

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

#ifndef FUNCTIONOLD_H
#define FUNCTIONOLD_H

class Function {
public:
	// Single input method:
	//double getResult(double x);

	// Dual input methods:
	/*int getResult(int x, int y);
	double getResult(int x, double y);
	double getResult(double x, int y);
	double getResult(double x, double y);*/

	// Miscellaneous functions: 

	void setNumber(int num);
	void setNumber(double num);

	double percent(double x) {
		m_dblOne = x / 100;
		return m_dblOne;
	}

	long fact(int x) {
		m_dblOne = x;
		int num = x;
		long result = 1;
		long *ptr = &result;
		for (int i = 1; i <= num; i++) {
			*ptr = *ptr * i;
		}
		return *ptr;
	}

	double getPi() {
		m_dblOne = 3.14;
		return m_dblOne;
	}

	double root(double x) {
		m_dblOne = x;
		return sqrt(x);
	}

	double expFun(double x) {
		m_dblOne = x;
		return exp(x);
	}

	double logNat(double x) {
		m_dblOne = x;
		return log(x);
	}

	double logM(double x) {
		m_dblOne = x;
		return log(x);
	}

	double powah(double val, double exp) {
		m_dblOne = val;
		m_dblTwo = exp;
		return pow(val, exp);
	}

	double sinFun(double x) {
		m_dblOne = x;
		return sin(x);
	}

	double cosFun(double x) {
		m_dblOne = x;
		return cos(x);
	}

	double tanFun(double x) {
		m_dblOne = x;
		return tan(x);
	}

	// Extra functions:

	double degToRad(double x) {
		m_dblOne = x;
		return x * (getPi() / 180);
	}

	double radToDeg(double x) {
		m_dblOne = x;
		return (x * 180) / getPi();
	}

	void decToBin(unsigned x) {

	}

	string bin(unsigned n) {
		unsigned i;
		string binary = " ";
		for (i = 1 << 31; i > 0; i = i / 2) {
			if (n & i) {
				binary += "1 ";
			}
			else {
				binary += "0 ";
			}
		}
		//        cout << sizeof(binary);
		return binary;
	}

protected:
	int m_intOne;
	int m_intTwo;
	double m_dblOne;
	double m_dblTwo;
};

#endif /* FUNCTIONS_H */

