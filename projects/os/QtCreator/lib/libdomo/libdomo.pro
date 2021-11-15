########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: libdomo.pro
#
# Author: $author$
#   Date: 11/14/2021
#
# QtCreator .pro file for domo library libdomo
########################################################################
include(../../../../../build/QtCreator/domo.pri)
include(../../../../QtCreator/domo.pri)
include(../../domo.pri)
include(../../../../QtCreator/lib/libdomo/libdomo.pri)

TARGET = $${libdomo_TARGET}
TEMPLATE = $${libdomo_TEMPLATE}
CONFIG += $${libdomo_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libdomo_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libdomo_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libdomo_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libdomo_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libdomo_HEADERS} \
$${libdomo_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libdomo_SOURCES} \

########################################################################


