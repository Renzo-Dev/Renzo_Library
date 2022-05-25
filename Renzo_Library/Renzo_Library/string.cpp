#include "string.h"

size_t renzo::strlen(const char* str)
{
	size_t count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

renzo::string::string(const char* str)
{
	this->lenght_ = strlen(str);
	this->str_ = static_cast<char*>(malloc(lenght_+1));
	memcpy(this->str_, str, (lenght_+1));
}

const char* renzo::string::c_str() const noexcept
{
	return this->str_;
}

renzo::string::~string()
{
	free(this->str_);
}
