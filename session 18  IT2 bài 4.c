#include <stdio.h>
#include <string.h>
struct Student {
    int id;         
    char name[50];
    int age;
    char phoneNumber[15]; 
};

int main() {
    struct Student students[50];
    int i, numStudents = 5;  

    // Nh?p thông tin cho 5 sinh viên
    for (i = 0; i < numStudents; i++) {
        students[i].id = i + 1;

        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        getchar();

        printf("So dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0'; 

        printf("\n");
    }

    printf("Thong tin cac sinh vien:\n");
    for (i = 0; i < numStudents; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

