/*
 * traveltime.cpp
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

	if (a > c) {
		int tmp = a;
		a = c;
		c = tmp;
	}

	if (a > d) {
		int tmp = a;
		a = d;
		d = tmp;
	}

	if (b > c) {
		int tmp = b;
		b = c;
		c = tmp;
	}

	if (b > d) {
		int tmp = b;
		b = d;
		d = tmp;
	}

	if (c > d) {
		int tmp = c;
		c = d;
		d = tmp;
	}

	int sum1 = a + d;
	int sum2 = b + c;

	if (sum1 < sum2) {
		int tmp = sum1;
		sum1 = sum2;
		sum2 = tmp;

	}
	int res1 = (sum1 - sum2);

	sum1 = (a + b + c);
	sum2 = d;

	if (sum1 < sum2) {
		int tmp = sum1;
		sum1 = sum2;
		sum2 = tmp;

	}
	int res2 = (sum1 - sum2);

	if(res1 < res2){
		cout << res1;
	} else {
		cout << res2;
	}
	return 0;

}
