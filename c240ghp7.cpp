/*#####################################################

	This Problem will:
	
	(1) get the fifteen prices from the user and 
	store them in a sequential (standard) container.

	(2) find the highest and lowest trading price 

	(3) compute and display a sequence showing the 
	daily changes in the prices

	(4) sort the prices from low to high and 
	display the result

	Written by Peter Giovi
	Date of revision: April 27th, 2019
	v2.41
	Language: C++ (g++ Compiler Target)
	Written for Cygwin64 Environment

#####################################################*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(void){
	
	vector<int>	stock; vector<int> dif;
	int t;
	
	for(int i = 0; i < 15; i++){ //input user data
		cout<<"Input stock value "; 
		cin>>t;
		stock.push_back(t);
		dif.push_back(0);
	}
	
	//display high and low
	cout<<"The Highest Price is: "<<*max_element(stock.begin(),stock.end())<<endl<<"The Lowest Price is: "<<*min_element(stock.begin(),stock.end())<<endl;
	cout<<"Daily Changes: "<<endl;
	
	adjacent_difference(stock.begin(),stock.end(),dif.begin());
	
	for(int i = 0; i < dif.size(); i++){//display dif vector
		cout<<dif[i]<<" ";
	}
	
	cout<<endl<<"Sorted: "<<endl;
	
	sort(stock.begin(), stock.end());
	
	for(int i = 0; i < stock.size(); i++){//display sorted vector
		cout<<stock[i]<<" ";
	}
	
	return 0;
}
