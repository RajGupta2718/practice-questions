#include<iostream>
using namespace std;
int main(){
	cout<<"Raj Gupta , BBDITM , 3rd"<<endl;
	
	//Step  for taken input
	/*int a, b=10;
	cin>>a;
	int sum=a+b;
	cout<<sum;*/
	
	//step 1 while loop
	//sum of 10 natural number 
	int sum=0;
	int counter = 1;
	//condition
	while( counter<=10){
		sum=sum+counter; // 1+2+....+10 //10*11/2
		counter++;	
	}
	cout<<"sum[1,10]"<<sum<<endl;
	/*
	do{
		//write your logic
	}while(condition);*/
	
    //step2
     sum=0;
	//for( intialization; condition ; after loop execution)
	for(int counter=1; counter<=10; counter++){
		sum=sum+counter; // 1+2+3....+10
	}
	cout<<"sum[1,10]"<<sum<<endl;
	
	//step3 for loop
	int n;
	int total=0;
	//0,1,2,3,4
	for(int counter =0; counter<5 ; counter++){
		cin>>n;
		total=total+n;
	}
	cout<<"Total=" <<total<<endl;
	
	//step4 nested loop
	for(int rowNo =1; rowNo <=5; rowNo++){
		for( int j=0; j<rowNo ; j++){
			cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}
