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
#   File: kasa.pri
#
# Author: $author$
#   Date: 11/14/2021
#
# QtCreator .pri file for domo executable kasa
########################################################################

########################################################################
# kasa

# kasa TARGET
#
kasa_TARGET = kasa

# kasa INCLUDEPATH
#
kasa_INCLUDEPATH += \
$${domo_INCLUDEPATH} \

# kasa DEFINES
#
kasa_DEFINES += \
$${domo_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# kasa OBJECTIVE_HEADERS
#
#kasa_OBJECTIVE_HEADERS += \
#$${DOMO_SRC}/xos/app/console/kasa/main.hh \

# kasa OBJECTIVE_SOURCES
#
#kasa_OBJECTIVE_SOURCES += \
#$${DOMO_SRC}/xos/app/console/kasa/main.mm \

########################################################################
# kasa HEADERS
#
kasa_HEADERS += \
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/base/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/base/main.hpp \
\
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/client/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/client/main.hpp \
\
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/base/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/base/main.hpp \
\
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/client/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/client/main.hpp \

# kasa SOURCES
#
kasa_SOURCES += \
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/client/main_opt.cpp \
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/client/main.cpp \

########################################################################
# kasa FRAMEWORKS
#
kasa_FRAMEWORKS += \
$${domo_FRAMEWORKS} \

# kasa LIBS
#
kasa_LIBS += \
$${domo_LIBS} \

########################################################################
# NO Qt
QT -= gui core

