// 用于验证的标识号类VerId（源文件）

#include"VerId.h"

int VerId::counter=0;

VerId::VerId(){
    id_no=++counter;
}

int VerId::id() const{
    return id_no;
}