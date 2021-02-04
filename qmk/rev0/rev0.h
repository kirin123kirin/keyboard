/* Copyright 2019 takashiski
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT(\
L003,L004,L005,L006,L007,          R031,R032,R033,R034,R035,R036,R037,R038,R039,R040,R041,\
L010,L011,L012,L013,L014,L015,     R042,R043,R044,R045,R046,R047,R048,R049,R050,R051,R052,R053,\
L201,L016,L017,L018,L019,L020,     R054,R055,R056,R057,R058,R059,R060,R061,R062,R063,\
L301,L021,L022,L023,L024,L025,     R064,R065,R066,R067,R068,R069,R070,R901,\
L601,L026,L027,L028,L029,R071,     R072,R073,R074,R075,R076,R077,R303,R078,R079,R080,\
L302,L030,L101,L102,L304,R305,     R103,R104,R105,R081,R082,R202,R083,R084,R085\
) {\
{L003,KC_NO,L004,L005,L006,L007},\
{L010,L011,L012,L013,L014,L015},\
{L201,L016,L017,L018,L019,L020},\
{L301,L021,L022,L023,L024,L025},\
{L601,KC_NO,L026,L027,L028,L029},\
{L302,L030,KC_NO,L101,L102,L304},\
{R031,R032,R033,R034,KC_NO,R035,R036,R037,R038,R039,R040,R041},\
{R042,R043,R044,R045,R046,R047,R048,R049,R050,R051,R052,R053},\
{R054,R055,R056,R057,R058,R059,R060,KC_NO,KC_NO,R061,R062,R063},\
{R064,R065,R066,R067,R068,R069,R070,R901,KC_NO,KC_NO,KC_NO,KC_NO},\
{R071,R072,R073,R074,R075,R076,R077,R303,KC_NO,R078,R079,R080},\
{R305,R103,R104,KC_NO,R105,R081,R082,R202,KC_NO,R083,R084,R085}\
}

