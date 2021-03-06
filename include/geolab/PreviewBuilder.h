#pragma once

#include <ee0/typedef.h>

#include <dag/Graph.h>
#include <geograph/ParamType.h>

namespace geolab
{

class PreviewBuilder
{
public:
    PreviewBuilder(const ee0::SubjectMgrPtr& sub_mgr,
        const dag::Graph<geograph::ParamType>& eval);

    void Build();

private:
    ee0::SubjectMgrPtr m_sub_mgr;

    const dag::Graph<geograph::ParamType>& m_eval;

}; // PreviewBuilder

}