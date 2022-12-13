#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text,reverse_text,reverse_text_lower,text_lower;
    cout << "Input text: ";
	cin >> text;
	reverse_text = func1(text);
	reverse_text_lower = func3(reverse_text);
	text_lower = func3(text);
    cout << "Reversed text: ";
	cout << func1(text) << endl;
	if(text_lower == reverse_text_lower){
		cout << "Palindrome: Yes ";
	}else{
		cout << "Palindrome: No ";
	}
    return 0;
}
