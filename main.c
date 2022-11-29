#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rollno,grd,maths,science,english,sinhala,ict;
    char name[15],school[20];


    printf("Enter your Roll No: ");
    scanf("%d",&rollno);

    printf("Enter your name: ");
    scanf("%s",name);

    printf("Enter your school name: ");
    scanf("%s",school);

    printf("Enter your grade: ");
    scanf("%d",&grd);

    printf("Enter marks of Maths: ");
    scanf("%d",&maths);

    printf("Enter marks of Science: ");
    scanf("%d",&science);

    printf("Enter marks of English: ");
    scanf("%d",&english);

    printf("Enter marks of Sinhala: ");
    scanf("%d",&sinhala);

    printf("Enter marks of ICT: ");
    scanf("%d",&ict);

    printf("\n");
    printf("===================================================");

    printf("\n");
    printf("MARKSHEET OF GRAGE:%d, %s",grd,school);
    printf("\n");
    printf("===================================================");

    printf("\n");
    printf("Roll No.: %d\t Student Name: %s",rollno,name);
    printf("\n");

    printf("---------------------------------------------------");
    printf("\n");
    printf("SUBJECT\t\tMARKS");
    printf("\n");
    printf("---------------------------------------------------");
    printf("\n");

    printf("Maths\t\t%d",maths);
    printf("\n");
    printf("Science\t\t%d",science);
    printf("\n");
    printf("English\t\t%d",english);
    printf("\n");
    printf("Sinhala\t\t%d",sinhala);
    printf("\n");
    printf("ict\t\t%d",ict);
    printf("\n");
    printf("---------------------------------------------------");
    printf("\n");
    printf("Total Marks: \t%d",maths+science+english+sinhala+ict);
    printf("\n");
    printf("===================================================");
    printf("\n\n");
    printf("\t\t  Thank You!");
    printf("\n");


    return 0;
}
