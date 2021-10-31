#include <stdio.h>
#include <math.h>
int main(void){
   
    int arr[5];
    for (int i = 0; i < 5; i++)
{
        scanf("%d", &arr[i]);
        printf("%d", arr[i]);
    static int sum (int min, int min2)
    {
        int sum = min2 + min;
        printf("Result %d\n", sum);
        return sum;
        int min = arr[0];
        int min2 = arr[1];
        if (min2 > min){
            min = min2;
            min2 = arr[0];
        }
        for(int i = 2; i < 5; i++){
            if ( min > arr[i]){
                min2 = min;
                min = arr[i];
            }
            if (min2 > arr[i] && arr[i] != min){
                min2 = arr[i];
        }
      }
    }
}
    return 0;
}
