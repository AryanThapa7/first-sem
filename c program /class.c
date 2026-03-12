#include <stdio.h>

// structure pointer
struct student {
    char name[20];
    int age;
    char grade;
    float gpa;
};  
int main() {
    struct student s1 = {"Alice", 20, 'A', 3.8};
    struct student *ptr = &s1;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Grade: %c\n", ptr->grade);
    printf("GPA: %.2f\n", ptr->gpa);

    return 0;
}