///   3.1.����������� ������
///   1. ����� �����, ��������� �� �����, ����������� �������� � �������������� ������.
///   �������� ������������ ������ ��������� �������� � ������.��������� ��� ������������ :
///   �) ���������� ���������� ��������� ��������� ������� � ������ ������ ������.
///   ��������� �������� ������� ������ � ������� ������� � ������;

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