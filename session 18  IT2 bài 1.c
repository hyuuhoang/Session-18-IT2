#include <stdio.h>
#include <string.h> 

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    printf("Nhap ten sinh vien: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; 

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &student.age);
    getchar();

    printf("Nhap so dien thoai sinh vien: ");
    fgets(student.phoneNumber, sizeof(student.phoneNumber), stdin);
    student.phoneNumber[strcspn(student.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}

