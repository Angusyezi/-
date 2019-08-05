//main.c

#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include"node.h"
#include"list.h"
#include"file.h"

void menu(){
     printf("\t\t\t\t|---------------------STUDENT-------------------|\n");
	printf("\t\t\t\t|Welcome to Students information system!\n");
	printf(
           "\t\t\t\t|\t1.load\t\t\t                    \n"
		   "\t\t\t\t|\t2.Save\t\t\t                    \n"
		   "\t\t\t\t|\t3.DeleteAll\t\t\t               \n"
		   "\t\t\t\t|\t4.DisplayStu\t\t\t              \n"
		   "\t\t\t\t|\t5.DisplayEnglish\t\t\t          \n"
           "\t\t\t\t|\t6.DisplayComputer\t\t\t         \n"
           "\t\t\t\t|\t7.DisplayMath\t\t\t             \n"
		   "\t\t\t\t|\t8.InsertStu\t\t\t               \n"
		   "\t\t\t\t|\t9.DeleteStu\t\t\t               \n"
		   "\t\t\t\t|\t10.EditStu\t\t\t                \n"
		   "\t\t\t\t|\t11.SearchStu\t\t                \n"
		   "\t\t\t\t|\t12.SortEnglish\t\t              \n"
		   "\t\t\t\t|\t13.SortComputer\t\t             \n"
		   "\t\t\t\t|\t14.SortMath\t\t                 \n"
		   "\t\t\t\t|\t15.ClearMem\t\t                 \n"
		   "\t\t\t\t|\t16.Exit\t\t                     \n");
}

int main(){
	StuNode *stu=NULL;
	int n=0,array_size,a;
	array_size=10;
	stu=(StuNode*)malloc(array_size*sizeof(StuNode));

	printf("\n\n\n\t\t\t\t|Welcome to Students information system!\n\n\n");
	Load(&stu,&n,&array_size);

	while(1){
		menu();
		scanf("%d",&a);
		getchar();
		switch(a){
			case 1:Load(&stu,&n,&array_size);
				break;
			case 2:Save(stu,n);
				break;
			case 3:DeleteAll(&stu,&n);
				break;
			case 4:DisplayStu(stu,n);
				break;
			case 5:DisplayEnglish(stu,n);
				break;
			case 6:DisplayComputer(stu,n);
				break;
			case 7:DisplayMath(stu,n);
				break;
			case 8:InsertStu(&stu,&n,&array_size);
				break;
			case 9:DeleteStu(&stu,&n,&array_size);
				break;
			case 10:EditStu(stu,n,array_size);
				break;
			case 11:SearchStu(stu,n);
				break;
			case 12:SortEnglish(stu,n);
				break;
			case 13:SortComputer(stu,n);
				break;
			case 14:SortMath(stu,n);
				break;
			case 15:ClearMem(stu,array_size);
				break;
			case 16:printf("ByeBye!\n");
                    printf("press any keyboard\n");
                    getchar();
                    return 0;
		}
		getchar();

	}



	return 0;
}
