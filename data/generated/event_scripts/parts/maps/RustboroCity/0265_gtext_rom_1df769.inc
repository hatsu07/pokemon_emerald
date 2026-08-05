	@ data/maps/RustboroCity/scripts.inc:1137 RustboroCity_Text_RegisteredMay
	.globl gText_Rom_1DF769
gText_Rom_1DF769: @ 0x081DF769
	.string "ハルカを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_1DF769) > 0x14
	.error "gText_Rom_1DF769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF769) < 0x14
	.space 0x14 - (. - gText_Rom_1DF769)
	.endif
