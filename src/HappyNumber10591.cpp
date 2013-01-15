#include <stdio.h>
#define SIZE 10000


typedef long long int llint;


llint store[SIZE];
void init_store()
{
        int w;
        for( w = 0; w < SIZE; w++ )
                store[w] = -1;
}

int ishappy( llint num )
{
   llint sum = num, tmp;

   while(1)
      {
         tmp = sum;
         sum = 0;
         while( tmp > 0 )
            {
               sum += (tmp%10) * (tmp%10);
               tmp /= 10;
            }

         if( store[sum] != num )   /* avoid loops */
            store[sum] = num;
         else
            return 0;

         if( sum == 1 )
            return 1;
         if( sum == num )
            return 0;
      }
}


int main()
{
   llint ncases, w, num;

   for( w = 0; w < SIZE; w++ )
      store[w] = -1;
   scanf( "%lld", &ncases );
   for( w = 1; w <= ncases; w++ )
      {
         scanf( "%lld", &num );
         printf( "Case #%lld: ", w );
         init_store();
         if( ishappy( num ) )
            printf( "%lld is a Happy number.\n", num );
         else
            printf( "%lld is an Unhappy number.\n", num );
      }

   return 0;
}
