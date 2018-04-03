#include <stdio.h>
int top = -1;       //GLOBAL SCOPE//
int stack[10000];  //GLOBAL SCOPE//

void push(int x) //PUSHING INTO STACK//
{
    top = top + 1;
    stack [top] = x;
}

void pop() //RETRIEVING FROM STACK//
{
    int out;
    if(top == -1)
    {
        //IF STACK IS EMPTY. UNDERFLOW//
        printf("No Food\n");
    }
    else
    {
        top-- ;
        out = stack [top + 1];
        printf("%d\n", out); //DISPLAYING TOP ITEM//
    }
}

int main()
{
    int q, i, query, cost, item = 0;
    scanf("%d", &q);
    for( i = 0; i < q; i++)
    {
        scanf("%d", &query);
        if(query == 1)
        {
            // Custemer Query
            pop();
        }
        if(query == 2)
        {
            scanf("%d", &cost);
            // Chef Query
            push(cost);
        }
        
    }
}