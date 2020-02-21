#include <iostream>
#include "bbs.h"
#include "qks.h"
#include "sls.h"
using namespace std;
int main(){
	int l, ch;
	cout<<"length> ";
	cin>>l;
	double arr[l];
	for(int i = 0; i < l; i++){
		cout<<"["<<i+1<<"]> ";
		cin>>arr[i];
	} 
	cout<<"PLEASE CHOOSE SORTING METHOD:\n1.Selection sort\n2.Bubble sort\n3.Quick sort\nCHOICE> ";
	cin>>ch;
	if(ch == 1){
		SLS(arr, l);
	}else if(ch == 2){
		BBS(arr, l);
	}else if(ch == 3){
		QKS(arr, 0, l - 1);
	}else{
		cout<<"ERROR!"<<endl;
		return -1;
	}
	cout<<"results:"<<endl;
	if(l == 1){
		cout<<arr[0]; 
	}else{
		cout<<arr[0];
		for(int i = 1; i < l; i++){
			cout<<", "<<arr[i];
		} 
	}
	return 0;
}
