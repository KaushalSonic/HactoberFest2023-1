#include <iostream>
using namespace std;

class nature
{
   static int x;

   public :
      nature()  // Constructor //
      {
	 cout<<"Constructor :"<<++x<<endl;
      }

      ~nature()  // Destructor //
      {
	 cout<<"Destructor :"<<x--<<endl;
      }
};

int nature :: x; // To make static variable Global //

int main()
{
   
   {
      nature ob1, obj2;
   }

   {
      nature obj3;
   }

   nature obc, obd;

   return 0;
}
