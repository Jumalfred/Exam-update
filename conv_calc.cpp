#include<iostream>
using namespace std;
int main(){
	char sub[20],A[1];
	string Grade;
	int marks,no,i,sum=0,check_av,point,Totalpoints;
	cout<<"Enter the number of subjects :";
	cin >>no;
	for(i=1;i<=no;i++){
	cout<< "Enter the name of the subject :"<<endl;
//	A is just to skip the sequence after the input
	cin>> sub,A[i-1];
	cout << "Marks scored in " <<sub <<" : ";
	cin>>marks;
	if(marks >= 70){
		Grade = "A";
		point = 4;
	}
	else if(marks >= 60 && marks <70){
		Grade = "B";
		point = 3;
	}
	else if(marks >= 50 && marks < 60){
		Grade = "C";
		point = 2;
	}
	else if(marks >= 40 && marks < 50){
		Grade = "D";
		point = 1;
	}
	if(marks < 40){
		Grade = "E";
		point = -1;
	}
	cout<< "Grade in "<<sub <<" is " <<Grade<<endl;
	Totalpoints += point;
	sum+=marks;
}
	cout<< "Total is : "<< sum<<endl;
	cout<< "Average is :"<< sum/no<<endl;
	cout<< "Total Points is :"<< Totalpoints<<endl;
//	check_av = (100*no)/2;
//	if(sum > check_av){
//	cout<<"Good work,you can perform better than this so work harder";
//	}
//	else{
//	cout<< sum <<" is below average,pull up your socks";
	return 0;
//}
}
