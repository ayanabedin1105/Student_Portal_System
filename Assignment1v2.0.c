/*
C Program to create 4 list storing student data of Higher Diploma in Computing and the Master's Qualifiers.
The sorting criteria is used is Bubblesort.

Author - Ayan Abedin (D19125792)
Date - 20/0/2021
Compiler - Repl.it
*/

#include<stdio.h>
#include<string.h>
#define F_LENGTH 20
#define S_LENGTH 20
#define SIZE_1 13
#define SIZE_2 9
#define SIZE_3 14
#define SIZE_4 6

//Structure Template
struct DT265A { //for module DT265A
  int stud_ID;
  char first_name[F_LENGTH];
  char last_name[S_LENGTH];
}s[100];

struct DT265C { //for module DT265C
  int stud_ID;
  char first_name[F_LENGTH];
  char last_name[S_LENGTH];
}p[100];

struct DT265B { //for module DT265B
  int stud_ID;
  char first_name[F_LENGTH];
  char last_name[S_LENGTH];
}q[100];

struct DT8900 { //for module DT8900
  int stud_ID;
  char first_name[F_LENGTH];
  char last_name[S_LENGTH];
}r[100];


//Function Declaration
void display(struct DT265A stud);
void enter(struct DT265A stud);

int main(){
  // struct DT265A stud1;//Student 1
  // struct DT265A stud2;//Student 2
  // struct DT265A stud3;//Student 3
  // struct DT265A stud4;//Student 4
  // struct DT265A stud5;//Student 5
  // struct DT265A stud6;//Student 6
  // struct DT265A stud7;//Student 7
  // struct DT265A stud8;//Student 8
  // struct DT265A stud9;//Student 9
  // struct DT265A stud10;//Student 10
  // struct DT265A stud11;//Student 11
  // struct DT265A stud12;//Student 12
  // struct DT265A stud13;//Student 13

  
  // //Student 1
  // strcpy(stud1.first_name, "Raghav");
  // strcpy(stud1.last_name, "Bansal");

  // //Student 2
  // strcpy(stud2.first_name, "Meadow");
  // strcpy(stud2.last_name, "Lorenzen");

  // //Student 3
  // strcpy(stud3.first_name, "Scanite");
  // strcpy(stud3.last_name, "Bucholtz");

  // //Student 4
  // strcpy(stud4.first_name, "Darrin");
  // strcpy(stud4.last_name, "Marko");

  // //Student 5
  // strcpy(stud5.first_name, "Caiden");
  // strcpy(stud5.last_name, "Richard");

  // //Student 6
  // strcpy(stud6.first_name, "Leanora");
  // strcpy(stud6.last_name, "Traversini");

  // //Student 7
  // strcpy(stud7.first_name, "Ketill");
  // strcpy(stud7.last_name, "Joshi");

  // //Student 8
  // strcpy(stud8.first_name, "Oddbjorn");
  // strcpy(stud8.last_name, "Bogdanovic");

  // //Student 9
  // strcpy(stud9.first_name, "Genovefa");
  // strcpy(stud9.last_name, "Daubney");

  // //Student 10
  // strcpy(stud10.first_name, "Antigonus");
  // strcpy(stud10.last_name, "Scrivenor");

  // //Student 11
  // strcpy(stud11.first_name, "Brynja");
  // strcpy(stud11.last_name, "Andries");

  // //Student 12
  // strcpy(stud12.first_name, "Eufemia");
  // strcpy(stud12.last_name, "Jewel");

  // //Student 13
  // strcpy(stud13.first_name, "Ransu");
  // strcpy(stud13.last_name, "Karpati");


  //Creating a structure variable
  struct DT265A stud1;
  struct DT265C stud2;
  struct DT265B stud3;
  struct DT8900 stud4;

  int i, j;

	printf("\n*******Welcome to Student Program.*******\n\n");
	printf("\nComplete the following details below.\n");
  /*------------------------For DT265A students-------------------------*/
	printf("\nDT265A - part-time Higher Diploma.");
  	printf("\nEnter the details of the %d students for DT265A. \n", SIZE_1);

  for(i=0; i<SIZE_1; i++)
  {
    printf("\nEnter Student-%d Details", i+1);
    printf("\n------------------------------\n");
    printf("\nStudent Firstname: ");
    scanf("%s", s[i].first_name);

    printf("\nStudent Surname: ");
    scanf("%s", s[i].last_name);

  }//end for

  //Displaying data before Arrangement
  printf("\nNames entered are: ");
  printf("\n--------------------------------\n");
  printf("Firstname\tLastname");
  printf("\n--------------------------------\n");

  for(i=0;i<SIZE_1;i++)
  {
    printf("\n%-10s\t%3s\n", s[i].first_name, s[i].last_name);
  }//end for

  for(i=0;i<SIZE_1;i++)
  {
    for(j=i+1;j<SIZE_1;j++)
    {
      if(strcmp(s[i].last_name, s[j].last_name) > 0)
      {
        stud1 = s[i];
        s[i] = s[j];
        s[j] = stud1;
      }//end stringcmp if
    }//end inner for
  }//end for

  //Sorted data after rearranegment
  printf("\nSorted Data by Surname: ");
  printf("\n---------------------------------\n");
  printf("\nFirstname\tSurname");
  printf("\n---------------------------------\n");

  for(i=0; i<SIZE_1; i++)
  {
    printf("\n%-10s\t%3s\n",s[i].first_name, s[i].last_name);
  }//end for

  ///////////////////////////////////////////////////////////////////////////////////

  /*------------------------For DT265C students-------------------------*/
	printf("\n\n\nDT265C - part-time Master's Qualifier.");
  printf("\nEnter the details of the %d students for DT265C. \n", SIZE_2);

  for(i=0; i<SIZE_2; i++)
  {
    printf("\nEnter Student-%d Details", i+1);
    printf("\n------------------------------\n");
    printf("\nStudent Firstname: ");
    scanf("%s", p[i].first_name);

    printf("\nStudent Surname: ");
    scanf("%s", p[i].last_name);

  }//end for

  //Displaying data before Arrangement
  printf("\nNames entered are: ");
  printf("\n--------------------------------\n");
  printf("Firstname\tLastname");
  printf("\n--------------------------------\n");

  for(i=0;i<SIZE_2;i++)
  {
    printf("\n%-10s\t%3s\n", p[i].first_name, p[i].last_name);
  }//end for

  for(i=0;i<SIZE_2;i++)
  {
    for(j=i+1;j<SIZE_2;j++)
    {
      if(strcmp(p[i].last_name, p[j].last_name) > 0)
      {
        stud2 = p[i];
        p[i] = p[j];
        p[j] = stud2;
      }//end stringcmp if
    }//end inner for
  }//end for

  //Sorted data after rearranegment
  printf("\nSorted Data by Surname: ");
  printf("\n---------------------------------\n");
  printf("\nFirstname\tSurname");
  printf("\n---------------------------------\n");

  for(i=0; i<SIZE_2; i++)
  {
    printf("\n%-10s\t%3s\n",p[i].first_name, p[i].last_name);
  }//end for


  ///////////////////////////////////////////////////////////////////////////////
  /*------------------------For DT265B students-------------------------*/
	printf("\n\n\nDT265B - full-time Master's Qualifier.");
  printf("\nEnter the details of the %d students for DT265B. \n", SIZE_3);

  for(i=0; i<SIZE_3; i++)
  {
    printf("\nEnter Student-%d Details", i+1);
    printf("\n------------------------------\n");
    printf("\nStudent Firstname: ");
    scanf("%s", q[i].first_name);

    printf("\nStudent Surname: ");
    scanf("%s",q[i].last_name);

  }//end for

  //Displaying data before Arrangement
  printf("\nNames entered are: ");
  printf("\n--------------------------------\n");
  printf("Firstname\tLastname");
  printf("\n--------------------------------\n");

  for(i=0;i<SIZE_3;i++)
  {
    printf("\n%-10s\t%3s\n", q[i].first_name, q[i].last_name);
  }//end for

  for(i=0;i<SIZE_3;i++)
  {
    for(j=i+1;j<SIZE_3;j++)
    {
      if(strcmp(q[i].last_name, q[j].last_name) > 0)
      {
        stud3 = q[i];
        q[i] = q[j];
        q[j] = stud3;
      }//end stringcmp if
    }//end inner for
  }//end for

  //Sorted data after rearranegment
  printf("\nSorted Data by Surname: ");
  printf("\n---------------------------------\n");
  printf("\nFirstname\tSurname");
  printf("\n---------------------------------\n");

  for(i=0; i<SIZE_3; i++)
  {
    printf("\n%-10s\t%3s\n",q[i].first_name, q[i].last_name);
  }//end for  

  //////////////////////////////////////////////////////////////////////////////
  /*------------------------For DT8900 students-------------------------*/
	printf("\n\n\nDT8900 - full-time International Master's Qualifier.");
  printf("\nEnter the details of the %d students for DT8900. \n", SIZE_4);

  for(i=0; i<SIZE_4; i++)
  {
    printf("\nEnter Student-%d Details", i+1);
    printf("\n------------------------------\n");
    printf("\nStudent Firstname: ");
    scanf("%s", r[i].first_name);

    printf("\nStudent Surname: ");
    scanf("%s",r[i].last_name);

  }//end for

  //Displaying data before Arrangement
  printf("\nNames entered are: ");
  printf("\n--------------------------------\n");
  printf("Firstname\tLastname");
  printf("\n--------------------------------\n");

  for(i=0;i<SIZE_4;i++)
  {
    printf("\n%-10s\t%3s\n", r[i].first_name, r[i].last_name);
  }//end for

  for(i=0;i<SIZE_4;i++)
  {
    for(j=i+1;j<SIZE_4;j++)
    {
      if(strcmp(r[i].last_name, r[j].last_name) > 0)
      {
        stud4 = r[i];
        r[i] = r[j];
        r[j] = stud4;
      }//end stringcmp if
    }//end inner for
  }//end for

  //Sorted data after rearranegment
  printf("\nSorted Data by Surname: ");
  printf("\n---------------------------------\n");
  printf("\nFirstname\tSurname");
  printf("\n---------------------------------\n");

  for(i=0; i<SIZE_4; i++)
  {
    printf("\n%-10s\t%3s\n",r[i].first_name, r[i].last_name);
  }//end for  


  return 0;

}//end main
