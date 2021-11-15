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
#   File: kasad.pri
#
# Author: $author$
#   Date: 11/15/2021
#
# QtCreator .pri file for domo executable kasad
########################################################################

########################################################################
# kasad

# kasad TARGET
#
kasad_TARGET = kasad

# kasad INCLUDEPATH
#
kasad_INCLUDEPATH += \
$${domo_INCLUDEPATH} \

# kasad DEFINES
#
kasad_DEFINES += \
$${domo_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# kasad OBJECTIVE_HEADERS
#
#kasad_OBJECTIVE_HEADERS += \
#$${DOMO_SRC}/xos/app/console/kasad/main.hh \

# kasad OBJECTIVE_SOURCES
#
#kasad_OBJECTIVE_SOURCES += \
#$${DOMO_SRC}/xos/app/console/kasad/main.mm \

########################################################################
# kasad HEADERS
#
kasad_HEADERS += \
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/base/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/base/main.hpp \
\
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/server/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/protocol/tplink/kasa/hs100/server/main.hpp \
\
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/server/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/server/main.hpp \

# kasad SOURCES
#
kasad_SOURCES += \
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/server/main_opt.cpp \
$${DOMO_SRC}/xos/app/console/network/protocol/tplink/kasa/hs100/server/main.cpp \

########################################################################
# kasad FRAMEWORKS
#
kasad_FRAMEWORKS += \
$${domo_FRAMEWORKS} \

# kasad LIBS
#
kasad_LIBS += \
$${domo_LIBS} \

########################################################################
# NO Qt
QT -= gui core


