#include <iostream>
#include<stdlib.h>
using namespace::std;
struct data{
char nama[10];
int no;};
data input[10];
int i,x,y,found;data temp;
main (){{system("cls");
cout<<"=MASUKAN DATA IDENTITAS= "<<endl;
cout<<"masukan banyak data = "; cin>>x;
cout<<endl;}
for(i=0;i<x;i++)
{
    cout<<"\ndata ke-"<<i<<"=";
    cout<<"\nmasukkan nama:";cin>>input[i].nama;
    cout<<"\nmasukkan no:";cin>>input[i].no;
}
for(i=0;i<x;i++)
{
    cout<<endl;
    cout<<"\ndata ke:["<<i+1<<"]";
    cout<<"\n nama:"<<input[i].nama;
    cout<<endl<<input[i].no;
}
for(i=0;i<x;i++)
{system("cls");
   for(y=0;y<x-1;y++)
   {
       if(input[y].no>input[y+1].no)
       {  temp.nama,input[y].nama;
          input[y].nama,input[y+1].nama;
          input[y+1].nama,temp.nama;

          temp.no=input[y].no;
          input[y].no=input[y+1].no;
          input[y+1].no=temp.no;}}}
  cout<<"\n data sorting";
for(y=0;y<x;y++)
{   cout<<endl;
    cout<<"\n nama:"<<input[y].nama;
    cout<<"\n no:"<<input[y].no;
}
cout<<"\nmasukkan nomor yang dicari:_";
cin>>input[i].nama;
found=0;
 {system("cls");
 cout<<"\nDATA DITEMUKAN PADA_";
for(i=0;i<x;i++)
{
   if(input[i].nama==input[i].nama)
   {found=1;
    cout<<i;}
}
if (found==0)
{
    cout<<"\nData tidak ada";
}}








          }
