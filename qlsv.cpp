#include "qlsv.h"
#include <string>
using namespace std;
int qlsv::n = 0;
int flag=0;
qlsv::qlsv()
{
    this->p = nullptr;
}
qlsv::~qlsv()
{
    delete[] this->p;
}
sv *qlsv::get_p()
{
    return this->p;
}
void qlsv::add(const sv &sv1)
{
    sv *p;
    p = new sv;
    p->set_info(sv1);
    if (this->p == nullptr)
    {
        this->p = p;
        this->p->set_next(nullptr);
    }
    else
    {
        sv *after = this->p, *before;
        while (after != nullptr)
        {
            before = after;
            after = after->get_next();
        }
        before->set_next(p);
        p->set_next(nullptr);
    }
    qlsv::n++;
}
sv *qlsv::indexoff(sv sv1)
{
    sv *p = this->p;
    sv *before = NULL;
    sv *after = NULL;
    while (p != nullptr && sv1.get_mssv() != p->get_mssv())
    {
        after = before;
        before = p;
        p = p->get_next();
    }
    after = before;
    // cout<<before2<<" "<<before1<<" "<<p<<endl;
    if(p==NULL) flag=1;
    return after;
}
void qlsv::insert(const sv &sv1, const int &n)
{
    sv *p;
    p = new sv;
    p->set_info(sv1);
    if (this->p == nullptr)
    {
        this->p = p;
        this->p->set_next(nullptr);
    }
    else
    {
        int count = 1;
        sv *after= this->p , *before;
        while ( count != n)
        {   before=after;
            after = after->get_next();
            count++;
        }
        // chen dau mang
        if(n==1){
            p->set_next(this->p);
           this->p=p;
        }
        else 
        {

        before->set_next(p);
        p->set_next(after);
        }
    }
    qlsv::n++;
}
void qlsv::xoa(const sv &sv2)
{
    sv *q = indexoff(sv2);
    //cout<<q<<" "<<this->p<<endl;

    //cout<<"1";

    if (q == NULL)
    {

        cout << "!";
        this->p = p->get_next();
        delete q;
    }
    else if(flag==1)
    {
        cout<<"khong ton tai"<<endl;
        flag=0;
    }
    else
    {
        // cout<<"2";
        sv *q2 = q->get_next();
        q->set_next(q2->get_next());
        delete q2;
    }
    qlsv::n--;
}
void qlsv::update(sv& sv1)
{
    string name,mssv;
    cin>>name>>mssv;
    sv1.set_info2(name,mssv);
}