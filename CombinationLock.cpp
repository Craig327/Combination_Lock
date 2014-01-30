// CombinationLock.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void getdata(int &n, int &first, int &second, int &third){
	string input;
	cout<<"Enter the number of printed numbers on the dial, the first number is N, followed by 3 space delimited numbers representing the combination:\n";
	getline(cin,input);
	stringstream inputstream(input);
	inputstream >> n >> first >> second >> third;
}
int main(){
	int n,first,second,third,spinnum =0;
	getdata(n, first, second, third);
	spinnum = n*2 + first + n;
	if(second < first)spinnum+= first - second;
	else while(first != second){
		first--;
		if(first <= 0)first = n;
		spinnum++;
	}
	spinnum+=third - second;
	cout<<"The number of spins required is: "<< spinnum << "\n";

	return 0;
}
