	.include "asm/macros/semantic_raw_structs.inc"

	@ Canonical first cluster recovered from JP ROM and matched to pret/pokeemerald.
	.globl sGiftRibbonsMonDataIds
sGiftRibbonsMonDataIds: @ 0x08569552
	@ MON_DATA_MARINE/LAND/SKY/COUNTRY/NATIONAL/EARTH/WORLD_RIBBON
	.byte 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E
	.balign 4, 0
