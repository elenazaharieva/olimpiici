/*
 * traveltime.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;

int main() {
	int t1, t2;
	cin >> t1 >> t2;
	int t3;
	cin >> t3;
	int t4, t5;
	cin >> t4 >> t5;
	int br;
	cin >> br;
	int t6;
	cin >> t6;

	int reg = t3;
	int put = t4 * 60 + t5;
	int nast = (br + 1) * t6;

	int busy = reg + put + nast;

	int start = t1 * 60 + t2 - 10;

	int resultMin = start - busy;

	int hours = resultMin / 60;
	int minutes = resultMin % 60;


	if (hours < 10 ) {
		cout << "0";
	}
	cout << (hours) << " ";

	if (minutes < 10 ) {
		cout << "0";
	}
	cout << (minutes);
	return 0;

}
