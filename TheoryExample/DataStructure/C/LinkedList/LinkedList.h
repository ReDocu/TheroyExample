#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

/* 싱글 링크드리스트 */
template <typename T>
struct SLLNode
{
	T data;
	SLLNode* next;
};

/* 싱글 링크드리스트 구현 내역*/ 

// 노드 생성
template <typename T>
SLLNode<T>* SLL_CreateNode(T newData);

template <typename T>
void SLL_DestroyNode(SLLNode<T>* Node);

template <typename T>
void SLL_AppendNode(SLLNode<T>** Head, SLLNode<T>* NewNode);

template <typename T>
void SLL_InsertAfter(SLLNode<T>* Current, SLLNode<T>* NewNode);

template <typename T>
void SLL_InsertNewHead(SLLNode<T>** Head, SLLNode<T>* NewHead);

template <typename T>
void SLL_RemoveNode(SLLNode<T>** Head, SLLNode<T>* Remove);

template <typename T>
SLLNode<T>* SLL_GetNodeAt(SLLNode<T>* Head, int location);

template <typename T>
SLLNode<T>* SLL_GEtNodeCount(SLLNode<T>* Head);

#endif