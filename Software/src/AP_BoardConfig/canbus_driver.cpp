/*
 * This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <./src/AP_HAL/AP_HAL.h>

#if HAL_WITH_UAVCAN
#include "AP_BoardConfig_CAN.h"
#include <AP_UAVCAN/AP_UAVCAN.h>

// table of user settable CAN bus parameters
const AP_Param::GroupInfo AP_BoardConfig_CAN::Driver::var_info[] = {
    // @Param: PROTOCOL
    // @DisplayName: Enable use of specific protocol over virtual driver
    // @Description: Enabling this option starts selected protocol that will use this virtual driver
    // @Values: 0:Disabled,1:UAVCAN
    // @User: Advanced
    // @RebootRequired: True
    AP_GROUPINFO("PROTOCOL", 1, AP_BoardConfig_CAN::Driver, _protocol_type, AP_BoardConfig_CAN::Protocol_Type_UAVCAN),

    // @Group: UC_
    // @Path: ../AP_UAVCAN/AP_UAVCAN.cpp
    AP_SUBGROUPPTR(_driver, "UC_", 2, AP_BoardConfig_CAN::Driver, AP_UAVCAN),

    AP_GROUPEND
};
#endif
