#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 5

int tos=-1;
int a[MAX_SIZE];
int push(int data)
{
    if(tos==MAX_SIZE-1)
    {
        printf("Stack is overflow");
    }
    else{
        tos=tos+1;
        a[tos]=data;
    }
}
int pop()
{
    if(tos==-1)
    {
        printf("Stack is empty");
    }
    else{
        tos=tos-1;
    }
}

int main(){
    push(5);
    push(10);
    push(20);
    pop();

    for(int i=0; i<=tos; i++)
    {
        printf("|%d|",a[i]);
    }
}