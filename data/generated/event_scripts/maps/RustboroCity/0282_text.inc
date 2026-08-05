	@ data/maps/RustboroCity/scripts.inc:1186 RustboroCity_Text_RegisteredBrendan
	.globl gText_Rom_1DF95F
gText_Rom_1DF95F: @ 0x081DF95F
	.string "ユウキを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_1DF95F) > 0x14
	.error "gText_Rom_1DF95F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF95F) < 0x14
	.space 0x14 - (. - gText_Rom_1DF95F)
	.endif
