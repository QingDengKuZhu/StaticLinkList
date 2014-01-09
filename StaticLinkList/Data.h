﻿/*****************
**静态链表数据结构
**静态链表的第一个结点的游标存放的是第一个没有元素的结点的下标,最后一个结点的游标存放的是第一个有元素的结点的下标,除此之外,每一个结点的游标存放的是下一个结点的下标.
*****************/
#ifndef DATA_H
#define DATA_H

#include "Main_First.h"

typedef int Elem;
#define MAX_SIZE 1000	/*静态单链表中最多存储结点数目.*/

/*************************************
**结点的数据结构.
**************************************/
typedef struct Node
{
	Elem data;	/*数据.*/
	size_t cur;	/*游标.*/ 

} NODE, *PNODE;

/*************************************
**链表结构
**************************************/
typedef struct StaticLinkList 
{
	NODE elem[MAX_SIZE+2];	/*第一个结点和最后一个结点不存储元素.*/

} STATICLINKLIST, PSTATICLINKLIST;

#endif