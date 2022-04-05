/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: CSFParam.h
@Time: 2022/4/4 15:43
@Desc: 
***************************/

#ifndef CSF_CSFPARAM_H
#define CSF_CSFPARAM_H

#include <string>

#include "../../3rd-party/CGraph/src/CGraph.h"

struct CSFParam : public CGraph::DAnnParam {
    int neighbor_ = 0;

    CVoid reset() override {
        dim_ = 0;
        train_file_path_ = "";
    }
};

#endif //CSF_CSFPARAM_H
