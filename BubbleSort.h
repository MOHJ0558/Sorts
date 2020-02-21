#ifndef bbs_h
#define bbs_h
using namespace std;
void BBS(double arr[], int len){
	for(int i = 0; i < len - 1; i++){//轮数 
		for(int j = 0; j < len - i - 1; j++){//比较次数 
			if(arr[j] >= arr[j+1]){
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			} 
		}
	}
}
#endif
