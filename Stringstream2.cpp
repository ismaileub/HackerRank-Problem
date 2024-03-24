#include<iostream>
#include<sstream>
using namespace std;

int main()
{
   int p=0, arr[10];
   string str;
   getline( cin, str);
   stringstream ss(str);

   while( ss >> arr[p])
   {
       p++;
   }

   for( int i=0; i<p; i++)
   {
       cout<<arr[i]<<endl;
   }

   return 0;
}
