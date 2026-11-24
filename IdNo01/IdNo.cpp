// 标识号类IdNo（第1版：源文件）

#include"IdNo.h"

int IdNo::counter=0;

IdNo::IdNo(){
    id_no=++counter;
}

int IdNo::id() const{
    return id_no;
}