#include "LinkedList.h"

template<typename T>
SLLNode<T>* SLL_CreateNode(T NewData)
{
	SLLNode<T>* NewNode = (SLLNode<T>*)malloc(sizeof(SLLNode<T>));

	NewNode->data = NewData;
	NewNode->next = NULL;

	return NewNode;
}

template<typename T>
void SLL_DestroyNode(SLLNode<T>* Node)
{
	free(Node);
}

template<typename T>
void SLL_AppendNode(SLLNode<T>** Head, SLLNode<T>* NewNode)
{
	if ((*Head) == NULL)
	{
		*Head = NewNode;
	}
	else
	{
		/* 테일을 찾아 NewNode를 연결한다. */
		SLLNode<T>* Tail = (*Head);
		while (Tail->next != NULL)
		{
			Tail = Tail->next;
		}
		Tail->NextNode = NewNode;
	}
}

template<typename T>
void SLL_InsertAfter(SLLNode<T>* Current, SLLNode<T>* NewNode)
{
}

template<typename T>
void SLL_InsertNewHead(SLLNode<T>** Head, SLLNode<T>* NewHead)
{
}

template<typename T>
void SLL_RemoveNode(SLLNode<T>** Head, SLLNode<T>* Remove)
{
}

template<typename T>
SLLNode<T>* SLL_GetNodeAt(SLLNode<T>* Head, int location)
{
	return nullptr;
}

template<typename T>
SLLNode<T>* SLL_GEtNodeCount(SLLNode<T>* Head)
{
	return nullptr;
}
