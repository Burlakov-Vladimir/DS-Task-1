//my_string.cpp
#include <cstring>
#include <cstdlib>
#include <iomanip>

#include "my_string.h"

my_string::my_string()
{
   data_ = reinterpret_cast<char *>(malloc(1 * sizeof(char)));
   size_ = 0;
   data_[size_] = '\0';
   capacity_ = 0;
}


my_string::~my_string()
{
   free(data_);
}


char &my_string::operator[](size_t index)
{
   return data_[index];
}


size_t my_string::size() const
{
   return size_;
}


void my_string::extend_capacity()
{
   if (capacity_ == 0)
   {
      capacity_++;
   }

   capacity_ *= 2;
   data_ = reinterpret_cast<char *>(realloc(data_, capacity_ * sizeof(char)));
}


void my_string::push_back(char data)
{
   if (size_ >= capacity_)
      extend_capacity();

   data_[size_] = data;
   size_++;
}


std::istream &operator>>(std::istream &in, my_string &rhs)
{
   char tempReadChar = '\0';
   in >> std::noskipws >> tempReadChar;
   rhs.push_back(tempReadChar);

   return in;
}
