/*
 * Copyright (c) 2010-2022 Belledonne Communications SARL.
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

#include "abstract-chat-room-p.h"
#include "linphone/utils/utils.h"

// =============================================================================

using namespace std;

LINPHONE_BEGIN_NAMESPACE

// -----------------------------------------------------------------------------

AbstractChatRoom::AbstractChatRoom(AbstractChatRoomPrivate &p, const shared_ptr<Core> &core)
    : Object(p), CoreAccessor(core) {
}

void AbstractChatRoom::setUtf8Subject(const string &subject) {
	setSubject(Utils::utf8ToLocale(subject));
}

const string AbstractChatRoom::getUtf8Subject() const {
	return Utils::localeToUtf8(getSubject());
}

std::ostream &operator<<(std::ostream &lhs, AbstractChatRoom::Capabilities e) {
	switch (e) {
		case AbstractChatRoom::Capabilities::None:
			lhs << "None";
			break;
		case AbstractChatRoom::Capabilities::Basic:
			lhs << "Basic";
			break;
		case AbstractChatRoom::Capabilities::RealTimeText:
			lhs << "RealTimeText";
			break;
		case AbstractChatRoom::Capabilities::Conference:
			lhs << "Conference";
			break;
		case AbstractChatRoom::Capabilities::Proxy:
			lhs << "Proxy";
			break;
		case AbstractChatRoom::Capabilities::Migratable:
			lhs << "Migratable";
			break;
		case AbstractChatRoom::Capabilities::OneToOne:
			lhs << "OneToOne";
			break;
		case AbstractChatRoom::Capabilities::Encrypted:
			lhs << "Encrypted";
			break;
		case AbstractChatRoom::Capabilities::Ephemeral:
			lhs << "Ephemeral";
			break;
	}
	return lhs;
}

std::ostream &operator<<(std::ostream &lhs, AbstractChatRoom::SecurityLevel e) {
	switch (e) {
		case AbstractChatRoom::SecurityLevel::Unsafe:
			lhs << "Unsafe";
			break;
		case AbstractChatRoom::SecurityLevel::ClearText:
			lhs << "ClearText";
			break;
		case AbstractChatRoom::SecurityLevel::Encrypted:
			lhs << "Encrypted";
			break;
		case AbstractChatRoom::SecurityLevel::Safe:
			lhs << "Safe";
			break;
	}
	return lhs;
}

std::ostream &operator<<(std::ostream &lhs, AbstractChatRoom::EphemeralMode e) {
	switch (e) {
		case AbstractChatRoom::EphemeralMode::DeviceManaged:
			lhs << "DeviceManaged";
			break;
		case AbstractChatRoom::EphemeralMode::AdminManaged:
			lhs << "AdminManaged";
			break;
	}
	return lhs;
}

LINPHONE_END_NAMESPACE
