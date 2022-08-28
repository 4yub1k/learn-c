#include <stdio.h>
#include <string.h>
//bubble sort
void printArray(int nums[],int size){
    for (int i=0;i<size;i++){
        printf("%d",nums[i]);//for char array use %c
    }
}
void sortArray(int nums[], int size){
    int temp;
    for (int i=0;i<size-1;i++){
        for (int j=0;j<size-1;j++){
            if (nums[j]>nums[j+1]){ //decend, (nums[j]<nums[j+1])
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        } 
    }
    printArray(nums,size);

}
int main (){

    int numbers[]={1,8,5,4,9,3,6,2,7};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    sortArray(numbers,size);

    return 0;
}