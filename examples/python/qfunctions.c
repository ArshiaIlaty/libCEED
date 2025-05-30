// All Rights Reserved. See the top-level LICENSE and NOTICE files for details.
//
// SPDX-License-Identifier: BSD-2-Clause
//
// This file is part of CEED:  http://github.com/ceed

#include <ceed.h>
// -----------------------------------------------------------------------------
// Redefine QFunction Macro
// -----------------------------------------------------------------------------
#undef CEED_QFUNCTION
#define CEED_QFUNCTION(name) extern int name

// -----------------------------------------------------------------------------
// QFunction Sources
// -----------------------------------------------------------------------------
#include "ex3-volume.h"

// -----------------------------------------------------------------------------