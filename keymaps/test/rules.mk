# Core features
 LTO_ENABLE = yes            # Link Time Optimization enabled
# BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control, needed for encoder volume
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = yes        # Enable WS2812 RGB underlight.
RGBLIGHT_SPLIT = yes
RGB_MATRIX_ENABLE = no
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
VIA_ENABLE = yes            # Enable Via website to work/ its broken and cant show custom layout even on rev1 and r2g
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
SPLIT_KEYBOARD = yes
#OLED_ENABLE = yes
RGBLIGHT_ANIMATIONS = no
RGBLIGHT_EFFECT_BREATHING = no
RGBLIGHT_EFFECT_RAINBOW_MOOD = no


# Allow config.h to detect left/right builds
EXTRAFLAGS += -DKEYMAP_SUFFIX_$(KEYMAP_SUFFIX)
## ------------------------
## ========== LEFT ==========
## ------------------------
ifeq ($(KEYMAP_SUFFIX), left)
    POINTING_DEVICE_ENABLE = no
    OLED_ENABLE = yes
endif

## ------------------------
## ========== RIGHT ==========
## ------------------------
ifeq ($(KEYMAP_SUFFIX), right)
    POINTING_DEVICE_ENABLE = yes
	POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
    OLED_ENABLE = yes
    CONSOLE_ENABLE = no
    COMMAND_ENABLE = no
    MOUSEKEY_ENABLE = no
    TAP_DANCE_ENABLE = no
    SPLIT_WPM_ENABLE = no
    SPLIT_TRANSPORT_MIRROR = no
endif