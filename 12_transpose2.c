//Program to change the given matrix to its transpose without using another matrix
#include<stdio.h> 
#include<stdbool.h>
void getinput(int rows,int colms,int arr[rows][colms]){
    for (int i=0; i<rows; i++){
        for(int j=0; j<colms; j++){
            printf("Enter value at (%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void printmatrix(int rows,int colm,int arr[rows][colm]){
    for(int i=0; i<rows; i++){
        // printf("[ ");
        for(int j=0; j<colm; j++){
            printf("%d ",arr[i][j]);
        }
        // printf("]");
       
        printf("\n");
        
     }
}
int main(){
    int rows,colms;
    printf("Enter row: ");
    scanf("%d",&rows);
    printf("Enter colm: ");
    scanf("%d",&colms);
    int arr[rows][colms];
    getinput(rows,colms,arr);
    printf("The given matrix is:\n ");
    printmatrix(rows,colms,arr);
    printf("\n");
    bool flag=false;
    for(int i=0; i<rows; i++){
        for(int j=i; j<colms; j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;        
        }
    }
    for(int i=0; i<colms; i++){
        for(int j=0; j<rows; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
   
     return 0;
}