/*
 * painting.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	if (c > d) {
		int tmp = c;
		c = d;
		d = tmp;
	}

	if (a > c) {
		int tmp = a;
		a = c;
		c = tmp;

		tmp = b;
		b = d;
		d = tmp;
	}

	if (b < c) {
		cout << ((b - a + 1) + (d - c + 1));
	} else if (b > d) {
		cout << (b - a + 1);
	} else {
		cout << (d - a + 1);
	}

	return 0;
}

