#include<stdio.h>
#pragma warning(disable:4996)

typedef struct Person
{
    char name[128];
    int age;
    float height;
    float weight;

}Person;

int main(void)
{
    Person person;
    printf("���O����͂��Ă�������\n");
    scanf("%s", &person.name);

    printf("�N�����͂��Ă�������\n");
    scanf("%d", &person.age);

    printf("�g������͂��Ă�������\n");
    scanf("%f", &person.height);

    printf("�̏d����͂��Ă�������\n");
    scanf("%sf", &person.weight);

    printf("���O:%s\n�N��:%d\n�g�����̏d:%.2fcm,%.2fkg", person.name, person.age, person.height, person.weight);

    return 0;
}