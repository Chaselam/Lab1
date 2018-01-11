#include <iostream>
#include <cstdlib>
#include <string.h>
#include "muldiv.hpp"

using namespace std;

struct muldiv_entry** generate_tables(int n)
{
   struct muldiv_entry** table = new struct muldiv_entry*[n];

   for(int i=0; i<n; i++)  //Create Table
   {
     table[i] = new struct muldiv_entry[n];
   }
   
   for(int j=0; j<n; j++) //Fill Table
   {
      float row = j+1;

      for(int k=0; k<n; k++)
      {
	 table[j][k].mul = (k+1)*row; //Multiplication
	 table[j][k].div = (k+1)/row; //Division
      }
   }
return table;
}

void print_tables(struct muldiv_entry** table, int n)
{
   std::cout << std::endl;
   std::cout << "Multiplication Table:  " << std::endl;

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
	 std::cout << table[i][j].mul << "  ";
      }
      std::cout << std::endl;
   }

   std::cout << std::endl;
   std::cout << "Division Table:  " << std::endl;

   for(int k=0; k<n; k++)
   {
      for(int p=0; p<n; p++)
      {
	 std::cout << table[k][p].div << "  ";
      }
      std::cout << std::endl;
   }
}

void free_tables(struct muldiv_entry** table, int n)
{

   for(int i=0; i<n; i++)
   {
      delete [] table[i];
   }
   delete [] table;
} 

bool input_ck(char *str)
{
   char n;
   for(int i=0; i<strlen(str); i++)
   {
      n=str[i];
      if(!(n<'9' && n>'0'))
	 return false;
   }
return true;
}

