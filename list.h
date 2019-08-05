Status DisplayStu(StuNode *stu,int n); //依据存储顺序输出有 n 个结点的静态链表 stu
Status SortEnglish(StuNode *stu,int n); //在有 n 个结点的静态链表 stu 中,依据英语成绩降序排序
Status DisplayEnglish(StuNode *stu,int n); //依据英语成绩降序输出有 n 个结点的静态链表 stu
Status SortComputer(StuNode *stu,int n);
Status DisplayComputer(StuNode *stu,int n);
Status SortMath(StuNode *stu,int n);
Status DisplayMath(StuNode *stu,int n);
Status ClearMem(StuNode *stu,int array_size); //在程序退出前,释放静态链表 stu 的所有 size 个结点
