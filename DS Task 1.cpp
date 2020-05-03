///   3.1.Односвязный список
///   1. Задан текст, состоящий из строк, разделенных пробелом и оканчивающийся точкой.
///   Написать подпрограмму поиска заданного элемента в списке.Используя эту подпрограмму :
///   а) подсчитать количество вхождений заданного символа в каждую строку текста.
///   Вхождение задавать номером строки и номером позиции в строке;

#include <iomanip>
#include <fstream>

#include "my_string.h"

int main()
{
   std::fstream in("input.txt");
   std::ofstream out("output.txt");

   my_string inputText;

   char const POINT_SYMBOL = '.';
   char const ENTER_SYMBOL = '\n';

   char wantedSymbol = '\0';
   in >> wantedSymbol;

   size_t charCnt = 0;
   size_t strCnt = 1;
   

   return 0;
}