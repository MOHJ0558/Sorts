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
int main(){
    int l;
    printf("length:\n> ");
    scanf("%d", &l);
    int arr[l];
    printf("input %d numbers:\n", l);
    for(int i = 0; i < l; i++){
        printf("%d> ", i + 1);
        scanf("%d", &arr[i]);
    }
    selectionsort(arr, l);
    printf("after sorted:\n");
    for(int i = 0; i < l; i++){
        printf("(%d): %d\n", i + 1, arr[i]);
    }
    return 0;
}
