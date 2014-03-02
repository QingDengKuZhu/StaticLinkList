/*************************************
**数组下标为i,游标为cur, 位序为pos.
**************************************/

#include "Data.h"
#include "Data_Base.h"
#include "Main_First.h"

void InitList(PSTATICLINKLIST pL)
{
	size_t i = 0;
	/*
	**分配空间
	*/
	pL.elem = (PNODE*) malloc(sizeof(NODE) * MAX_LENGTH);
	if (!pL.elem)
	{
		printf("静态单链表初始化失败!\n");
		exit(ERROR);
	}

	/*
	**分配游标,静态链表的第一个结点的游标存放的是第一个有元素的结点的下标,
	**最后一个结点的游标存放的是第一个没有元素的结点的下标.
	**除此之外,每一个结点的游标存放的是下一个结点的下标.
	*/
	for (i=1; i<MAX_LENGTH-1; ++i)
	{
		pL.elem[i].cur = i+1;
	}
	pL.elem[0].cur = 0;
	pL.elem[MAX_LENGTH-1].cur = 1;
	
	pL.max_length = MAX_SIZE;
	
	return;
}



void DestroyList(PSTATICLINKLIST pL)
{
	free(pL.elem);
	pL.elem = NULL;
	pL.max_length = 0;

	return;

}





void ClearList(PSTATICLINKLIST pL)
{
	/*
	**清空元素后,静态链表状态和链表初始化后的状态相似.
	*/
	size_t i = 0;

	for (i=1; i<MAX_LENGTH-1; ++i)
	{
		pL.elem[i].cur = i+1;
	}
	pL.elem[0].cur = 0;
	pL.elem[MAX_LENGTH-1].cur = 1;

	
}

BOOL ListEmpty(PSTATICLINKLIST pL)
{
	if (0 == pL.elem[0])
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}



size_t ListLength(PSTATICLINKLIST pL)
{
	size_t cn = 0;	/*结点计数*/
	size_t i = pL.elem[0].cur;
	
	if (TRUE == ListEmpty(pL))
	{
		return cn;
	}
	else
	{
		while (pL.elem[MAX_LENGTH-1].cur != i)
		{
			++cn;
			i = pL.elem[i].cur;
		}

		return cn;
	}
}





STATUS GetElem(PSTATICLINKLIST pL, const size_t pos, Elem *e)
{
	size_t cn = 0;	/*结点计数*/
	size_t i = pL.elem[0].cur;
	
	if (TRUE == ListEmpty(pL))
	{
		return FAILE;
	}
	else
	{
		while (pL.elem[MAX_LENGTH-1].cur != i)
		{
			++cn;
			if (pos == cn)
			{
				i = pL.elem[i].cur;
				*e = pL.elem[i].data;
				return OK;
			}	
		}
		/*当pos大于静态链表长度时,返回FAILE.*/
		return FAILE;
		
	}
}



size_t LocateElem(PSTATICLINKLIST pL, const Elem v)
{
	size_t i = pL.elem[0].cur;
	size_t pos = 0;

	if (TRUE == ListEmpty(pL))
	{
		return pos;
	}
	else
	{
		while (pL.elem[MAX_LENGTH-1].cur != i)
		{
			++pos;
			if (v == pL.elem[i].data)
			{
				return pos;
			}

			i = pL.elem[i].cur;
		}
		/*当pos大于静态链表长度时,返回FAILE.*/
		return 0;
	}
}



STATUS InsertList(PSTATICLINKLIST pL, const size_t pos, const Elem v)
{
	PNODE p = pL.elem[0].cur;
	PNODE pnew;
	size_t i = 1;

	if (pos<1)
	{
		return FAILE;
	}

	/*
	**寻找插入点
	*/

	while ()
	{
	}
}



void TraveList(PSTATICLINKLIST pL)
{
	size_t i = pL.elem[0].cur;
	if (TRUE == ListEmpty(pL))
	{
		return;
	}

	while (MAX_LENGTH-1 != i)
	{
		printf("%d ", pL.elem[i].data);
		++i;
	}

	return;

}



size_t Malloc_STATICLINKLIST(PSTATICLINKLIST pL)
{
	if (pL.elem[MAX_LENGTH-1].cur != MAX_LENGTH-1)
	{
		return pL.elem[MAX_LENGTH-1].cur;
	}
	else
	{
		return 0;
	}
}



void Free_STATICLINKLIST(PSTATICLINKLIST pL, size_t i)
{
	if (i<1 || i>MAX_LENGTH-1)
	{
		return;
	}
	else
	{
		pL.elem[i].cur = pL.elem[MAX_LENGTH-1].cur;
		pL.elem[MAX_LENGTH-1].cur = i;
		
		return;
	}

}