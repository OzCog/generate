/*
 * opencog/generate/GenerateCallback.h
 *
 * Copyright (C) 2020 Linas Vepstas <linasvepstas@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _OPENCOG_GENERATE_CALLBACK_H
#define _OPENCOG_GENERATE_CALLBACK_H

#include <opencog/atomspace/AtomSpace.h>
#include <opencog/generate/Frame.h>

namespace opencog
{
/** \addtogroup grp_generate
 *  @{
 */

/// Executive decision-making callbacks
///
/// At every branch-point in the traversal algorithm, a list of
/// branches to traverse must be obtained. Likwise, a priority-order
/// for these branches must be given. At any point, there must be
/// a decision to termnate, or to continue traversal. All of these
/// executive decisions are made via the callback interface defined
/// in this class.
/// 
class GenerateCallback
{
public:
	GenerateCallback(AtomSpace* as) {}
	virtual ~GenerateCallback() {}

	virtual void push(const Frame&) {}
	virtual void pop(const Frame&) {}

};


/** @}*/
}  // namespace opencog

#endif // _OPENCOG_GENERATE_CALLBACK_H
