#include "main.h"
#include "microphone.h"

microphone_t average(volatile microphone_t *values, size_t length) {
	if (values == NULL || length <= 0)
		return (microphone_t)NULL;

	microphone_t total = values[0];

	for (size_t i = 1; i < length; i++) {
		total += values[i];
	}

	return total / length;
}

microphone_t normalize(microphone_t raw_value) {
	return (MICROPHONE_MAX - raw_value) * 100;
}
