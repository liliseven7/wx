
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{
  char score; /*���*/
  char  name[10]; /*����*/ 
  char  num[15]; /*����*/ 
  char  email[20]; /*����*/ 
  char age[8]; /*����*/ 
  char adds[20]; /*סַ*/ 
}Person; 
Person pe[80];
int menu_select() 
{  char c; 
do{ system("cls");
 printf("\t\t?*****ͨѶ¼***** \n");
 printf("\t\t������������������\n"); 
 printf("\t\t�� 1. ��Ӽ�¼  ��\n");
 printf("\t\t�� 2. ��ʾ��¼  ��\n"); 
 printf("\t\t�� 3. ɾ����¼  ��\n"); 
 printf("\t\t�� 4. ��ѯ��¼  ��\n"); 
 printf("\t\t�� 5. �޸ļ�¼  ��\n"); 
 printf("\t\t�� 0. �˳�����  ��\n");
 printf("\t\t������������������\n");
 printf("\t\t����ѡ��(0-5):");
 c=getchar();
}while(c<'0'||c>'5');
return(c-'0');
}

int Input(Person per[],int n)
{ 
	int i=0;  
    char sign,x[10]; 
    while(sign!='n'&&sign!='N') 
	{
	  printf("\t���:");
	  scanf("\t%d",&per[n+i].score);
	  printf("\t����:");
	  scanf("\t%s",per[n+i].name);
	  printf("\t����:");
	  scanf("\t%s",per[n+i].age);
	  printf("\t�绰����:");
	  scanf("\t%s",per[n+i].num);
	  printf("\tͨѶסַ:");
	  scanf("\t%s",per[n+i].adds);
	  printf("\t��������:");
	  scanf("\t%s",per[n+i].email);
	  gets(x);
	  printf("\n\t�Ƿ�������?(Y/N)");
	  scanf("\t%c",&sign);
	  i++; 
	} 
  return(n+i); 
} 
void Display(Person per[],int n) 
{
	int i;printf("----------------------------------------------------------------------\n"); /*��ʽ*/
	printf("��� ���� ���� �绰���� ͨѶ��ַ ��������\n");
	printf("----------------------------------------------------------------------\n");
	for(i=1;i<n+1;i++)
	{
		printf("%-5d%-8s%-6s%-13s%-15s%-15s\n",per[i-1].score,per[i-1].name,per[i-1].age,per[i-1].num,per[i-1].adds,per[i-1].email);
		if(i>1&&i%10==0)
		{
			printf("\t-----------------------------------\n");
			printf("\t");
			system("pause");
			printf("\t-----------------------------------\n");
		}
	}
	printf("----------------------------------------------------------------------\n");
	system("pause");
 } 
int Delete_a_record(Person per[],int n) 
{
	char s[20];
	int i=0,j;
	printf("\t��������ɾ����¼�е�����:");
	scanf("%s",s);
	while(strcmp(per[i].name,s)!=0&&i<n)
		i++;
	if(i==n)
	{
		printf("\tͨѶ¼��û�д���!\n");
		return(n);
	}
	for(j=i;j<n-1;j++)
	{ 
		strcpy(per[j].num,per[j+1].num);
		strcpy(per[j].name,per[j+1].name);
		strcpy(per[j].age,per[j+1].age);
		strcpy(per[j].adds,per[j+1].adds);
		strcpy(per[j].email,per[j+1].email);
		per[j].score=per[j+1].score;
	}
	printf("\t\t\t�Ѿ��ɹ�ɾ��!\n");
	return(n-1);
}

void Query_a_record(Person per[],int n)
{
	int m;
	printf("\t\n��ѡ���ѯ��ʽ:\n");
	printf("\t����������������\n");
	printf("\t��1------����?��\n");
	printf("\t��2------�绰?��\n");
	printf("\t��3------��ַ?��\n");
	printf("\t��4------����?��\n");
	printf("\t����������������\n");
	printf("��ѡ��:");
	scanf("%d",&m);
   while(m!=1&&m!=2&&m!=3&&m!=4)
   {
	   printf("�������������ѡ��:");
	   scanf("%d",&m);
   }
   if(m==1)
   {
	   char s[20];
	   int i=0;
	   printf("\t���������ѯ������:");
	   scanf("\t%s",s);
	   while(strcmp(per[i].name,s)!=0&&i<n) i++;
	   if(i==n)
	   {
		   printf("\tͨѶ¼��û�д���!\n");
		   return;
	   }
	   printf("\t���˱��: %d\n",per[i].score);
       printf("\t��������: %s\n",per[i].age);
	   printf("\t�绰����: %s\n",per[i].num);
	   printf("\tͨѶ��ַ: %s\n",per[i].adds);
	   printf("\t��������: %s\n",per[i].email);
   }
  if(m==2)
  {
	  char s[20];
	  int i=0;
	  printf("\t���������ѯ�ĵ绰:");
	  scanf("\t%s",s);
	  while(strcmp(per[i].num,s)!=0&&i<n) i++;
	  if(i==n)
	  {
		  printf("\tͨѶ¼��û�д���!\n");
		  return;
	  }


	  printf("\t���˱��: %d\n",per[i].score);
	  printf("\t��������: %s\n",per[i].name);
	  printf("\t��������: %s\n",per[i].age);
	  printf("\tͨѶ��ַ: %s\n",per[i].adds);
	  printf("\t��������: %s\n",per[i].email);
  }

 if(m==3)
 {
	 char s[20];
	 int i=0;
	 printf("\t���������ѯ�ĵ�ַ:");
	 scanf("\t%s",s);
	 while(strcmp(per[i].adds,s)!=0&&i<n) i++;
	 if(i==n)
	 {
		 printf("\tͨѶ¼��û�д���!\n");
		 return;
	 }
	 printf("\t���˱��: %d\n",per[i].score);
	 printf("\t��������: %s\n",per[i].name);
	 printf("\t��������: %s\n",per[i].age);
	 printf("\t�绰����: %s\n",per[i].num);
	 printf("\t��������: %s\n",per[i].email);
 }
}



void Change(Person per[],int n)
  {  char s[20]; 
     int i=0;    
	 printf("\t���������޸ĵļ�¼�е�����:");   
	 scanf("%s",s);   
	 while(strcmp(per[i].name,s)!=0&&i<n) i++;   
	 if(i==n)   
	 {   
		 printf("\tͨѶ¼��û�д���!\n");   
		 return;  
	 }   
	 printf("\t���:");   
	 scanf("\t%d",&per[i].score);   
	 printf("\t����:");   
	 scanf("\t%s",per[i].name);   
	 printf("\t����:");   
	 scanf("\t%s",per[i].age);  
	 printf("\t�绰����:");   
	 scanf("\t%s",per[i].num);  
	 printf("\tͨѶסַ:");   
	 scanf("\t%s",per[i].adds); 
	 printf("\t��������:");  
	 scanf("\t%s",per[i].email); 
	 printf("\t�޸ĳɹ���");
 }   
// void WritetoText(Person per[],int n)            
 //{  
//	 int i=0;  
	// FILE *fp;                                           /*�����ļ�ָ��*/  
	// char filename[20];                                  /*�����ļ���*/  
	// printf("\t���浽�ļ�\n");                          /*�����ļ���*/ 
	// printf("\t��������������ļ���:");   scanf("\t%s",filename);  
	// if((fp=fopen(filename,"w"))==NULL)                    
	// {    
	//	 printf("\t�޷����ļ�\n");    
		// system("pause");   
		// return;  
// }  
//	 fprintf(fp,"******************************************ͨѶ¼******************************************\n");  
	// fprintf(fp,"���     ����   ����      �绰����           ͨѶ��ַ             ��������\n");  
	 //fprintf(fp,"------------------------------------------------------------------------------------------\n");  
	// while(i<n)  
	// {    
	//	 /fprintf(fp,"%-3d\t%-6s\t%-3s\t%-13s\t%-20s\t%-20s\n",per[i].score,per[i].name,per[i].age,per[i].num,per[i].adds,per[i].email);   
		// i++;  
	 //}  
	// fprintf(fp,"------------------------------------------------------------------------------------------\n"); 
	 //fprintf(fp,"***************************************����%d����¼****************************************\n",n); 
	// fclose(fp);                                         /*�ر��ļ�*/  
	 //printf("����ɹ�!\n"); 
 //}   
 void main()                                         /*������*/
 {   
	 int n=0;   
     for(;;) 
	 {   
		 switch(menu_select())   
		 {    
		   case 1:   
		   printf("\n\t��Ӽ�¼��ͨѶ¼\n");                         /*��Ӽ�¼*/    
		   n=Input(pe,n);    
		   break;     
		  
		   case 2:   
		   printf("\n\t\t\t    ͨѶ¼��¼��\n");                      /*��ʾ��¼*/    
	   	   Display(pe,n);    break;     
		
		   case 3:    printf("\n\t��ͨѶ¼��ɾ����¼\n");   
	 	   n=Delete_a_record(pe,n);          /*ɾ����¼*/   
		   printf("\t");   
		   system("pause");  
		   break;   
           
		   case 4:     
			   printf("\n\t��ͨѶ¼�в��Ҽ�¼\n");   
			   Query_a_record(pe,n);           /*���Ҽ�¼*/    
			   printf("\t");     system("pause");   
			   break;     
		   case 5:     
			   printf("\n\t�޸�ͨѶ¼�еļ�¼\n");   
			   Change(pe,n);            /*�޸�����*/    
			   printf("\t");   
			   system("pause");   
			   break;     
		  // case 6:    
			 //  printf("\n\t���湦��\n");  
			  // WritetoText(pe,n);              /*��������*/   
			  // printf("\t");   
			  // system("pause");  
			  // break;    
		   case 0:   
			   printf("\n\t\tллʹ�ã��ټ�!\n");                         /*��������*/   
			   printf("\n\t\t");   
			   system("pause");   
			   exit(0);  
		 }    
	 }  
 } 






































