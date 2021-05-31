
#include"Vector.h" 
#include<iostream> 
using namespace std;
int main() {
vec vectorx;
vec vectory;
cout<<"---For vectorX---\n";
  cin>>vectorx; 
  cout<<"---For vectorY---\n"; 
  cin>>vectory;
cout<<"Comparing vectorx==vectory\n"; 
  if(vectorx==vectory)
cout<<"Equal\n"; 
  else
cout<<"Not Equal\n";
cout<<"Comparing vectorx!=vectory\n"; 
  if(vectorx!=vectory)
cout<<" Not Equal\n"; 
  else
cout<<"Equal\n";
cout<<"Modifying value VectorX\n"; vectory[0]=2;
return 0; }
