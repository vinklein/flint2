/*
    Copyright (C) 2017 Daniel Schultz

    This file is part of FLINT.

    FLINT is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "fmpz_mpoly.h"


void fmpz_mpoly_set_term_si_fmpz(fmpz_mpoly_t poly,
                 const slong c, const fmpz ** exp, const fmpz_mpoly_ctx_t ctx)
{
    fmpz_t newc;

    fmpz_init(newc);
    fmpz_set_si(newc, c);
    fmpz_mpoly_set_term_fmpz_fmpz(poly, newc, exp, ctx);
    fmpz_clear(newc);
}
