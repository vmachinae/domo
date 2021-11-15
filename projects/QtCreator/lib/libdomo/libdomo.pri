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
#   File: libdomo.pri
#
# Author: $author$
#   Date: 11/14/2021
#
# QtCreator .pri file for domo library libdomo
########################################################################

########################################################################
# libdomo
XOS_LIB_DOMO_VERSION_BUILD_DATE = $$system(~/bin/utility/tdate)

# libdomo TARGET
#
libdomo_TARGET = domo
libdomo_TEMPLATE = lib
libdomo_CONFIG += staticlib

# libdomo INCLUDEPATH
#
libdomo_INCLUDEPATH += \
$${domo_INCLUDEPATH} \

# libdomo DEFINES
#
libdomo_DEFINES += \
$${domo_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_DOMO_VERSION_BUILD_DATE=$${XOS_LIB_DOMO_VERSION_BUILD_DATE} \

########################################################################
# libdomo OBJECTIVE_HEADERS
#
#libdomo_OBJECTIVE_HEADERS += \
#$${DOMO_SRC}/xos/lib/domo/main.hh \

# libdomo OBJECTIVE_SOURCES
#
#libdomo_OBJECTIVE_SOURCES += \
#$${DOMO_SRC}/xos/lib/domo/main.mm \

########################################################################
# libdomo HEADERS
#
libdomo_HEADERS += \
$${DOMO_SRC}/xos/lib/domo/version.hpp \

# libdomo SOURCES
#
libdomo_SOURCES += \
$${DOMO_SRC}/xos/lib/domo/version.cpp \

########################################################################



