#include"qlsv.h"

int main()
{
    qlsv db;
    //cout<<db.get_p();
    sv s1("pham van tien truong","102200198");
    db.add(s1);
    sv s2("nguyen van vien","102200200");
    sv s3("nguyen van vien2","102200201");
    sv s4("nguyen van vien3","102200202");
    db.add(s2);
    db.add(s3);
    db.insert(s4,1);
    //db.xoa(s4);
    db.update(s4);
    sv *p=db.get_p();
    //cout<<endl<<p<<endl;
    while(p!=nullptr){
        p->show();
      //  cout<<p->get_next()<<endl;
        p=p->get_next();
        cout<<endl;
    }
    return 0;
}