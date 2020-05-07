//my_string_h
#pragma once

struct my_string
{
   my_string();

   ~my_string();

   char &operator[](size_t index);
   
   size_t size() const;

   void extend_capacity();
   void push_back(char data);

   friend std::istream &operator>>(std::istream &in, my_string &rhs);

private:
   char *data_;
   size_t size_;
   size_t capacity_;
};