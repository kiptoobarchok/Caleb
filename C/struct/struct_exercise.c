#include <stdio.h>
#include <stdlib.h>

struct pay_info {
    char *name;
    char *email;
    char *id;
    int pay;
    int age;
    int raise;
} info;

struct pay_info emp1, emp2;

int manager()
{
    struct pay_info {
        char *name;
        char *email;
        int pay;
        char *id;
        int age;
        int raise;
    } manager;

    manager.age = 27;

    if (manager.age > 30)
    {
        printf("salary = %d\n", 80000);
    }
    else if (manager.age > 18 && manager.age <= 30)
    {
        printf("salary = %d\n", 65000);
    }
    else
    {
        printf("Invalid\n");
    }

}

int main()
{
    
    struct info emp1 = {"Caleb", "Caleb@gmail.com",  "S39430369", 30000, 22, 1.05};

    printf("emp1 salary = %d\n", emp1.pay_info);
}