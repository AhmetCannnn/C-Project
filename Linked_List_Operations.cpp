#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void basaekle(struct Node **head, int _data)
{
    struct Node *gecici = (struct Node *)malloc(sizeof(struct Node));
    gecici->data = _data;
    gecici->next = (*head);
    (*head) = gecici;
}
void sonaekle(struct Node **head, int _data )
{
    struct Node *yeni_dugum = (struct Node *)malloc(sizeof(struct Node));
    yeni_dugum->data = _data;
    yeni_dugum->next = NULL;
    
    if (*head == NULL)
    {
        *head = yeni_dugum;
    }
    else{
        struct Node *gecici = *head;
        while (gecici->next != NULL)
        {
            gecici = gecici-> next;
        }
        gecici->next = yeni_dugum;
    }
}
void yazdir(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}

int main()
{
    struct Node *head = NULL;

    basaekle(&head, 2);
    basaekle(&head, 7);
    basaekle(&head, 5);
    basaekle(&head, 8);
    basaekle(&head, 4);
    sonaekle(&head, 0);
    sonaekle(&head, 3);
    sonaekle(&head, 5);
    sonaekle(&head, 7);
    sonaekle(&head, 9);
    sonaekle(&head, 1);

    yazdir(head);

    return 0;
}
