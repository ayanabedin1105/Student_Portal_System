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
} temp, temp1, temp2, temp3;

int main(){
    struct student DT265A[SIZE_1];
    struct student DT265C[SIZE_2];
    struct student DT265B[SIZE_3];
    struct student DT8900[SIZE_4];
    struct student merge[100];
    
    int i, j, k, l, m, n, q, r, s, index;
    
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
    
    /*-------------------------------------DT265A------------------------------------------*/
    //////////////////////////////////////////////////////////////////////////////////////////////////
    
    //Printing the outputs
    printf("\n*******Welcome to Student Program.*******\n\n");
    
    /*------------------------For DT265A students-------------------------*/
    printf("\n\nDT265A - part-time Higher Diploma.");
    
    for(i=0; i<SIZE_1; i++)
  {
  	printf("\n\t+----------+");
    printf("\n\t|%-10s|",DT265A[i].name);
  }//end for  
  printf("\n\t+----------+");
  
//   //Sorting data by surname using Bubblesort
//   for(i=0;i<SIZE_1;i++)
//   {
//       for(j=i+1;j<SIZE_1;j++)
//       {
//           if(strcmp(DT265A[i].name, DT265A[j].name) > 0)
//           {
//               temp = DT265A[i];
//               DT265A[i] = DT265A[j];
//               DT265A[j] = temp;
//           }//end if
//       }//end inner for
//   }//end for
  
//   //Sorted data after rearrangement
//   printf("\n\nSorted list by Surname.");
//   for(i=0; i<SIZE_1; i++)
//   {
//   	printf("\n\t+----------+");
//     printf("\n\t|%-10s|", DT265A[i].name);
//   }//end for  
//   printf("\n\t+----------+");
    
    /*-------------------------------------DT265C------------------------------------------*/
    ////////////////////////////////////////////////////////////////////////////////////////////
    /*--------------------------------------------*/
    printf("\n\n\nDT265C - part-time Master's Qualifier.");
    
    for(k=0; k<SIZE_2; k++)
  {
  	printf("\n\t+----------+");
    printf("\n\t|%-10s|",DT265C[k].name);
  }//end for  
  printf("\n\t+----------+");
  
//   //Sorting data by surname using Bubblesort
//   for(k=0;k<SIZE_2;k++)
//   {
//       for(l=k+1;l<SIZE_2;l++)
//       {
//           if(strcmp(DT265C[k].name, DT265C[l].name) > 0)
//           {
//               temp1 = DT265C[k];
//               DT265C[k] = DT265C[l];
//               DT265C[l] = temp1;
//           }//end if
//       }//end inner for
//   }//end for
  
//   //Sorted data after rearrangement
//   printf("\n\nSorted list by Surname.");
//   for(k=0; k<SIZE_2; k++)
//   {
//   	printf("\n\t+----------+");
//     printf("\n\t|%-10s|",DT265C[k].name);
//   }//end for  
//   printf("\n\t+----------+");
  
  /*-------------------------------------DT265B------------------------------------------*/
  //////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*--------------------------------------------*/
    printf("\n\n\nDT265B - full-time Master's Qualifiers.");

    for(m=0; m<SIZE_3; m++)
  {
  	printf("\n\t+----------+");
    printf("\n\t|%-10s|",DT265B[m].name);
  }//end for  
  printf("\n\t+----------+");
  
  
//   //Sorting by surname using Bubblesort
//   for(m=0; m<SIZE_3; m++)
//   {
//       for(n=m+1; n<SIZE_3; n++)
//       {
//           if(strcmp(DT265B[m].name, DT265B[n].name) > 0)
//           {
//               temp2 = DT265B[m];
//               DT265B[m] = DT265B[n];
//               DT265B[n] = temp2;
//           }//end if
//       }//end inner for
//   }//end for
  
//   //Sorted data after rearrangement
//   printf("\n\nSorted list by Surname.");
//   for(m=0; m<SIZE_3; m++)
//   {
//   	printf("\n\t+----------+");
//     printf("\n\t|%-10s|",DT265B[m].name);
//   }//end for  
//   printf("\n\t+----------+");
  
  /*-------------------------------------DT8900------------------------------------------*/
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*--------------------------------------------*/
    printf("\n\n\nDT8900 - full-time International Master's Qualifiers.");
    
    for(q=0; q<SIZE_4; q++)
  {
  	printf("\n\t+----------+");
    printf("\n\t|%-10s|",DT8900[q].name);
  }//end for
  printf("\n\t+----------+");  
  
//   //Sorting data by surname using Bubblesort
//   for(q=0; q<SIZE_4; q++)
//   {
//       for(r=q+1; r<SIZE_4; r++)
//       {
//           if(strcmp(DT8900[q].name, DT8900[r].name) > 0)
//           {
//               temp3 = DT8900[q];
//               DT8900[q] = DT8900[r];
//               DT8900[r] = temp3;
//           }//end if
//       }//end inner for
//   }//end for
  
//   //Sorted data after rearrangement
//   printf("\n\nSorted list by Surname.");
//   for(q=0; q<SIZE_4; q++)
//   {
//   	printf("\n\t+----------+");
//     printf("\n\t|%-10s|",DT8900[q].name);
//   }//end for
    
    /*-------------------------------------------------------------*/
    //Combining the Structures
    for(i=0;i<13;i++)
    {
        merge[index]= DT265A[i];
        printf("\n%s", merge[index].name);
        index++;
    }//end for
    
    for(k=0;k<9;k++)
    {
        merge[index] = DT265C[k];
        printf("\n%s", merge[index].name);
        index++;
    }//end for
    
    for(m=0;m<14;m++)
    {
        merge[index] = DT265B[m];
        printf("\n%s", merge[index].name);
        index++;
    }//end for
    
    for(q=0;q<6;q++)
    {
        merge[index] = DT8900[q];
        printf("\n%s", merge[index].name);
        index++;
    }//end for
    
    /*for(s=0;s<42;s++)
    {
        printf("\n%s", merge[s].name);
        s++;
    }//end for*/
   
    return 0;
    
}//end main


