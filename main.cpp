/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: main.cpp
@Time: 2022/4/4 14:50
@Desc: 
***************************/

#include "src/CSFInclude.h"

using namespace CGraph;

void csf() {
    GPipelinePtr pipeline = GPipelineFactory::create();
    GElementPtr csf = nullptr;

    pipeline->registerGElement<CSFNode>(&csf, {}, "csf");
    pipeline->process();
    GPipelineFactory::clear();
}

int main() {
    csf();
    return 0;
}
