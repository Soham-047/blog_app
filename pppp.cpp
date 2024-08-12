#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void getlength(struct node* head)
{
    struct node* temp = head;
    int cnt = 0;
    while(temp)
    {
        temp = temp -> next;
        cnt++;
    }
    printf("%d", cnt);
}

int main()
{
    
    struct node*head, *newnode, *temp;
    head = 0; int choice; while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", & newnode -> data);
        newnode -> next = 0;
        if(head==0)
        {
            head=temp=newnode;
        }
            else
            {
                temp -> next = newnode;
                temp = newnode;
            }
            printf("do you want to continue? ");
            scanf("%d", &choice);
    }
        temp = head;
        while(temp!=0)
        {
            printf("%d ", temp -> data);
            temp = temp->next;
        }
        printf("\n");

        getlength(head);
        return 0;
}