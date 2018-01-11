#include "muldiv.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc,char *argv[])
{
   char *n = argv[1];
   if(input_ck(n))
   {
      int x = atoi(n);
      struct muldiv_entry **table = generate_tables(x);
      print_tables(table,x);
      free_tables(table,x);
   }
   else
      std::cout << "Bad Input" << std::endl;

   return 0;
}
