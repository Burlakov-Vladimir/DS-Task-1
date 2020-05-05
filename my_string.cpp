//my_string.cpp
#include <cstring>
#include <cstdlib>
#include <iomanip>

#include "my_string.h"

my_string::my_string()
{
   data_ = (char *)malloc(1 * sizeof(char));
   size_ = 0;
   data_[size_] = '\0';
   capacity_ = 0;
}


my_string::my_string(char const *str)
{
   size_ = strlen(str);
   capacity_ = size_;
   data_ = (char *)malloc((size_ + 1) * sizeof(char));
   memcpy(data_, str, size_ + 1);
}


my_string::my_string(my_string const &otherStr)
{
   size_ = otherStr.size_;
   capacity_ = otherStr.size_;
   data_ = (char *)malloc((size_ + 1) * sizeof(char));
   memcpy(data_, otherStr.data_, size_ + 1);
}


my_string::~my_string()
{
   free(data_);
}


my_string &my_string::operator=(my_string const &rhs)
{
   if (this == &rhs)
      return *this;

   free(data_);

   size_ = rhs.size_;
   capacity_ = rhs.size_;
   data_ = (char *)malloc((size_ + 1) * sizeof(char));
   memcpy(data_, rhs.data_, size_ + 1);

   return *this;
}


char &my_string::operator[](size_t index)
{
   return data_[index];
}


void my_string::push_back(char data)
{
   if (size_ >= capacity_)
      extend_capacity();

   data_[size_] = data;
   size_++;
}


void my_string::extend_capacity()
{
   if (capacity_ == 0)
   {
      capacity_++;
   }

   capacity_ *= 2;
   data_ = (char *)realloc(data_, capacity_ * sizeof(char));
}


size_t my_string::size() const
{
   return size_;
}


std::istream &operator>>(std::istream &inStream, my_string &rhs)
{
   char tempReadChar = '\0';
   inStream >> std::noskipws >> tempReadChar;
   rhs.push_back(tempReadChar);

   return inStream;
}


char const *my_string::data() const
{
   return data_;
}
