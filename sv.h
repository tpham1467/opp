#include<string>
using namespace std;
class sv
{
private:
    string name;
    string mssv;
    sv *next;
public:
    sv();
    sv(string,string);
    ~sv();
    void show();
    sv* get_next();
    void set_next(sv*);
    string get_name();
    string get_mssv();
    void set_info(const sv&);
    void set_info2(string,string );
};
