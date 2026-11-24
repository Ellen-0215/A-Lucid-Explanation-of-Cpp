// 标识号类IdNo（第2版：头文件）

#ifndef ___Class_IdNo
#define ___Class_IdNo

class IdNo{
    static int counter;
    int id_no;

public:
    IdNo();

    int id() const;
    static int get_max_id();
};

#endif