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

struct CSFParam : public CGraph::GParam {
    int neighbor_ = 0;
    std::string model_path_;
    std::string train_file_path_;

    CVoid reset() override {
        neighbor_ = 0;
        model_path_ = "";
        train_file_path_ = "";
    }
};

#endif //CSF_CSFPARAM_H
