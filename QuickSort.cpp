#include <iostream>
using namespace std;
void QKS(double arr[], int left, int right){
	if(left >= right)
		return;
	int i, j;
	double temp, base;
	i = left, j = right;
	base = arr[left];//取最左边的数为基准数
	while(i < j){
		while(arr[j] >= base && i < j)
			j--;
		while(arr[i] <= base && i < j)
			i++;
		if(i < j){//交换
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp; 
		}	
	}
	//基准数归位
	arr[left] = arr[i];
	arr[i] = base;
	QKS(arr, left, i-1);
	QKS(arr, i + 1, right);
}
