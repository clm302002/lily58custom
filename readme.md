# lily58custom

> ⚠️ **DO NOT USE THIS REPO UNLESS YOU KNOW EXACTLY WHAT YOU'RE DOING**  
> This project is heavily customized for a **non-standard Lily58 layout**, and **will not work out of the box** on typical builds. It includes custom matrix changes, additional columns, and hardware-specific modifications.

---

## Overview

This fork of the Lily58 is tailored specifically for experimental hardware mods and layout changes. It is **not compatible** with standard QMK Lily58 firmware or configurations.

Key modifications and goals include:

- **Custom column wiring** on the left half of the board for experimental key/button placement.
- Integration of the **Adafruit ANO Directional Navigation and Scroll Wheel Rotary Encoder**:  
  🔗 https://www.adafruit.com/product/5001?gQT=1
- Addition of a **Cirque 40mm GlidePoint Trackpad** on the right half for cursor control.
- Dual **OLED screen support** (both halves) with adjusted positioning to remain visible even with additional hardware.
- Symmetric positioning of rotary and trackpad components for visual balance.

---

## Maintainer

* Cody McKinney – [GitHub](https://github.com/clm302002)

---

## Building

Make example for this keyboard:

```bash
make lily58custom:default
