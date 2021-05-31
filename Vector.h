#include<iostream> 
#define MAXSIZE 50 
using namespace std; 
class vec
{
public: int *l;
int size;
vec() {
1
l = new int(size); }
vec(int *l, int size)
{
this->size=size; this->l= new int[size]; for(int i=0;i<size;++i) {
l[i]=l[i]; }
}
vec(vec & l)
{
this->size=l.size; this->l= new int[size]; for(int i=0;i<l.size;++i) {
l[i]=l.l[i]; }
}
~vec()
{
for(int i=0;i<this->size;++i) {
delete(&l[i]); }
std::cout<<"Element Destroyed \n"; }
void operator =(vec & l)
{
this->size=l.size; this->l= new int[size]; for(int i=0;i<l.size;++i) {
l[i]=l.l[i]; }
}
int getSize() {
return size; }
void setSize(int size)
{
this->size=size;
}
2

bool operator == (const vec &l ) {
if(this->size!=l.size) return false;
for(int i=0;i<l.size;++i) {
if(l[i]!=l.l[i]) return false;
}
return true; }
bool operator != (const vec &l ) {
if(this->size!=l.size) return true;
for(int i=0;i<l.size;++i) {
if(l[i]!=l.l[i]) return true;
}
return false; }
vec operator ++ () {
vec v;
v.size= this->size; v.l= new int[size];
for(int i=0;i<this->size;++i) {
v.l[i]= ++this->l[i]; }
return v; }
vec operator ++ (int)
{
vec v;
v.size= this->size;
v.l= new int[size];
for(int i=0;i<this->size;++i)
v.l[i]= ++l[i]; return v;
}
int & operator [](int index) {
3

for(int i=0;i<size;++i) if(index==i)
return l[i]; }
int const& operator [](int index) const {
for(int i=0;i<size;++i) if(index==i)
return l[i]; }
bool operator()(int index,int value)
{
if(index<size)
{
l[index]=value;
return true; }
return false; }
friend ostream &operator<<( ostream &out, const vec &V ) { out <<"Size: "<<V.size<<endl;
out<<"Elements: \n";
for(int i=0;i<V.size;++i)
{
out<<V.l[i]<<", ";
}
out<<endl; return out;
}
friend istream &operator>>( istream &in, vec&v ) { std::cout<<"Enter size: ";
int size;
in>>v .size;
v.l = new int[size];
for(int i=0;i<v.size;++i)
{
std::cout<<"Enter element"<< i+1<<" : " ; in>>v .l[i];
}
return in; }
};
