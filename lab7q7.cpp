//include input output library
#include<iostream>
#include<cmath>
//include standard library
using namespace std;
int pallindrom(int,int);
int reverse(int,int);
 int main(){
	  int num,revnum,length;
	  //enter and print value on screen
	  cout<<"enter the value of number ";  
	  cin>>num;
	  length=log(num);
	  //function calling 
	   pallindrom(num,revnum);
	   return 0;
	} 

//define function
int pallindrom(int num,int revnum)
{  int length;
	//function calling
	 reverse(num,length);  
	if(num==reverse(num,length))
	cout<<" entered no is a pallindrom"<<endl;
    if(num=!reverse(num,length))
    cout<<" entered no is not a pallindrom"<<endl;
	return 0;
}
	 
  int reverse(int num,int length){
	  //function calling
	 length=log(num);
	  if(num=!0)
     return (num%10)*pow(10,length)+reverse(num/10,length-1);
	else 	 
    return 0;
    }
 
