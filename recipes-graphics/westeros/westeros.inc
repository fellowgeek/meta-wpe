LICENSE = "Apache-2.0"

PV = "1.0+gitr${SRCPV}"

SRC_URI = "${WESTEROS_URI}"
SRCREV = "${WESTEROS_SRCREV}"
#WESTEROS_URI ?= "git://github.com/rdkcmf/westeros"
#WESTEROS_SRCREV ?= "b9935ad80f9655219bd40fbcb213801303e3c571"
WESTEROS_URI ?= "git://github.com/Metrological/westeros"
WESTEROS_SRCREV ?= "9633867603dcfb2a5c71af71e7e1abd12f0c2ca3"
LICENSE_LOCATION ?= "${S}/LICENSE"
LIC_FILES_CHKSUM = "file://${LICENSE_LOCATION};md5=703f52ef306fb8ef480744cc0da110fe"

export SCANNER_TOOL = "wayland-scanner"

acpaths = "-I cfg"

DEPENDS += "wayland-native \
            gstreamer1.0 \
            wayland \
            libxkbcommon \
           "
