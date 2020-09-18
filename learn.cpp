#include <iostream>
#include <string>

int main()
{



  int array[10];

  for(int i = 0; i < 10; i++)
  {



       std::cout <<"Enter the values for the array: ";
       std::cin >> array[i];



  }

   int find;
   int count = 0;

   std::cout <<"Please enter a value you are looking for in the array: ";
   std::cin >> find;


   for(int j = 0; j < 10; j++)
   {

      if(find == array[j])
      {


        count++;

      }

   }


   std::cout <<"The number of times the number you entered occurs in the array is "<< count << std::endl;
   




  return 0;

}