	@ data/maps/FortreeCity/scripts.inc:136 FortreeCity_Text_UnseeableUseDevonScope (+1 aliases)
	.globl gText_Rom_1E00C0
gText_Rom_1E00C0: @ 0x081E00C0
	.string "みえない なにかが いるようだ\pデボンスコープを つかいますか?$"
	.if (. - gText_Rom_1E00C0) > 0x21
	.error "gText_Rom_1E00C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E00C0) < 0x21
	.space 0x21 - (. - gText_Rom_1E00C0)
	.endif
