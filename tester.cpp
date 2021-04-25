#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <math.h>
#include <cstring>
#include <fstream>
using namespace std;
int main(void)
{
	/*
	**********************************Notification******************
		This code is C++ implementation of lightdicom repository written by RyungWoo Jang.
		This code only aims to measure Execution Time of reading pixel data or header, etc...
		For this reason, this code does not contains class interface or etc.
		So do not use this code for your data. Such things will be implemented soon.
	*/


	//============ use only Single Core Environment ============//
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//============ use only Single Core Environment ============//


	//Read DCM file as HEX
	fstream reader;
	string path = "write your dcm path";
	reader.open(path, ios_base::in);
	if (reader.is_open()) {
		while (!reader.eof()) {
			char arr[100000];
			reader.getline(arr, 100000);
			cout << arr;
		}
	}
	reader.close();
}
