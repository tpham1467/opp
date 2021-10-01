#include"sv.h"
#include<iostream>
sv::sv()
{
    this->name="";
    this->mssv="";
    this->next=nullptr;
    
}
sv::sv(string name,string mssv)
{
    this->name=name;
    this->mssv=mssv;
    this->next=nullptr;
}
sv::~sv()
{

}
void sv::show()
{
    cout<<this->name<<endl;
    cout<<this->mssv<<endl;
}
sv *sv::get_next()
{
    return this->next;
}
void sv::set_next(sv *next)
{
    this->next=next;
}
string sv::get_name()
{
    return this->name;
}
string sv::get_mssv()
{
    return this->mssv;
}
void sv::set_info(const sv& sv1)
{
   this->name=sv1.name;
   this->mssv=sv1.mssv;
}
void sv::set_info2(string name,string mssv)
{
    this->name=name;
    this->mssv=mssv;
}