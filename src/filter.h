/* vi:set ts=8 sts=8 sw=8:
 *
 * PMS  <<Practical Music Search>>
 * Copyright (C) 2006-2010  Kim Tore Jensen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * 	filter.h
 *	The filter class determines song visibility/selection parameters.
 */


enum
{
	COMPARE_EQUAL	= 1 << 0,
	COMPARE_ALMOST	= 1 << 1,
	COMPARE_LT	= 1 << 2,
	COMPARE_LTE	= 1 << 3,
	COMPARE_GT	= 1 << 4,
	COMPARE_GTE	= 1 << 5,

	COMPARE_NOT	= 1 << 6
};


class Filter
{
public:
	string			param;
	long			comp;
	long			field;
};
