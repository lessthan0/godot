/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Chase Curtis $
   $Notice: (C) Copyright 2014 by Dark Arts, Inc. All Rights Reserved. $
   ======================================================================== */
#include "register_types.h"
#include "core/class.h"
#include "summator.h"

void register_summator_types()
{
    ClassDB::register_class<Summator>();
}

void unregister_summator_types()
{
   // Nothing to do here in this example.
}
