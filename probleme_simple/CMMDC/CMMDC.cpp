#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("cmmdc.in");
ofstream fout ("cmmdc.out");

int main()
{
int a=0,b=0,c=0,d=0;
fin>>a>>b;


if (b>a) {




}
do {
a=a-b;
b=b-a;

cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
}while (!(c==0));



//*a-b=c b-c=d



  return 0;
}
