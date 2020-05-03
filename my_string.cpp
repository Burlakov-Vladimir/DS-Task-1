//my_string.cpp
#include <cstring>
#include <cstdlib>

#include "my_string.h"

my_string::my_string()
{
   data_ = (char*)malloc(1 * sizeof(char));
   size_ = 0;
   capacity_ = 1;
}


my_string::my_string(char const *str)
{
   size_ = strlen(str);
   capacity_ = size_;
   data_ = (char*)malloc((size_ + 1) * sizeof(char));
   memcpy(data_, str, size_ + 1);
}


my_string::~my_string()
{
   free(data_);
}


char& my_string::operator[](size_t index)
{
   return data_[index];
}


void my_string::push_back(char data)
{
   if (size_ == capacity_)
      extend_capacity();

   data_[size_] = data;
   size_++;
}


void my_string::extend_capacity()
{
   capacity_ *= 2;
   data_ = (char*)realloc(data_, capacity_ * sizeof(char));
}


size_t my_string::size() const
{
   return size_;
}


std::istream &operator>>(std::istream& in, my_string str)
{
   char currentSym;
   in >> currentSym;
   str.push_back(currentSym);

   return in;
}


char const* my_string::data() const
{
   return data_;
}
