/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Chase Curtis $
   $Notice: (C) Copyright 2014 by Dark Arts, Inc. All Rights Reserved. $
   ======================================================================== */
#include "summator.h"

void Summator::add(int p_value)
{
    count += p_value;
}

void Summator::reset()
{
    count = 0;
}

int Summator::get_total()const
{
    return count;
}

void Summator::_bind_methods()
{

    ClassDB::bind_method(D_METHOD("add","value"),&Summator::add);
    ClassDB::bind_method(D_METHOD("reset"),&Summator::reset);
    ClassDB::bind_method(D_METHOD("add","value"),&Summator::add);
}

Summator::Summator()
{
    count=0;
}
