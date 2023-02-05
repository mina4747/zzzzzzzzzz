#include <iostream>
#include <cstdio>

 using namespace std;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 #ifndef ONLINE_JUDGE
 freopen("input.txt" , "r" , stdin);

 #endif

int n , space , space2;
cin>>n;
int star=1;
space=n;
space2=0;
int star2=(n*2)-1;
for(int i=1 ; i<=n ; i++ )
 {
   for(int j=1;j<space;j++ )
   {
     cout<<" ";
   }
   for(int k=0 ; k<star;k++)
  {
    cout<<"*";
  }

  cout<<endl;
  star=star+2;
  space=space-1;
 }

for(int a=0 ; a<=n;a++)
{
    for(int m=0 ; m<space2 ;m++)
    {
      cout<<" ";
    }
  for(int b=0; b<star2;b++)
  {
    cout<<"*";
  }

cout<<endl;

star2=star2-2;
space2=space2+1;

}


  return 0;




}

