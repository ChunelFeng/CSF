/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: CSFNode.h
@Time: 2022/4/4 15:43
@Desc: 
***************************/

#ifndef CSF_CSFNODE_H
#define CSF_CSFNODE_H

#include "../../3rd-party/CGraph/src/CGraph.h"

class CSFNode : public CGraph::DAnnNode {
public:
    CStatus init() override;

    CStatus destroy() override;

    CStatus train() override;

protected:
    DAnnFuncType prepareParam() override;
};

#endif //CSF_CSFNODE_H
