/*
  pins_arduino.h - Pin definition functions for LGT8F_X8P

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/

#ifndef __LGT8FX8P__
#define	__LGT8FX8P__

#ifndef __LGT8F__
#define	__LGT8F__
#endif

#include "lgtx8p.h"

static const uint8_t DAC0 = 4;

#include "../lgt8f/pins_arduino.h"
#undef NUM_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS           8

#endif
