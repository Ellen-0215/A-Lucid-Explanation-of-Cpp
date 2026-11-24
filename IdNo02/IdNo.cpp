// 标识号类IdNo（第2版：源文件）

#include"IdNo.h"

int IdNo::counter=0;

IdNo::IdNo(){
    id_no=++counter;
}

int IdNo::id() const{
    return id_no;
}

int IdNo::get_max_id(){
    return counter;
}