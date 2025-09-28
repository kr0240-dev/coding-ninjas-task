#include <stdio.h>
struct Student {
    char name[50];
    int rollNo;
    float marks;
};
int main() {
    struct Student s1;
    printf("Enter name: \n");
    scanf("%s", s1.name);  
    printf("Enter roll number: \n");
    scanf("%d", &s1.rollNo);
    printf("Enter marks: \n");
    scanf("%f", &s1.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.rollNo);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}
