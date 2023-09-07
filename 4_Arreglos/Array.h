#pragma once
#include <string.h>
#include <iomanip>

//Clase de arreglo dinamico de 4 bytes
typedef unsigned __int32 uint32;
class Array
{
	size_t size;

public:
	uint32* array;

	//ctor
	Array(size_t newsize)
	{
		size = newsize;
		array = new uint32(size);
	}

	//destructor 
	~Array()
	{
		if (array != nullptr)
		{
			delete[] array;
			size = 0;
		}
	}

	//declara los metodos get set

	uint32 operator[](size_t index);
	
	uint32 Get(size_t index);
	void Set(size_t index, const char* bytes);
	void Set(size_t index, uint32 newvalue);

	size_t Size()
	{
		return size; 
	}


	//limpa, pone a 0 todo el arreglo
	void Clear();
		


};

