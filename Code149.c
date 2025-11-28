//Q149. Use malloc() to allocate structure memory dynamically and print details.

#include<stdio.h>
#include<stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    struct Student *s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (struct Student *)malloc(n * sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter id, name and marks of student %d: ", i + 1);
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    printf("Student details:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d Name: %s Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    free(s);
    return 0;
}