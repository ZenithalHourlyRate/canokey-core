#ifndef CANOKEY_CORE_INCLUDE_COMMON_H
#define CANOKEY_CORE_INCLUDE_COMMON_H

#include <fs.h>
#include <memory.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#define LO(x) ((uint8_t)((x)&0xFFu))
#define HI(x) ((uint8_t)((x) >> 8u))

uint16_t tlv_get_length(const uint8_t *data);
uint8_t tlv_length_size(uint16_t length);

#endif // CANOKEY_CORE_INCLUDE_COMMON_H