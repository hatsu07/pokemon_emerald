	@ data/maps/SkyPillar_Outside/scripts.inc:139 SkyPillar_Outside_Text_DoorIsClosed (+1 aliases)
	.globl gText_Rom_1E2C4D
gText_Rom_1E2C4D: @ 0x081E2C4D
	.string "とびらは とざされて いる!$"
	.if (. - gText_Rom_1E2C4D) > 0xf
	.error "gText_Rom_1E2C4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C4D) < 0xf
	.space 0xf - (. - gText_Rom_1E2C4D)
	.endif
