//list.c

#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include"list.h"

Status SortEnglish(StuNode *stu,int n){
	int i,j;
	if(n==0)
		return OK;
	stu[0].penglish=1;
	stu[1].penglish=-1;
	if(n==1)
		return OK;
	for(i=2;i<=n;i++){
		j=0;
		while(stu[j].penglish!=-1 && stu[stu[j].penglish].english>stu[i].english)
			j=stu[j].penglish;
		stu[i].penglish=stu[j].penglish;
		stu[j].penglish=i;
	}
	printf ("The sort is successfull\n");
}


Status DisplayEnglish(StuNode *stu,int n){
	int i,p;
	p=stu[0].penglish;
	while(p!=-1){
		printf("name:%s\n",stu[p].name);
		printf("num:%d\n",stu[p].num);
		printf("score:\nenglish     computer    math    \n%f  %f  %f\n",stu[p].english,stu[p].computer,stu[p].math);
		p=stu[p].penglish;
		printf("-------------------------------------------\n");
	}
}


Status SortComputer(StuNode *stu,int n){
	int i,j;
	if(n==0)
		return OK;
	stu[0].pcomputer=1;
	stu[1].pcomputer=-1;
	if(n==1)
		return OK;
	for(i=2;i<=n;i++){
		j=0;
		while(stu[j].pcomputer!=-1 && stu[stu[j].pcomputer].computer>stu[i].computer)
			j=stu[j].pcomputer;
		stu[i].pcomputer=stu[j].pcomputer;
		stu[j].pcomputer=i;
	}
	printf ("The sort is successfull\n");
}


Status DisplayComputer(StuNode *stu,int n){
	int i,p;
	p=stu[0].pcomputer;
	//printf("%d\n",stu[0].pcomputer);
	while(p!=-1){
		printf("name:%s\n",stu[p].name);
		printf("num:%d\n",stu[p].num);
		printf("score:\nenglish     computer    math    \n%f  %f  %f\n",stu[p].english,stu[p].computer,stu[p].math);
		p=stu[p].pcomputer;
		printf("-------------------------------------------\n");
	}

}


Status SortMath(StuNode *stu,int n){
	int i,j;
	if(n==0)
		return OK;
	stu[0].pmath=1;
	stu[1].pmath=-1;
	if(n==1)
		return OK;
	for(i=2;i<=n;i++){
		j=0;
		while(stu[j].pmath!=-1 && stu[stu[j].pmath].math>stu[i].math)
			j=stu[j].pmath;
		stu[i].pmath=stu[j].pmath;
		stu[j].pmath=i;
	}
	printf ("The sort is successfull\n");
}

Status DisplayMath(StuNode *stu,int n){
	int i,p;
	p=stu[0].pmath;
	printf("%d\n",stu[0].pmath);
	while(p!=-1){
		printf("name:%s\n",stu[p].name);
		printf("num:%d\n",stu[p].num);
		printf("score:\nenglish     computer    math    \n%f  %f  %f\n",stu[p].english,stu[p].computer,stu[p].math);
		p=stu[p].pmath;
		printf("-------------------------------------------\n");
		//getchar();
	}
}


Status DisplayStu(StuNode *stu,int n){
	int i;
	for(i=1;i<=n;i++){
		printf("name:%s\n",stu[i].name);
		printf("num:%d\n",stu[i].num);
		printf("score:\nenglish     computer    math    \n%f  %f  %f\n",stu[i].english,stu[i].computer,stu[i].math);
		printf("-----------------------------------------------\n");
	}
}
Status ClearMem(StuNode *stu,int array_size){
	int i;
	for(i=0;i<array_size;i++){
		free(stu);
		stu=NULL;
	}
}














