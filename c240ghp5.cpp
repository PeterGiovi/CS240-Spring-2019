/*#####################################################

	This Program will take an input of a word and
	return if that word is a palindrome.

	Written by Peter Giovi
	Date of revision: May 04, 2019
	v3.41
	Language: C++ (g++ Compiler Target)
	Written for Cygwin64 Environment

#####################################################*/

#include<iostream>
#include<stack>
#include<queue> 
#include<string>

using namespace std;

int main(void){
	
	stack<char> wordS;
	queue<char> wordQ;
	string word;
	cout<<"Please input a word: ";
	cin>>word;
	
	for(int i = 0; i < word.size(); i++){ //pushes word onto a stack and queue
		wordS.push(word[i]);
		wordQ.push(word[i]);
	}
	
	for(int i = 0; i < word.size(); i++){ //checks to see if the word is a palidrome
		if(wordS.top() == wordQ.front()){
			wordS.pop();
			wordQ.pop();
		}
		else{
			cout<<"This word is not a Palindrome!"<<endl; //returns no
			return 0;
		}
	}
	
	cout<<"This word is a Palindrome!"<<endl; //returns yes
	
	return 0;
}
