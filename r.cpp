#include <iostream>

using namespace std;

int main()
{
  int a[]={2,4,6,4,7,1,4,9,5,3,7,2,2,6,9,3,7,3,4,4 };
  int n=sizeof(a)/sizeof(a[0]);
  int road2=0,road5=0;
  for(int i=0;i<n;i++)
  if(a[i]==2) road2++;
  cout<<"orianebis raodenoba"<<road2<<endl;
for(int i=0;i<n;i++)
  if(a[i]==5) road5++;
  cout<<"xutianebis raodenoba"<<road2<<endl;
    return 0;
}
