/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: CSFNode.cpp
@Time: 2022/4/4 16:23
@Desc: 
***************************/

#include "CSFNode.h"
#include "../param/CSFParam.h"

using namespace CGraph;

static const char* CSF_PARAM = "CSF_PARAM";

CStatus CSFNode::init() {
    CStatus status;
    status = CGRAPH_CREATE_GPARAM(CSFParam, CSF_PARAM)
    return status;
}


CStatus CSFNode::run() {
    CGRAPH_FUNCTION_BEGIN
    status = prepareParam();
    CGRAPH_FUNCTION_CHECK_STATUS

    auto param = CGRAPH_GET_GPARAM(CSFParam, CSF_PARAM)
    CGRAPH_ECHO("calc neighbor is [%d]", param->neighbor_);

    return status;
}


CStatus CSFNode::destroy() {
    return CStatus();
}


CStatus CSFNode::prepareParam() {
    CGRAPH_FUNCTION_BEGIN
    auto param = CGRAPH_GET_GPARAM(CSFParam, CSF_PARAM)
    CGRAPH_ASSERT_NOT_NULL(param)

    param->neighbor_ = 10;    // 随意修改参数信息
    CGRAPH_FUNCTION_END
}