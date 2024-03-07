/*
 * Copyright (c) 2010-2024 Belledonne Communications SARL.
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

#include <bctoolbox/defs.h>

#include "message-waiting-indication-summary.h"

// =============================================================================

using namespace std;

LINPHONE_BEGIN_NAMESPACE

namespace Mwi {

MessageWaitingIndicationSummary::MessageWaitingIndicationSummary(
    LinphoneMessageWaitingIndicationContextClass contextClass,
    uint32_t nbOld,
    uint32_t nbNew,
    uint32_t nbOldUrgent,
    uint32_t nbNewUrgent) {
	mContextClass = contextClass;
	mNbOld = nbOld;
	mNbNew = nbNew;
	mNbOldUrgent = nbOldUrgent;
	mNbNewUrgent = nbNewUrgent;
}

MessageWaitingIndicationSummary *MessageWaitingIndicationSummary::clone() const {
	return nullptr;
}

// -----------------------------------------------------------------------------

LinphoneMessageWaitingIndicationContextClass MessageWaitingIndicationSummary::getContextClass() const {
	return mContextClass;
}

uint32_t MessageWaitingIndicationSummary::getNbOld() const {
	return mNbOld;
}

uint32_t MessageWaitingIndicationSummary::getNbNew() const {
	return mNbNew;
}

uint32_t MessageWaitingIndicationSummary::getNbOldUrgent() const {
	return mNbOldUrgent;
}

uint32_t MessageWaitingIndicationSummary::getNbNewUrgent() const {
	return mNbNewUrgent;
}

} // namespace Mwi

LINPHONE_END_NAMESPACE
