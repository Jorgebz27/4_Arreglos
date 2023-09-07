#include "Array.h"

uint32 Array::operator[](size_t index)
{
	return Get(index); 
}

uint32 Array::Get(size_t index)
{
	if (index < size)
		return array[index];
	else return 0;
}

void Array::Set(size_t index, const char* bytes)
{
	uint32 res;
	std::memcpy(&res, bytes, 4); //copiar 4 bytes
	Set(index, res);
}

void Array::Set(size_t index, uint32 newvalue)
{
	if (index < size)
	{
		array[index] = newvalue;
	}
}

void Array::Clear()
{
	memset( array, 0, size * sizeof(uint32) );
}
