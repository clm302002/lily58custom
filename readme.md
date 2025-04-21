# lily58custom

> ⚠️ **DO NOT USE THIS REPO UNLESS YOU KNOW EXACTLY WHAT YOU'RE DOING**  
> This project is heavily customized for a **non-standard Lily58 layout**, and **will not work out of the box** on typical builds. It includes custom matrix changes, additional columns, and hardware-specific modifications.

---
![Alt text](pictures/My%20Lily58%20Assembled.jpg)
## Overview

This fork of the Lily58 is tailored specifically for experimental hardware mods and layout changes. It is **not compatible** with standard QMK Lily58 firmware or configurations.

### Custom Features

- **Custom column wiring** on the left half of the board for experimental key/button placement.
- Integration of the **Adafruit ANO Directional Navigation and Scroll Wheel Rotary Encoder**  
  🔗 https://www.adafruit.com/product/5001?gQT=1
- Addition of a **Cirque 40mm GlidePoint Trackpad** on the right half for cursor control.
- Dual **OLED screen support** with adjusted visibility for both halves.
- Symmetrical layout of rotary encoder and trackpad for visual balance.

---

## Case Design

- The base case design is derived from the **Capsule Deluxe** case by *Makerworld user CapsuleDeluxe*:  
  🔗 https://makerworld.com/en/models/671684-manta58-s-split-keyboard-case-for-lily58-pcbs#profileId-599425  
- I’ve modified this case to fit my custom hardware layout.  
  - My updated STL files will be added to this repo when finalized.
  - Custom parts to be included:
    - **Thick top plate**
    - **Rotary encoder mount**
    - **Cirque trackpad mount**

## Building
This folder needs to be downloaded into your qmk_firmware/keyboards/ folder so that qmk can build it using QMK MSYS.

Make example for this keyboard: using QMK MSYS, need to 

```bash
qmk compile -kb lily58custom -km test -e KEYMAP_SUFFIX=left && mv ~/qmk_firmware/.build/lily58custom_test.hex ~/qmk_firmware/.build/lily58_left.hex
qmk compile -kb lily58custom -km test -e KEYMAP_SUFFIX=right && mv ~/qmk_firmware/.build/lily58custom_test.hex ~/qmk_firmware/.build/lily58_right.hex
