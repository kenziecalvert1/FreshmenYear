#include<iostream>
#include<sys/time.h>
#include<cstdlib>
using std::cout;
using std::endl;
using std::cin;

long fib_it(int n){
	long ans;
	if(n==0){
		return 0;
	}
	long q=1;
	long r=1;
	long s=1;
	for(int i=3;i<=n;i++){
		s=r+q;
		q=r;
		r=s;
	}
	ans =s;
	return ans;
}

long fib_rec(int n){
	//long ans;
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fib_rec(n-2)+fib_rec(n-1);
}


int main(){
   	//int n; long iter; long rec;
	//cout<<"Please enter in a number you would like to find for Fibonacci: ";
	//cin>>n;
	//rec=fib_rec(n);
	//iter=fib_it(n);
	//cout<<iter<<endl;


   
   	typedef struct timeval time;
	time stop,start;

	gettimeofday(&start,NULL);
	//int n;
	//long iter;
	//cout<<" Please enter in a number for Fibonacci: ";
	//cin>>n;
	//iter=fin_it(n);
	//cout<<iter<<endl;
	//gettimeofday(&stop,NULL);
	int n;
	long rec;
	cout<<"Please enter in a number for Fibonacci: ";
	cin>>n;
	rec=fib_it(n);
	cout<<rec<<endl;
	gettimeofday(&stop,NULL);
	if(stop.tv_sec>start.tv_sec)
	   cout<<"Seconds: "<<stop.tv_sec-start.tv_sec<<endl;
	else
	   cout<<"Micro: "<< stop.tv_usec-start.tv_usec<<endl;
	return 0;
}
