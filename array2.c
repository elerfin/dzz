#include <stdio.h>
int main() 
{
    int array[100][100];
    int num;
    int f;
    int a = 0;
    int g;

    printf("Enter size ");
    scanf("%d", &num);

    printf("Enter elements ");
    for(f = 0; f < num; f++)
        for(g = 0; g < num; g++)
            scanf("%d", &array[f][g]);
    
    for(f =0; f < num; f++)
        for(g = 0; g < num; g++)
            a = a + array[f][g];

    printf("Total = %d\n", a);


}
