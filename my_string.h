//my_string_h
#pragma once

#include <iostream>

struct my_string
{
   my_string();
   my_string(char const *str);

   ~my_string();

   my_string(my_string const &otherStr);
   
   my_string &operator=(my_string const &rhs);

   char &operator[](size_t index);
   void push_back(char data);

   void extend_capacity();

   char const *data() const;
   size_t size() const;
   friend std::istream &operator>>(std::istream &in, my_string &rhs);

private:
   char *data_;
   size_t size_;
   size_t capacity_;
};