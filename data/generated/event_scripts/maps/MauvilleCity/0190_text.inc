	@ data/maps/MauvilleCity/scripts.inc:560 MauvilleCity_Text_RegisteredWally
	.globl gText_Rom_1DE221
gText_Rom_1DE221: @ 0x081DE221
	.string "ミツルを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_1DE221) > 0x14
	.error "gText_Rom_1DE221 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE221) < 0x14
	.space 0x14 - (. - gText_Rom_1DE221)
	.endif
