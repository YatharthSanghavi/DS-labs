#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

int count = 0;
struct node *Insorder(int x, struct node *first)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    if (first == NULL)
    {
        new->link = NULL;
        ++count;
        return new;
    }
    if (new->info <= first->info)
    {
        new->link = first;
        ++count;
        return new;
    }
    struct node *save = first;
    while (save->link != NULL && new->info >= save->link->info)
    {
        save = save->link;
    }
    new->link = save->link;
    save->link = new;
    ++count;
    return first;
}

struct node *Delorder(int x, struct node *first)
{
    if (first == NULL)
    {
        printf("Linklist is Empty\n");
        return first;
    }
    struct node *save = first;
    struct node *prev = save;
    while (save->info != x && save->link != NULL)
    {
        prev = save;
        save = save->link;
    }
    if (save->info != x)
    {
        printf("Node not found %d\n", x);
        return first;
    }
    if (x == first->info)
    {
        first = first->link;
    }
    else
    {
        prev->link = save->link;
    }
    free(save);
    --count;
    return first;
}

void display(struct node *first)
{
    if (first == NULL)
    {
        printf("Link is Empty\n");
    }
    while (first != NULL)
    {
        printf("%d \t", first->info);
        first = first->link;
    }
}

void main()
{
    struct node *first = NULL;
    first = Insorder(10, first);
    first = Insorder(5, first);
    first = Insorder(30, first);
    first = Insorder(20, first);
    first = Delorder(20, first);
    //    first = Delorder(50, first);
    display(first);
    printf("\nTotal node are %d", count);
}