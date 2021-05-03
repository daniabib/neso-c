#include <stdio.h>

struct employee  // "employee" is a STRUCTURE TAG.
{
    char *name;
    int age;
    int salary;
};

int manager()
{
    struct employee manager;
    manager.age = 32;

    if (manager.age > 30)
        manager.salary  = 65000;
    else
        manager.salary = 50000;
    return manager.salary;
}

int main(int argc, char const *argv[])
{
    struct employee emp1;
    struct employee emp2;
    printf("Enter employee 1 salary:\n");
    scanf("%d", &emp1.salary);
    printf("Enter employee 2 salary:\n");
    scanf("%d", &emp2.salary);
    printf("Print manager salaray: %d\n", manager());
    return 0;
}
