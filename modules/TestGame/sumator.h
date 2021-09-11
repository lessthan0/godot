#if !defined(SUMATOR_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Chase Curtis $
   $Notice: (C) Copyright 2014 by Dark Arts, Inc. All Rights Reserved. $
   ======================================================================== */
#define SUMATOR_H
#include "core/reference.h"

class Sumator: public Reference
{
    GDCLASS(Sumator, Reference);

    int Count;

protected:
    static void _bind_methods();

public:
    void add(int p_value);
    void reset();
    int get_total() const;

    Summator();
};


#endif
