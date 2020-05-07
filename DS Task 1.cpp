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

   my_string inputStr;

   char const POINT_SYMBOL = '.';

   while (inputStr[inputStr.size() - 1] != POINT_SYMBOL)
      in >> inputStr;
   inputStr.push_back('\n');

   char wantedChar = '\0';
   in >> wantedChar;

   size_t wantedCharCnt = 0;
   size_t wantedCharPos = 0;
   size_t strCnt = 1;

   char const ENTER_SYMBOL = '\n';

   for (size_t currentIndex = 0; currentIndex < inputStr.size(); currentIndex++)
   {
      wantedCharPos++;

      if (inputStr[currentIndex] == wantedChar)
      {
         wantedCharCnt++;

         out << "Symbol '" << wantedChar << "' has " << wantedCharCnt << "th position in line "
            << strCnt << std::endl;
      }

      if (inputStr[currentIndex] == ENTER_SYMBOL)
      {
         out << "Count of '" << wantedChar << "' in " << strCnt << "th line is " 
            << wantedCharCnt << std::endl << std::endl;

         wantedCharCnt = 0;
         strCnt++;
      }
   }
   
   return 0;
}