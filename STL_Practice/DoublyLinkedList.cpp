#include <iostream>
#include "DoublyLinkedList.h"
#include "StructList.h"
using namespace strlist;
void DoublyLinkedList::PushBack(list** head, int value)
{
	list* newElement = new list;
	newElement->value = value;
	newElement->next = NULL;
	if (*head != NULL)
	{
		list* temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newElement;
		newElement->prev = temp;
	}
	else 
	{
		newElement->next = NULL;
		(*head) = newElement;
	}
	
}

void DoublyLinkedList::PushFront(list** head, int value)
{
	list* newElement = new list;
	newElement->value = value;
	newElement->prev = NULL;
	if (*head != NULL)
	{
		newElement->next = (*head);
		(*head)->prev = newElement;
		(*head) = newElement;
	}
	else
	{
		newElement->next = NULL;
		(*head) = newElement;
	}
}
