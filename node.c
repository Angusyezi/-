#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include"node.h"
#include"list.h"


Status InsertStu(StuNode **stu,int *n,int *array_size)
{
    int i,j;
    if((*n) == (*array_size))
    {
        (*stu) = (StuNode*)realloc((*stu),(*array_size)+10);
        (*array_size)+=10;
    }
    char enter;
    //system("reset");
    printf("\n\n\n\n\n\t\t  学 生 管 理 系 统\n");
    printf("\n\n\n\n\n\t\t  插入学生信息\n");
    printf("\n\n\t\t  学生姓名： ");
    scanf("%s",(*stu)[(*n)+1].name);
    enter=getchar();
    printf("\n\n\t\t  学号： ");
    scanf("%d",&((*stu)[(*n)+1].num));
    enter=getchar();
    printf("\n\n\t\t  英语成绩： ");
    scanf("%f",&((*stu)[(*n)+1].english));
    enter=getchar();
    printf("\n\n\t\t  数学成绩： ");
    scanf("%f",&((*stu)[(*n)+1].math));
    enter=getchar();
    printf("\n\n\t\t  计算机成绩： ");
    scanf("%f",&((*stu)[(*n)+1].computer));
    enter=getchar();

    (*n)++;

    printf("\n\n\t\t   插入成功");

    return OK;

}

Status DeleteStu(StuNode**stu,int *n,int *array_size)
{
	printf ("delete num:");
    int i, j,num;
    int flag = 0;
	scanf("%d",&num);
    for(i = 1; i <= (*n); i++)
    {
        if((*stu)[i].num == num)
        {

            for(j = i+1; j <= (*n); j++)
            {
                (*stu)[j-1] = (*stu)[j];
            }
            flag = 1;
        }
    }
    if(!flag)//û���ҵ�
    {
        printf("未找到学号为%d的学生",num);

        return OK;
    }

    else
    {
        printf("\n\n\t\t  删除成功\n");
        //sleep(2);
	    (*n)--;
        if( ( (*array_size) - (*n) ) >= 20)
        {
            (*stu) = (StuNode*) realloc((*stu),(*array_size) - 10);
            (*array_size) -= 10;
        }
        return OK;

    }
}
Status EditStu(StuNode *stu,int n,int num){
	int i;
	for(i=0;i<n;i++){
		if(stu[i].num==num)
			break;
	}
	printf("Input the name:\n");
	scanf("%s",stu[i].name);
	printf("Input the score:\n");
	scanf("%f %f %f",&stu[i].english,&stu[i].computer,&stu[i].math);
}

Status SearchStu(StuNode *stu,int n){
	int a,i;
	printf("Input the number:");
	scanf("%d",&a);
	for(i=1;i<=n;i++){
	    if(stu[i].num == a)
		 printf("\n\n\t\t 姓名：%s\n\n\t\t 学号：%d\n\n\t\t 英语：%.2f\n\n\t\t 计算机：%.2f\n\n\t\t 数学：%.2f\n\n",stu[i].name,stu[i].num,stu[i].english,stu[i].computer,stu[i].math);
		
	}
	return 0;
}







