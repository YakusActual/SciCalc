/*
* File:   Add.h
* Author: yakusactual
*
* Created on 26 October 2016, 13:27
*/

#ifndef ADD_H
#define ADD_H

class Add {
public:

	double add(double x) {
		return x;
	}

	int add(int x, int y) {
		return x + y;
	}

	double add(int x, double y) {
		return x + y;
	}

	double add(double x, int y) {
		return x + y;
	}

	static double add(double x, double y) {
		return x + y;
	}

};

#endif /* ADD_H */

