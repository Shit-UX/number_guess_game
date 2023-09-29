#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
//完整猜数字
int game (int num1,int num2)
{
    srand((unsigned int) time(NULL));
    num1 = rand()%100+1;
    printf("you have only ten times to try.\n"
           "please enter your number(from 0 to 100):\n");
    int judge= 0;
    for (;judge<=10;judge++)
    {
        scanf("%d", &num2);
        if (num1 > num2)
        {
            printf("bigger please\n");
            continue;
        }
        else if (num1 == num2)
        {
            printf("congratulation!!!\n");
            break;
        }
        else
        {
            printf("smaller please\n");
            continue;
        }
    }
    if (judge > 10)
    {
        printf("you lose\n");
    }
    return 0;

}
int main()
{
    printf ("###########################\n");
    printf ("####    welcome to     ####\n");
    printf ("#### number guess game!####\n");
    printf ("###########################\n");
    printf ("####  1.start  2.exit  ####\n");
    printf ("###########################\n");
    printf ("please enter 1or2 going on:\n");
    int a;
    int num1;
    int num2;
    int going;
    scanf("%d",&a);
    if (a == 1)
    {
        do
        {
            game(num1,num2);
            printf("input a number to choose"
                   "going on(any number but 0) or not(0)?\n");
            scanf("%d",&going);
        }
        while(going);
        printf("wish you have a good luck lives.\n");
    }
    else
    {

        printf("get out!");
    }
    return 0;
}

