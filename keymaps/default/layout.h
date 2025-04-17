#pragma once

#include "quantum.h"

// LAYOUT macro based on your 7-col left / 6-col right matrix
#define LAYOUT( \
  k00, k01, k02, k03, k04, k05, k06,        k50, k51, k52, k53, k54, k55, \
  k10, k11, k12, k13, k14, k15, k16,        k60, k61, k62, k63, k64, k65, \
  k20, k21, k22, k23, k24, k25, k26,        k70, k71, k72, k73, k74, k75, \
  k30, k31, k32, k33, k34, k35, k36,        k80, k81, k82, k83, k84, k85, \
                k41, k42, k43, k44,        k90, k91, k92, k93, k94       \
) \
{ \
  { k00, k01, k02, k03, k04, k05, k06 }, \
  { k10, k11, k12, k13, k14, k15, k16 }, \
  { k20, k21, k22, k23, k24, k25, k26 }, \
  { k30, k31, k32, k33, k34, k35, k36 }, \
  { KC_NO, k41, k42, k43, k44, KC_NO, KC_NO }, \
  { k50, k51, k52, k53, k54, k55, KC_NO }, \
  { k60, k61, k62, k63, k64, k65, KC_NO }, \
  { k70, k71, k72, k73, k74, k75, KC_NO }, \
  { k80, k81, k82, k83, k84, k85, KC_NO }, \
  { k90, k91, k92, k93, k94, KC_NO, KC_NO } \
}

