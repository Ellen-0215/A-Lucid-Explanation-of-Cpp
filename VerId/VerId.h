// 用于验证的标识号类（头文件）

#ifndef ___Class_VerId
#define ___Class_VerId

class VerId{
    int id_no;

public:
    static int counter;
    VerId();

    int id() const;
};

#endif