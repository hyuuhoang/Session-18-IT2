#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};


void displayStudents(struct Student students[], int count) {
    printf("\nDanh sách sinh viên:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void addStudent(struct Student students[], int *count) {
    if (*count >= 50) {
        printf("Khong the them sinh vien. mang da day .\n");
        return;
    }

    struct Student newStudent;

    printf("\n nhap ID: ");
    scanf("%d", &newStudent.id);
    getchar();

    printf("Nhap ten : ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; 

    printf("Nhap tuoi : ");
    scanf("%d", &newStudent.age);
    getchar(); 

    printf("nhap so dien thoai : ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';


    students[*count] = newStudent;
    (*count)++;

    printf("da them sinh vien.\n");
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

    addStudent(students, &studentCount);

    displayStudents(students, studentCount);

    return 0;
}

