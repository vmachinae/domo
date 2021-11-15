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
#   File: domo.pro
#
# Author: $author$
#   Date: 11/14/2021
#
# QtCreator .pro file for domo executable domo
########################################################################
include(../../../../../build/QtCreator/domo.pri)
include(../../../../QtCreator/domo.pri)
include(../../domo.pri)
include(../../../../QtCreator/app/domo/domo.pri)

TARGET = $${domo_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${domo_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${domo_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${domo_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${domo_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${domo_exe_HEADERS} \
$${domo_exe_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${domo_exe_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${domo_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${domo_exe_LIBS} \
$${FRAMEWORKS} \


