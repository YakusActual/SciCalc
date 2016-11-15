#pragma once

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Functions {
public:
	Functions()
	{
		m_isFirstDblSet = false;
		m_isSecondDblSet = false;
		m_dblOne = 0;
		m_dblTwo = 0;
		m_operand = '@';
	}

	void useSpecialFunction(string funcType) {
		m_funcType = funcType;
	}

	void setOperand(char operand) {
		m_operand = operand;
	}

	void setNum(double n) {
		if (!m_isFirstDblSet) {
			m_dblOne = n;
			m_isFirstDblSet = true;
		}
		else if (m_isFirstDblSet && !m_isSecondDblSet) {
			m_dblTwo = n;
			m_isSecondDblSet = true;
		}
	}

	double getResult() {
		double result = 0;
		switch (m_operand) {
		case '+': result = add();
			break;
		case '-': result = subtract();
			break;
		case '*': result = multiply();
			break;
		case '/': result = divide();
			break;
		default: result = m_dblOne;
		}
		m_isSecondDblSet = false;

		return result;
	}

	void reset() {
		m_dblOne = 0;
		m_dblTwo = 0;
		m_isFirstDblSet = false;
		m_isSecondDblSet = false;
		m_operand = '@';
	}

private:
	bool m_isFirstDblSet;
	bool m_isSecondDblSet;
	string m_funcType;
	char m_operand;
	double m_dblOne;
	double m_dblTwo;

public:
	double add() {
		m_dblOne = m_dblOne + m_dblTwo;
		return m_dblOne;
	}

	double subtract() {
		m_dblOne = m_dblOne - m_dblTwo;
		return m_dblOne;
	}

	double multiply() {
		m_dblOne = m_dblOne * m_dblTwo;
		return m_dblOne;
	}

	double divide() {
		m_dblOne = m_dblOne / m_dblTwo;
		return m_dblOne;
	}
};

#endif
