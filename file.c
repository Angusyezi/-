//file.c
#include<stdio.h>
#include<stdlib.h>
#include"main.h"

#include"file.h"

Status Load(StuNode* *stu,int *n,int *array_size){
	FILE *fp=NULL;
	long len;
	int i;
	char filename[100];
	printf("Please input  your  file   name :");
	scanf("%s",filename);
	fp=fopen(filename,"rb");
	if(fp==NULL){
		printf("Can not open file\n");
		return IOERR;
	}
	fseek(fp,1,SEEK_END);
	len=ftell(fp);
	(*n)=len/sizeof(StuNode)-1;
	if((*n)>=(*array_size)){
		(*array_size)=(*n)+10;
		(*stu)=(StuNode*)realloc((*stu),(*array_size)*sizeof(StuNode));
	}
	rewind(fp);//fseek(fp,0,SEEK_SET);
	for(i=0;i<=(*n);i++)
		fread(&(*stu)[i],sizeof(StuNode),1,fp);
	fclose(fp);
	return OK;
}

Status Save(StuNode *stu,int n){
	FILE *fp=NULL;
    char filename[100];
	int i;
    printf("Input file name & path:");
    scanf("%s",filename);
	fp=fopen(filename,"wb");
	if(fp==NULL)
		;
	for(i=0;i<=n;i++)
		fwrite(&stu[i],sizeof(StuNode),1,fp);
		printf ("The save is successfully \n");
	fclose(fp);
	return OK;
}

Status DeleteAll(StuNode* *stu,int *n){
	FILE *fp=NULL;
	char filename[100];
	free(*stu);
	(*stu)=NULL;
	(*n)=0;
	printf("Input file name:");
    scanf("%s",filename);
	fp=fopen(filename,"wb");
	if(fp==NULL)
		;
	fclose(fp);
	return OK;
}
