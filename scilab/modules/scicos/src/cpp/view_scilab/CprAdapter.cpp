/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2014-2014 - Scilab Enterprises - Clement DAVID
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.txt
 *
 */

#include <string>

#include "internal.hxx"
#include "list.hxx"
#include "types.hxx"
#include "user.hxx"

#include "Controller.hxx"
#include "CprAdapter.hxx"

namespace org_scilab_modules_scicos
{
namespace view_scilab
{
namespace
{

} /* namespace */

template<> property<CprAdapter>::props_t property<CprAdapter>::fields = property<CprAdapter>::props_t();

CprAdapter::CprAdapter(bool ownAdaptee, org_scilab_modules_scicos::model::Diagram* adaptee) :
    BaseAdapter<CprAdapter, org_scilab_modules_scicos::model::Diagram>(ownAdaptee, adaptee)
{
    if (property<CprAdapter>::properties_have_not_been_set())
    {
        // FIXME: add some properties
    }
}

CprAdapter::~CprAdapter()
{
}

std::wstring CprAdapter::getTypeStr()
{
    return getSharedTypeStr();
}
std::wstring CprAdapter::getShortTypeStr()
{
    return getSharedTypeStr();
}

} /* namespace view_scilab */
} /* namespace org_scilab_modules_scicos */