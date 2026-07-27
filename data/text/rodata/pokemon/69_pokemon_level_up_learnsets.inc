	.include "data/pokemon/level_up_learnsets.inc"

	.globl gUnknown_82F5CA4
gUnknown_82F5CA4: @ 0x082F5CA4
	.incbin "baserom.gba", 0x2f5ca4, 0x4060

	.include "data/pokemon/level_up_learnset_pointers.inc"

	.include "data/pokemon/evolution.inc"
