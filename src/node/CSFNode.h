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

class CSFNode : public CGraph::GNode {
public:
    CStatus init() override;

    CStatus run() override;

    CStatus destroy() override;

protected:
    CStatus prepareParam();
};

#endif //CSF_CSFNODE_H
