//to print the first n natural numbers
//including library
#include<iostream>
using namespace std;
//starting function
	int num(int);
	int main()
	{//declaring varibles
	   int n,print;
	   //printing
    	cout<<"enter the value of n ";
    	//store input in varibles
    	cin>>n;
    	//function calling
    	print=num(n);
    	//printing
    	cout<<print<<endl;
    return 0;
}
   //define recursive function
   int num(int n){
	   //adding base condition
	   if(n>1){
	   cout<<" "<<n<<" ";
       return num(n-1);
}
       else if(n==1)
       return 1;
       else 
       return 0;
       
}
