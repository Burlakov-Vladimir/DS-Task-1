///   3.1.����������� ������
///   1. ����� �����, ��������� �� �����, ����������� �������� � �������������� ������.
///   �������� ������������ ������ ��������� �������� � ������.��������� ��� ������������ :
///   �) ���������� ���������� ��������� ��������� ������� � ������ ������ ������.
///   ��������� �������� ������� ������ � ������� ������� � ������;

#include <iomanip>
#include <fstream>

struct TextString
{
   TextString *p_nextSymbol = NULL;
   char symbolVal = '\0';
} *headList;

int main()
{
   std::fstream in("input.txt");
   std::ofstream out("putput.txt");

   TextString *headList = new TextString;

   const char POINT_SYMBOL = '.';

   char tmpSymbol = '\0';
   TextString *p_tmpSymbol = headList;
   while (tmpSymbol != POINT_SYMBOL)
   {
      p_tmpSymbol->p_nextSymbol = new TextString;
      p_tmpSymbol = p_tmpSymbol->p_nextSymbol;
      in >> tmpSymbol;
      p_tmpSymbol->symbolVal = tmpSymbol;
   }
   tmpSymbol = '\0';
   p_tmpSymbol = headList;

   const char ENTER_SYMBOL = '\n';

   char wantedSymbol = '\0';
   in >> wantedSymbol;

   size_t charCnt = 0;
   size_t strCnt = 1;
   while (tmpSymbol != POINT_SYMBOL)
   {

   }

   return 0;
}