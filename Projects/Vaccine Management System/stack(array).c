#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *s;
};
void create(struct Stack *st)
{
    printf("Enter size: \n");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size *sizeof(int));
}
void push(struct Stack *st,int num)
{
    if(st->top==st->size-1)
        printf("Stack overflow\n");
    else
    {
        st->top++;
        st->s[st->top]=num;
    }
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("Stack underflow\n");
    else
    {
        x=st->s[st->top--];
    }
    return x;
}
int peek(struct Stack *st)
{
    if(st->top==st->size-1)
        printf("Stack underflow\n");
    else
        return st->s[st->top];
}
void Display(struct Stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d",st.s[i]);
    }
    printf("\n");
}
int main()
{
    struct Stack st;
    create(&st);
    Display(st);
    printf("Popped element is : %d\n",pop(&st));
    printf("Top element is : %d\n",peek(&st));
    Display(st);
    return 0;
}
