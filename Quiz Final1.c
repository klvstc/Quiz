#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
char menuController();
char DisplayResult(FILE *fp);
char StartQuiz(FILE *fp);
char RunQuiz(FILE *fp);
static int i[30];
static char cat[20][30];
static char question[30][200];
static char op1[30][50];
static char op2[30][50];
static char op3[30][50];
static char op4[30][50];
static int correct[30];
static int seqno[30]={0};
static int seq[10];
int j=0;
int marks1=0;
int marks2=0;
int marks3=0;
int total=0;
static char name2[30];
static int answer[10];
int main()
	{FILE *fp;
   	char name1;
   	menuController();
   	fp = fopen("input.txt", "r");
	StartQuiz(fp);
	RunQuiz(fp);
	DisplayResult(fp);
	}


   char StartQuiz(FILE *fp)
   {
	 printf("Enter Your Name");
	 printf("\n");
	 scanf("%s",name2);
	 system("cls");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else
	{for(j=0;j<30;j++)
	{fscanf(fp,"%d%s",&i[j],&cat[j]);
	fgets (question[j],200,fp);
	fscanf(fp,"%s",&op1[j]);
	fscanf(fp,"%s",&op2[j]);
	fscanf(fp,"%s",&op3[j]);
	fscanf(fp,"%s",&op4[j]);
	fscanf(fp,"%d%d",&correct[j],&seqno[j]);}}

    int x=0;
    int z2=0;
    srand(time(NULL));
	for(;z2<10;)
    {x=(rand()%30)+1;
	 seq[z2]=x;
	 z2++;
   }}
   char RunQuiz(FILE *fp)
   {int ans;
	int z=0;
	for(z=0;z<10;z++)
	{int z1=seq[z]-1;
	printf("Question Category:%s\nQuestion Number:%d\nQuestion:%s\n 1. %s\n 2. %s\n 3. %s\n 4. %s\n",cat[z1],(z+1),question[z1],op1[z1],op2[z1],op3[z1],op4[z1]);
	printf("Enter your Answer as 1,2,3,4\n");
	scanf("%d",&ans);
	answer[z1]=ans;
	printf("\n");
	if(ans==correct[z1])
	{total=total+1;
	  if(seqno[z1]==1)
	    {marks1=marks1+1;}
	  if(seqno[z1]==2)
	    {marks2=marks2+1;}
	  if(seqno[z1]==3)
	    {marks3=marks3+1;}
	}
	system("cls");
    }}
    char DisplayResult(FILE *fp)
    {printf("%d\n",total);
	printf("Congratulations You have completed the Quiz\n");
	printf("%s your Total Marks is %d\n",name2,total);
	int q=0;
	for(q=0;q<10;q++)
	{int z5=seq[q]-1;
	 printf("Question Category:%s\n",cat[z5]);
	 if(correct[z5]==1)
	 {printf("Correct Answer:%s\n",op1[z5]);}
	  else if(correct[z5]==2)
	 {printf("Correct Answer:%s\n",op2[z5]);}
	  else if(correct[z5]==3)
	 {printf("Correct Answer:%s\n",op3[z5]);}
	  else if(correct[z5]==4)
	 {printf("Correct Answer:%s\n",op4[z5]);}

	 	 if(answer[z5]==1)
	 {printf("Entered Answer:%s\n",op1[z5]);}
	  else if(answer[z5]==2)
	 {printf("Entered Answer:%s\n",op2[z5]);}
	  else if(answer[z5]==3)
	 {printf("Entered Answer:%s\n",op3[z5]);}
	  else if(answer[z5]==4)
	 {printf("Entered Answer:%s\n",op4[z5]);}
	 printf("\n");
	 int xz;
	 printf("Enter 1 to proceed\n");
	 scanf("%d",&xz);
	 if(xz==1)
	system("cls");
	}
	printf("-----------------------------------\n");
    printf("Marks across General category %d\n",marks1);
	printf("Marks across Technology category %d\n",marks2);
	printf("Marks across Business category %d\n",marks3);
	printf("-----------------------------------\n");
	printf("-----------------------------------\n");
	printf("Enter 1 to exit\n");
	int xy;
	scanf("%d",&xy);
	if(xy==1)
	{exit(10000);}
	}

	char menuController()
	{printf("Welcome to SC 1.0\n");
	 printf("-------------------\n");
	 printf("Developed by Tanishq Agarwal\n");
	 printf("----------------------------\n");
	 printf("\n");
	 printf("Your Options:\n");
	 printf("          1. Start the Quiz\n");
	 printf("          2. Exit\n");
	 printf("----------------------------");
	 printf("\n");
	 int sel;
	 scanf("%d",&sel);
	 if(sel==1)
	 {}
	 else if(sel==2)
	 {exit(0);
	 }
	}
