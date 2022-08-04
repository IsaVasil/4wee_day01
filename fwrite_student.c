#include <stdio.h>
typedef struct Student{
   
    unsigned int courtses_taken;
    double grade;
    char name[9];
     unsigned char age;
}Student;
int main(){
    FILE* f=fopen("binary_structs","wb");
    Student students[5];
    students[0]=(Student){2.3,100,"KALOQN",30};
    students[1]=(Student){52.3,200,"ISA",40};
    students[2]=(Student){102.3,300,"STAMENKO",50};
    students[3]=(Student){152.3,400,"BOBI",60};
    students[4]=(Student){202.3,500,"PALIIKA",70};

fwrite(students, sizeof(Student),5,f);
fclose(f);
    //printf("%lu",sizeof(Student));
    return 0;
}