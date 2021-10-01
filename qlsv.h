#include "sv.h"
#include<iostream>
class qlsv
{
public:
static int n;    
private:
    sv *p;
public:
    qlsv();
    ~qlsv();
    sv* get_p();
    void xoa(const sv&);
    void add(const sv&);
    void insert(const sv&,const int&);
    sv* indexoff(sv);
    void update(sv&);
};