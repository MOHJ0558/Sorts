#include <stdio.h>
void swap0(int*, int*);
int min0(int[], int, int);
void selectionsort(int nums[], int len){
    int idx = 0;
    for(int i = 0; i < len - 1; i++){
        idx = min0(nums, i, len);
        if(idx != i){
            swap0(&nums[idx], &nums[i]);
        }
    }
}
int min0(int arr[], int from, int to){
    int minidx = from;
    for(int i = from + 1; i < to; i++){
        minidx = arr[minidx] < arr[i] ? minidx : i;
    }
    return minidx;
}
void swap0(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
