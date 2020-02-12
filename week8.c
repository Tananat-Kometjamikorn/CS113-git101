#include <stdio.h>

int main() {

    //**********STRUCTURE***********//  (คล้าย list ใน python)
    struct student {
    char id[11];
    char name[40];
    };

    //วิธีการเข้าถึง structure
    printf("%s\n", std.name);
    std.id = 6210406581;

    //วิธีการเข้าถึง structure ด้วย pointer
    struct student std, *p_std;
    p_std = &std;
    printf("%s\n", (*p_std).name);
    (*p_std).age = 21;

    //typedef กำหนดประเภทข้อมูลให้เป็นชื่อใหม่
    typedef unsigned long int ulint;

    //Self-Referential Structures โครงสร้างที่มี pointer ชี้กลับไปยังโครงสร้างนี้ (linked list)
    struct node {
    int data;
    struct node *next;
    };

    //ตัวอย่างการเข้าถึง linked list
        struct node {
    int data;
    struct node *next;
    };

    struct node *create_list()
    { struct node *first, *second, *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first->data = 17;
    first->next = second;
    second->data = 29;
    second->next = third;
    third->data = 93;
    third->next = NULL;
    return first;
    }

    void print_list(struct node *head)
    { struct node *tmp;
    for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
    }

    int main()
    { struct node *head;
    head = create_list();
    print_list(head);
    }
    return 0;
}