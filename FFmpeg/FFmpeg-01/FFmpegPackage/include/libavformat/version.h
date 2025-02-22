/*
 * Version macros.
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVFORMAT_VERSION_H
#define AVFORMAT_VERSION_H

/**
 * @file
 * @ingroup libavf
 * Libavformat version macros
 */

#include "libavutil/version.h"

#define LIBAVFORMAT_VERSION_MAJOR 56
#define LIBAVFORMAT_VERSION_MINOR  36
#define LIBAVFORMAT_VERSION_MICRO 100

#define LIBAVFORMAT_VERSION_INT AV_VERSION_INT(LIBAVFORMAT_VERSION_MAJOR, \
                                               LIBAVFORMAT_VERSION_MINOR, \
                                               LIBAVFORMAT_VERSION_MICRO)
#define LIBAVFORMAT_VERSION     AV_VERSION(LIBAVFORMAT_VERSION_MAJOR,   \
                                           LIBAVFORMAT_VERSION_MINOR,   \
                                           LIBAVFORMAT_VERSION_MICRO)
#define LIBAVFORMAT_BUILD       LIBAVFORMAT_VERSION_INT

#define LIBAVFORMAT_IDENT       "Lavf" AV_STRINGIFY(LIBAVFORMAT_VERSION)

/**
 * FF_API_* defines may be placed below to indicate public API that will be
 * dropped at a future version bump. The defines themselves are not part of
 * the public API and may change, break or disappear at any time.
 */
#ifndef FF_API_LAVF_BITEXACT
#define FF_API_LAVF_BITEXACT            (LIBAVFORMAT_VERSION_MAJOR < 57)
#endif
#ifndef FF_API_LAVF_FRAC
#define FF_API_LAVF_FRAC                (LIBAVFORMAT_VERSION_MAJOR < 57)
#endif
#ifndef FF_API_LAVF_CODEC_TB
#define FF_API_LAVF_CODEC_TB            (LIBAVFORMAT_VERSION_MAJOR < 57)
#endif
#ifndef FF_API_URL_FEOF
#define FF_API_URL_FEOF                 (LIBAVFORMAT_VERSION_MAJOR < 57)
#endif

#ifndef FF_API_R_FRAME_RATE
#define FF_API_R_FRAME_RATE            1
#endif
#endif /* AVFORMAT_VERSION_H */
