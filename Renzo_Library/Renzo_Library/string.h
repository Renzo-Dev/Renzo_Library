#pragma once
#include <iostream>


// my namespace
namespace renzo
{
	size_t strlen(const char* str);

	// my type string ( class )
	typedef class string
	{
		char* str_ = nullptr;
		size_t lenght_ = 0;
	public:

		string(const char* str);

		const char* c_str() const noexcept;

		~string();
	}string;
}