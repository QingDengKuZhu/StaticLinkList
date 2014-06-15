#include "Data.h"
#include "Data_Base.h"
#include "Main_First.h"


void InitList(STATICLINKLIST pL, size_t list_len)
{
	/*
	**第一个元素的cur存放第一个有效结点的下标,最后一个结点的cur存放第一个无效结点的下标
	*/
	size_t i = 0;
	for (i=1; i<=list_len-2; ++i)
	{
		pL[i].cur = i+1;
	}

	pL[0].cur = 0;
	pL[list_len-1].cur = 1;

	return;
}

void TraveList(STATICLINKLIST pL, size_t list_len)
{
	size_t pos = pL[0].cur;
	while (pos != 0 && pos != pL[list_len-1].cur )
	{
		printf("%d ", pL[pos].data);
		pos = pL[pos].cur;
	}
	printf("\n");

	return;
}

size_t ListLength(STATICLINKLIST pL, size_t list_len)
{

}