/*
 * Copyright (c) 2010-2023 Belledonne Communications SARL.
 *
 * This file is part of Liblinphone
 * (see https://gitlab.linphone.org/BC/public/liblinphone).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _L_CARDDAV_RESPONSE_H_
#define _L_CARDDAV_RESPONSE_H_

#include "c-wrapper/c-wrapper.h"

// =============================================================================

LINPHONE_BEGIN_NAMESPACE

class CardDAVResponse : public UserDataAccessor {
public:
	CardDAVResponse() = default;
	CardDAVResponse(const CardDAVResponse &other) = default;
	virtual ~CardDAVResponse() = default;

	std::string mDisplayName;
	std::string mCtag;
	std::string mEtag;
	std::string mUrl;
	std::string mVcard;
};

LINPHONE_END_NAMESPACE

#endif // ifndef _L_CARDDAV_RESPONSE_H_
