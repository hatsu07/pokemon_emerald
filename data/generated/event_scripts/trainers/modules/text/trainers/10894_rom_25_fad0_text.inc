	@ data/text/trainers.inc:2426 Route123_Text_CameronDefeat (+2 aliases)
	.globl gText_Rom_25FAD0
gText_Rom_25FAD0: @ 0x0825FAD0
	.string "しょんぼり……$"
	.if (. - gText_Rom_25FAD0) > 0x8
	.error "gText_Rom_25FAD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FAD0) < 0x8
	.space 0x8 - (. - gText_Rom_25FAD0)
	.endif
