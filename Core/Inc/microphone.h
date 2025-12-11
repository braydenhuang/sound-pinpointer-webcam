#ifndef MICROPHONE_H
#define MICROPHONE_H
#pragma once

#include <stdint.h>

#define MICROPHONE_BUFFER_LENGTH 64

typedef uint32_t microphone_t;
#define MICROPHONE_MAX ((microphone_t)UINT16_MAX)

microphone_t average(volatile microphone_t *values, size_t length);

microphone_t normalize(microphone_t raw_value);
#endif
