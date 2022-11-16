#include <stdio.h>



    // void cycle() {
    //     for(f = 0; f <= num; f++);
    // }


int main() 
{
    int array[10000];
    int num;
    int f;
    int a = 0;

    printf("Enter size ");
    scanf("%d", &num);

    printf("Enter elements ");
    for(f = 0; f < num; f++)
        scanf("%d", &array[f]);
    
    for(f =0; f < num; f++)
        a = a + array[f];

    printf("Total = %d\n", a);


}

