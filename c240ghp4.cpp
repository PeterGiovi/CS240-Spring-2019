/*#####################################################

	This Program will query the user for an integer
	greater than 1 and display the input's
	prime factorization. 
	
	Written by Peter Giovi
	Date of revision: April 24th, 2019
	v3.40
	Language: C++ (g++ Compiler Target)
	Written for Cygwin64 Environment

#####################################################*/
#include<iostream>
#include "stack.h"

using namespace std;

int main(void){
	
	int n;
	Stack(factors);
	
	cout<<"Enter a positive integer greater than 1: ";
	cin>>n;
	
	for(int i = 2; n > 1; i++){
		if(n % i == 0){
			factors.push(i);
			n = n / i;
			i = 1;
		}
	}
	
	cout<<endl;
	factors.display(cout);
	
	return 0;
	
}
