#include <stdio.h>

void right_half_pramid(void);
void left_half_pramid(void);


int main()
{
    //right_half_pramid();
    left_half_pramid();


    return 0;
}

void right_half_pramid(void)
{
    int pyrSize = 0;
    printf("Enter right half pyramid size: ");
    scanf("%d", &pyrSize);

    //printf("pyrSize = %d.", pyrSize);

    for (char iteration1 = 1; iteration1 <= pyrSize; iteration1++)
    {
        for (char iteration2 = iteration1; iteration2 > 0; iteration2--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

}

void left_half_pramid(void) 

{
    int pyrSize = 0;
    printf("Enter right half pyramid size: ");
    scanf("%d", &pyrSize);

    //printf("pyrSize = %d.", pyrSize);

    for (char iteration1 = 1; iteration1 <= pyrSize; iteration1++)
    {
        for (char iterationSpace = pyrSize - iteration1; iterationSpace > 0; iterationSpace--)
        {
            printf(" ");
        }
        
        for (char iteration2 = iteration1; iteration2 > 0; iteration2--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

}

