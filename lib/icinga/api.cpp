/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012-2014 Icinga Development Team (http://www.icinga.org)    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#include "icinga/api.h"
#include "remote/apifunction.h"
#include "base/logger_fwd.h"

using namespace icinga;

REGISTER_APIFUNCTION(GetAnswerToEverything, uapi, boost::bind(&API::GetAnswerToEverything, _2));

Value API::GetAnswerToEverything(const Dictionary::Ptr& params)
{
	String text;

	if (params)
		text = params->Get("text");

	Log(LogInformation, "icinga", "Hello from the Icinga 2 API: " + text);

	return 42;
}
