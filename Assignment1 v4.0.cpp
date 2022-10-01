/*
C Program to create 4 list storing student data of Higher Diploma in Computing and the Master's Qualifiers.
The sorting criteria is used is Bubblesort.

Author - Ayan Abedin (D19125792)
Date - 20/0/2021
Compiler - Repl.it
*/

#include<stdio.h>
#include<string.h>
#define LENGTH 20
#define SIZE_1 13
#define SIZE_2 9
#define SIZE_3 14
#define SIZE_4 6

//Structure template
struct student {
    char name[LENGTH];
}s[100];

int main(){
    struct student DT265A[SIZE_1];
    struct student DT265C[SIZE_2];
    struct student DT265B[SIZE_3];
    struct student DT8900[SIZE_4];
    
    int i, j, k, l, m, n, q, r;
    
    //DT265A Student names
    strcpy(DT265A[0].name, "Bansal");//1
    strcpy(DT265A[1].name, "Lorenzen");//2
    strcpy(DT265A[2].name, "Bucholtz");//3
    strcpy(DT265A[3].name, "Marko");//4
    strcpy(DT265A[4].name, "Richard");//5
    strcpy(DT265A[5].name, "Traversini");//6
    strcpy(DT265A[6].name, "Joshi");//7
    strcpy(DT265A[7].name, "Bogdanovic");//8
    strcpy(DT265A[8].name, "Daubney");//9
    strcpy(DT265A[9].name, "Scrivenor");//10
    strcpy(DT265A[10].name, "Andries");//11
    strcpy(DT265A[11].name, "Jewel");//12
    strcpy(DT265A[12].name, "Karpati");//13
    
    
    //DT265C Student names
    strcpy(DT265C[0].name, "Collins");//1
    strcpy(DT265C[1].name, "Mohammed");//2
    strcpy(DT265C[2].name, "Ueda");//3
    strcpy(DT265C[3].name, "Sauber");//4
    strcpy(DT265C[4].name, "Hino");//5
    strcpy(DT265C[5].name, "Kanda");//6
    strcpy(DT265C[6].name, "Flynn");//7
    strcpy(DT265C[7].name, "Reese");//8
    strcpy(DT265C[8].name, "Langlais");//9
    
    
    //DT265B Student names
    strcpy(DT265B[0].name, "Vincce");//1
    strcpy(DT265B[1].name, "Beck");//2
    strcpy(DT265B[2].name, "Jordan");//3
    strcpy(DT265B[3].name, "Ahearn");//4
    strcpy(DT265B[4].name, "Soler");//5
    strcpy(DT265B[5].name, "Hickey");//6
    strcpy(DT265B[6].name, "Howe");//7
    strcpy(DT265B[7].name, "Obando");//8
    strcpy(DT265B[8].name, "Dwight");//9
    strcpy(DT265B[9].name, "Floinn");//10
    strcpy(DT265B[10].name, "Daniel");//11
    strcpy(DT265B[11].name, "Brinkerhoff");//12
    strcpy(DT265B[12].name, "Vukovic");//13
    strcpy(DT265B[13].name, "Rameckers");//14
    
    
    //DT8900 Student names 
    strcpy(DT8900[0].name, "Nikolaev");//1
    strcpy(DT8900[1].name, "Sharma");//2
    strcpy(DT8900[2].name, "Nepi");//3
    strcpy(DT8900[3].name, "Aarle");//4
    strcpy(DT8900[4].name, "Grunewald");//5
    strcpy(DT8900[5].name, "Potena");//6
    
    
    //Condition for sorting by surname
    //DT265A
    // for(i=0; i<SIZE_1; i++){
    //     for(j=i+1; j<SIZE_1; j++){
    //         if(strcmp(s[i].name) > 0)
    //         {
    //             DT265A = s[i];
    //             s[i] = s[j];
    //             s[j] = DT265A;
            }//end if
        }//end inner for
    }//end for
    
    
    //Condition for sorting by surname
    //DT265C
    // for(k=0; k<SIZE_2; k++){
    //     for(l=k+1; l<SIZE_1; l++){
    //         if(strcmp(s[k].name) > 0)
    //         {
    //             DT265A = s[k];
    //             s[k] = s[l];
    //             s[l] = DT265C;
            }//end if
        }//end inner for
    }//end for
    
    
    //Condition for sorting by surname
    //DT265B
    // for(m=0; m<SIZE_3; m++){
    //     for(n=m+1; n<SIZE_3; n++){
    //         if(strcmp(s[m].name) > 0)
    //         {
    //             DT265A = s[m];
    //             s[m] = s[n];
    //             s[n] = DT265B;
            }//end if
        }//end inner for
    }//end for
    
    
    //Condition for sorting by surname
    //DT8900
    // for(q=0; q<SIZE_4; q++){
    //     for(r=q+1; r<SIZE_1; r++){
    //         if(strcmp(s[q].name) > 0)
    //         {
    //             DT265A = s[q];
    //             s[q] = s[r];
    //             s[r] = DT8900;
            }//end if
        }//end inner for
    }//end for
    
    ////////////////////////////////////////////////////////
    //Printing the outputs
    printf("\n*******Welcome to Student Program.*******\n\n");
    
    /*------------------------For DT265A students-------------------------*/
    printf("\nDT265A - part-time Higher Diploma.");
    //Sorted Data after rearragement
    printf("\nSorted Data by Surname: ");
    printf("\n-----------\n");
    printf("\nSurname");
    printf("\n-----------\n");
  
    for(i=0; i<SIZE_1; i++)
  {
    printf("\n%-10s\n",s[i].name);
  }//end for  
    
    /*--------------------------------------------*/
    printf("\nDT265C - part-time Master's Qualifier.");
    //Sorted Data after rearragement
    printf("\nSorted Data by Surname: ");
    printf("\n-----------\n");
    printf("\nSurname");
    printf("\n-----------\n");
  
    for(k=0; k<SIZE_2; k++)
  {
    printf("\n%-10s\n",s[k].name);
  }//end for  
  
    /*--------------------------------------------*/
    printf("\nDT265B - full-time Master's Qualifiers.");
    //Sorted Data after rearragement
    printf("\nSorted Data by Surname: ");
    printf("\n-----------\n");
    printf("\nSurname");
    printf("\n-----------\n");
  
    for(m=0; m<SIZE_3; m++)
  {
    printf("\n%-10s\n",s[m].name);
  }//end for  
  
    /*--------------------------------------------*/
    printf("\nDT8900 - full-time International Master's Qualifiers.");
    //Sorted Data after rearragement
    printf("\nSorted Data by Surname: ");
    printf("\n-----------\n");
    printf("\nSurname");
    printf("\n-----------\n");
  
    for(q=0; q<SIZE_3; q++)
  {
    printf("\n%-10s\n",s[q].name);
  }//end for    
    
   
    return 0;
    
}//end main


