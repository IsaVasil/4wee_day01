#include <stdio.h>
typedef struct Student{
    unsigned int courtses_taken;
    double grade;
    char name[9];
     unsigned char age;
}Student;
int main(){
    FILE* f=fopen("binary_structs","rb");
    Student students[5];
    fread(students,sizeof(Student),5,f);
    for(int i=0;i<5;i++){
printf("%lf %u %s %d\n",students[i].grade,students[i].courtses_taken,students[i].name,students[i].age);
    }
    fclose(f);
    return 0;
}