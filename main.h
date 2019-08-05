//main.h

#define OK 0
#define MEMERR 1
#define IOERR 2
#define ERROR 3
typedef int Status;
typedef struct node{
	char name[10];
	int num;
	float english;
	float computer;
	float math;
	int penglish;
	int pcomputer;
	int pmath;
}StuNode;
