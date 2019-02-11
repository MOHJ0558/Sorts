public class SelectionSort{
    public static void selectionSort(int[] nums){
        int index = 0, temp = 0;
        for(int i = 0; i < nums.length - 1; i++){
            index = i;
            for(int j = i + 1; j < nums.length; j++){
                if(nums[j] < nums[index]){
                    index = j;
                }
            }
            if(index != i){
                temp = nums[index];
                nums[index] = nums[i];
                nums[i] = temp;
            }
        }
    }
}
