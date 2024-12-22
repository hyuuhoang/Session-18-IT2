#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};


void displayStudents(struct Student students[], int count) {
    printf("\n danh sach sinh vien :\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void editStudent(struct Student students[], int count) {
    int searchId;
    printf("\n nhap  ID sinh vien can sua : ");
    scanf("%d", &searchId);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].id == searchId) {
            found = 1;
            printf("sinh vien duoc tin thay. nhap thong tin moi .\n");

            printf("Nhap ten moi : ");
            scanf(" %[^\n]", students[i].name);
            printf("Nhap tuoi moi : ");
            scanf("%d", &students[i].age);

            printf("da cap nhat thong tin .\n");
            break;
        }
    }
    if (!found) {
        printf("khong tim thay sinh vien co  ID: %d\n", searchId);
    }
}

int main() {

    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0912345678"},
        {4, "Pham Thi D", 23, "0909876543"},
        {5, "Hoang Van E", 24, "0934567890"}
    };

    int studentCount = 5;

    displayStudents(students, studentCount);

    editStudent(students, studentCount);

    displayStudents(students, studentCount);

    return 0;
}

