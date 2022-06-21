#pragma once
namespace strlist {
	struct list
	{
		int value;
		struct list* next;
		struct list* prev;
	};
}