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
#   File: domo.pri
#
# Author: $author$
#   Date: 11/14/2021
#
# QtCreator .pri file for domo executable domo
########################################################################

########################################################################
# domo

# domo_exe TARGET
#
domo_exe_TARGET = domo

# domo_exe INCLUDEPATH
#
domo_exe_INCLUDEPATH += \
$${domo_INCLUDEPATH} \

# domo_exe DEFINES
#
domo_exe_DEFINES += \
$${domo_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# domo_exe OBJECTIVE_HEADERS
#
#domo_exe_OBJECTIVE_HEADERS += \
#$${DOMO_SRC}/xos/app/console/domo/main.hh \

# domo_exe OBJECTIVE_SOURCES
#
#domo_exe_OBJECTIVE_SOURCES += \
#$${DOMO_SRC}/xos/app/console/domo/main.mm \

########################################################################
# domo_exe HEADERS
#
domo_exe_HEADERS += \
$${DOMO_SRC}/xos/app/console/domo/main_opt.hpp \
$${DOMO_SRC}/xos/app/console/domo/main.hpp \

# domo_exe SOURCES
#
domo_exe_SOURCES += \
$${DOMO_SRC}/xos/app/console/domo/main_opt.cpp \
$${DOMO_SRC}/xos/app/console/domo/main.cpp \

########################################################################
# domo_exe FRAMEWORKS
#
domo_exe_FRAMEWORKS += \
$${domo_FRAMEWORKS} \

# domo_exe LIBS
#
domo_exe_LIBS += \
$${domo_LIBS} \

########################################################################
# NO Qt
QT -= gui core


