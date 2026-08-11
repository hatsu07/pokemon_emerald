	@ Priority A: wall-clock graphics split into exact semantic assets.
	@ Priority A: wall-clock graphics split into exact semantic assets.
	.globl gWallclockHand_Gfx
gWallclockHand_Gfx: @ 0x08591074
	.incbin "graphics/wallclock/rom_exact/hand.4bpp.lz"
	.if (. - gWallclockHand_Gfx) != 0x298
	.error "gWallclockHand_Gfx exact asset size mismatch"
	.endif
	.globl gWallClock_Gfx
gWallClock_Gfx: @ 0x0859130C
	.incbin "graphics/wallclock/rom_exact/clock.4bpp.lz"
	.if (. - gWallClock_Gfx) != 0x8F8
	.error "gWallClock_Gfx exact asset size mismatch"
	.endif
	.globl gUnknown_8591C04
gUnknown_8591C04: @ 0x08591C04

