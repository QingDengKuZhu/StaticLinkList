/**********************
**静态单链表的基本操作.
***********************/
#ifndef DATA_BASE_H
#define DATA_BASE_H

#include "Main_First.h"
#include "Data.h"

/*
pL为指向静态单链表的指针,且pL不为NULL.
*/

/*构造一个空的静态单链表.*/
void InitList(PSTATICLINKLIST pL);

/*销毁静态单链表.*/
void DestroyList(PSTATICLINKLIST pL);

/*将静态单链表清空.*/
void ClearList(PSTATICLINKLIST pL);

/*判断静态单链表是否为空.若为空,函数返回TRUE;否者函数返回FALSE.*/
BOOL ListEmpty(PSTATICLINKLIST pL);

/*返回静态单链表的长度*/
size_t ListLength(PSTATICLINKLIST pL);

/*获取静态单链表中第pos个元素.若操作成功,函数返回OK,*e保存满足条件的结点的值;若操作失败,函数返回FAILE,*e为垃圾值.*/
STATUS GetElem(PSTATICLINKLIST pL, const size_t pos, Elem *e);

/*返回静态单链表中第一个与v相等的元素的位序(从1开始).若成功函数返回相应的位序;否者返回0.*/
size_t LocateElem(PSTATICLINKLIST pL, const Elem v);

/*在静态单链表中第pos个位置之前插入新的数据元素v(1 <= pos <= ListLength(pL)+1).若成功,函数返回OK;否者返回FAILE.*/
STATUS InsertList(PSTATICLINKLIST pL, const size_t pos, const Elem v);

/*删除静态单链表中第pos个元素.若成功删除,函数返回OK,*e保存被删除元素的值;否者函数返回FAILE,*e为垃圾值.*/
STATUS DeleteList(PSTATICLINKLIST pL, const size_t pos, Elem *e);

/*遍历输出静态单链表.*/
void TraveList(PSTATICLINKLIST pL);

/*若备用空间链表非空,则返回分配的结点的下标,否则返回0*/
size_t Malloc_STATICLINKLIST(PSTATICLINKLIST pL);

/*将下标为cur的空闲结点收回到备用结点*/
void Free_STATICLINKLIST(PSTATICLINKLIST pL, size_t pos);

#endif