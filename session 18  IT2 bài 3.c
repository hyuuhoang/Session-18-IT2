#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[5];
    int i;


    for (i = 0; i < 5; i++) {
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

    printf("Thong tin cac sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
}

