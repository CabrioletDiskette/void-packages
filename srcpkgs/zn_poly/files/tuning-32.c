/*
   NOTE: do not edit this file! It is auto-generated by the "tune" program.
   (Run "make tune" and then "./tune > tuning.c" to regenerate it.)
*/

/*
   tuning.c:  global tuning values

   Copyright (C) 2007, 2008, David Harvey

   This file is part of the zn_poly library (version 0.9).

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 2 of the License, or
   (at your option) version 3 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "zn_poly_internal.h"

size_t ZNP_mpn_smp_kara_thresh = 43;
size_t ZNP_mpn_mulmid_fallback_thresh = 551;

tuning_info_t tuning_info[] = 
{
   {  // bits = 0
   },
   {  // bits = 1
   },
   {  // bits = 2
         47,   // KS1 -> KS2 multiplication threshold
       1053,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         43,   // KS1 -> KS2 squaring threshold
       1053,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         56,   // KS1 -> KS2 middle product threshold
        689,   // KS2 -> KS4 middle product threshold
      23040,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 3
         39,   // KS1 -> KS2 multiplication threshold
        412,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         39,   // KS1 -> KS2 squaring threshold
        315,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         43,   // KS1 -> KS2 middle product threshold
        264,   // KS2 -> KS4 middle product threshold
      23040,   // KS4 -> FFT middle product threshold
       1000,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 4
         39,   // KS1 -> KS2 multiplication threshold
        901,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         33,   // KS1 -> KS2 squaring threshold
        901,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         43,   // KS1 -> KS2 middle product threshold
        185,   // KS2 -> KS4 middle product threshold
      23040,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         13    // nussbaumer squaring threshold
   },
   {  // bits = 5
         35,   // KS1 -> KS2 multiplication threshold
        264,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         31,   // KS1 -> KS2 squaring threshold
        264,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         35,   // KS1 -> KS2 middle product threshold
        144,   // KS2 -> KS4 middle product threshold
      21569,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 6
         33,   // KS1 -> KS2 multiplication threshold
        247,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         31,   // KS1 -> KS2 squaring threshold
        173,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
        116,   // KS2 -> KS4 middle product threshold
      14044,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         12    // nussbaumer squaring threshold
   },
   {  // bits = 7
         33,   // KS1 -> KS2 multiplication threshold
        247,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         23,   // KS1 -> KS2 squaring threshold
        226,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
        116,   // KS2 -> KS4 middle product threshold
      12720,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 8
         27,   // KS1 -> KS2 multiplication threshold
        123,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
        112,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         33,   // KS1 -> KS2 middle product threshold
         94,   // KS2 -> KS4 middle product threshold
       7753,   // KS4 -> FFT middle product threshold
         13,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 9
         24,   // KS1 -> KS2 multiplication threshold
        206,   // KS2 -> KS4 multiplication threshold
      62020,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
        158,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         27,   // KS1 -> KS2 middle product threshold
         86,   // KS2 -> KS4 middle product threshold
       9451,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 10
         25,   // KS1 -> KS2 multiplication threshold
         86,   // KS2 -> KS4 multiplication threshold
      68475,   // KS4 -> FFT multiplication threshold
         17,   // KS1 -> KS2 squaring threshold
         66,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         24,   // KS1 -> KS2 middle product threshold
         70,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         12,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 11
         23,   // KS1 -> KS2 multiplication threshold
        134,   // KS2 -> KS4 multiplication threshold
      62020,   // KS4 -> FFT multiplication threshold
         21,   // KS1 -> KS2 squaring threshold
        107,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         23,   // KS1 -> KS2 middle product threshold
         75,   // KS2 -> KS4 middle product threshold
       5393,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         11    // nussbaumer squaring threshold
   },
   {  // bits = 12
         17,   // KS1 -> KS2 multiplication threshold
         78,   // KS2 -> KS4 multiplication threshold
      75603,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         72,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
       4280,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 13
         17,   // KS1 -> KS2 multiplication threshold
         86,   // KS2 -> KS4 multiplication threshold
      56173,   // KS4 -> FFT multiplication threshold
         14,   // KS1 -> KS2 squaring threshold
         78,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         19,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
       4726,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 14
         19,   // KS1 -> KS2 multiplication threshold
         66,   // KS2 -> KS4 multiplication threshold
      62020,   // KS4 -> FFT multiplication threshold
         16,   // KS1 -> KS2 squaring threshold
         62,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         21,   // KS1 -> KS2 middle product threshold
         66,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 15
         16,   // KS1 -> KS2 multiplication threshold
         67,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         13,   // KS1 -> KS2 squaring threshold
         43,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         51,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 16
         14,   // KS1 -> KS2 multiplication threshold
         66,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         13,   // KS1 -> KS2 squaring threshold
         56,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         54,   // KS2 -> KS4 middle product threshold
       3877,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 17
         14,   // KS1 -> KS2 multiplication threshold
         47,   // KS2 -> KS4 multiplication threshold
      50877,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         33,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         17,   // KS1 -> KS2 middle product threshold
         47,   // KS2 -> KS4 middle product threshold
       3077,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 18
         13,   // KS1 -> KS2 multiplication threshold
         47,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         13,   // KS1 -> KS2 squaring threshold
         33,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         14,   // KS1 -> KS2 middle product threshold
         47,   // KS2 -> KS4 middle product threshold
       3077,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 19
         13,   // KS1 -> KS2 multiplication threshold
         31,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         27,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         38,   // KS2 -> KS4 middle product threshold
       2363,   // KS4 -> FFT middle product threshold
         11,   // nussbaumer multiplication threshold
         10    // nussbaumer squaring threshold
   },
   {  // bits = 20
         12,   // KS1 -> KS2 multiplication threshold
         43,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         12,   // KS1 -> KS2 squaring threshold
         33,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         39,   // KS2 -> KS4 middle product threshold
       2363,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 21
         13,   // KS1 -> KS2 multiplication threshold
         32,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         25,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         35,   // KS2 -> KS4 middle product threshold
       1756,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 22
         12,   // KS1 -> KS2 multiplication threshold
         31,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         24,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         35,   // KS2 -> KS4 middle product threshold
       2071,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 23
         12,   // KS1 -> KS2 multiplication threshold
         24,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          8,   // KS1 -> KS2 squaring threshold
         21,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         27,   // KS2 -> KS4 middle product threshold
       1539,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 24
          9,   // KS1 -> KS2 multiplication threshold
         28,   // KS2 -> KS4 multiplication threshold
   SIZE_MAX,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         23,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         29,   // KS2 -> KS4 middle product threshold
       1756,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 25
         12,   // KS1 -> KS2 multiplication threshold
         21,   // KS2 -> KS4 multiplication threshold
      25439,   // KS4 -> FFT multiplication threshold
         10,   // KS1 -> KS2 squaring threshold
         21,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       1305,   // KS4 -> FFT middle product threshold
         10,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 26
         10,   // KS1 -> KS2 multiplication threshold
         19,   // KS2 -> KS4 multiplication threshold
      31010,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         13,   // KS1 -> KS2 middle product threshold
         25,   // KS2 -> KS4 middle product threshold
       1349,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 27
          9,   // KS1 -> KS2 multiplication threshold
         17,   // KS2 -> KS4 multiplication threshold
      28087,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       1070,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 28
         10,   // KS1 -> KS2 multiplication threshold
         17,   // KS2 -> KS4 multiplication threshold
      28087,   // KS4 -> FFT multiplication threshold
          9,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         12,   // KS1 -> KS2 middle product threshold
         21,   // KS2 -> KS4 middle product threshold
       1070,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 29
          8,   // KS1 -> KS2 multiplication threshold
         17,   // KS2 -> KS4 multiplication threshold
      20868,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         14,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         21,   // KS2 -> KS4 middle product threshold
        970,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 30
          8,   // KS1 -> KS2 multiplication threshold
         27,   // KS2 -> KS4 multiplication threshold
      28087,   // KS4 -> FFT multiplication threshold
          7,   // KS1 -> KS2 squaring threshold
         23,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          9,   // KS1 -> KS2 middle product threshold
         27,   // KS2 -> KS4 middle product threshold
       1305,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          8    // nussbaumer squaring threshold
   },
   {  // bits = 31
          9,   // KS1 -> KS2 multiplication threshold
         23,   // KS2 -> KS4 multiplication threshold
      28087,   // KS4 -> FFT multiplication threshold
          8,   // KS1 -> KS2 squaring threshold
         17,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
         10,   // KS1 -> KS2 middle product threshold
         23,   // KS2 -> KS4 middle product threshold
       1070,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
   {  // bits = 32
          8,   // KS1 -> KS2 multiplication threshold
         25,   // KS2 -> KS4 multiplication threshold
      28087,   // KS4 -> FFT multiplication threshold
          8,   // KS1 -> KS2 squaring threshold
         19,   // KS2 -> KS4 squaring threshold
   SIZE_MAX,   // KS4 -> FFT squaring threshold
          8,   // KS1 -> KS2 middle product threshold
         27,   // KS2 -> KS4 middle product threshold
       1539,   // KS4 -> FFT middle product threshold
          9,   // nussbaumer multiplication threshold
          9    // nussbaumer squaring threshold
   },
};

// end of file ****************************************************************
