#ifndef sls_h
#define sls_h
using namespace std;
void SLS(double arr[], int len){
	int minidx, temp;
	for(int i = 0; i<len-1;i++){
	    minidx = i;
	    for(int j = i+1; j<len; j++){
		    if(arr[j]<arr[minidx])
				minidx = j;
		}
		temp = arr[i];
		arr[i] = arr[minidx];
		arr[minidx] = temp;
	}
}
#endif
