#include<stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    printf("Enter id name marks: ");
    scanf("%d %49s %f", &p->id, p->name, &p->marks);

    p->marks = p->marks + 5.0;

    printf("ID: %d\n", p->id);
    printf("Name: %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}