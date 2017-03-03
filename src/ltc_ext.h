// This file is part of imp.ltc
// Copyright (C) 2017 David Butler / The Impersonal Stereo
//
// imp.ltc is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation, either version 3 of
// the License, or (at your option) any later version.
//
// imp.ltc is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with imp.ltc.
// If not, see <http://www.gnu.org/licenses/>.


#ifndef LTC_EXT_H
#define LTC_EXT_H 1

#include "ltc.h"

void ltc_decoder_write_double(LTCDecoder *d, double *buf, size_t size, ltc_off_t posinfo);

#endif