#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	srand( (unsigned)time(NULL) );
	int num = rand()%100;// 0-65535 - 0-9
	int guess;
	
	//cout<<num<<endl;
	cout<<"Enter your guess (0-99): ";
	cin>>guess;
	
	if( guess <= 99 && guess >= 0 ){
		if(guess == num){
			cout<<"You Win";
		}else{
			cout<<"You Lose"<<endl;
			cout<<"Correct Answer: "<<num;
		}
	}else{
		cout<<"Invalid Number";
	}
	
	return 0;
}
