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
void InitList(STATICLINKLIST pL, size_t list_len);

/*销毁静态单链表.*/
void DestroyList(STATICLINKLIST pL, size_t list_len);

/*将静态单链表清空.*/
void ClearList(STATICLINKLIST pL, size_t list_len);

/*判断静态单链表是否为空.若为空,函数返回TRUE;否者函数返回FALSE.*/
BOOL ListEmpty(STATICLINKLIST pL, size_t list_len);

/*返回静态单链表的长度*/
size_t ListLength(STATICLINKLIST pL, size_t list_len);

/*获取静态单链表中第pos个元素.若操作成功,函数返回OK,*e保存满足条件的结点的值;若操作失败,函数返回FAILE,*e为垃圾值.*/
STATUS GetElem(STATICLINKLIST pL, size_t list_len, const size_t pos, Elem *e);

/*返回静态单链表中第一个与v相等的元素的位序(从1开始).若成功函数返回相应的位序;否者返回0.*/
size_t LocateElem(STATICLINKLIST pL, size_t list_len , const Elem v);

/*在静态单链表中第pos个位置之前插入新的数据元素v(1 <= pos <= ListLength(pL)+1).若成功,函数返回OK;否者返回FAILE.*/
STATUS InsertList(STATICLINKLIST pL, size_t list_len, const size_t pos, const Elem v);

/*删除静态单链表中第pos个元素.若成功删除,函数返回OK,*e保存被删除元素的值;否者函数返回FAILE,*e为垃圾值.*/
STATUS DeleteList(STATICLINKLIST pL, size_t list_len, const size_t pos, Elem *e);

/*遍历输出静态单链表.*/
void TraveList(STATICLINKLIST pL, size_t list_len);

/*若备用结点缓冲区非空,则返回一个结点的下标,否则返回0*/
size_t Malloc_STATICLINKLIST(STATICLINKLIST pL, size_t list_len);

/*将下标为i的空闲结点收回到备用结点缓冲区*/
void Free_STATICLINKLIST(STATICLINKLIST pL, size_t list_len, size_t i);

#endif