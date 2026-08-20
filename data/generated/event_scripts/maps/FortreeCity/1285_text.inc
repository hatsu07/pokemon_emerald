	@ data/maps/FortreeCity/scripts.inc:136 FortreeCity_Text_UnseeableUseDevonScope (+1 aliases)
	.globl gText_Rom_1EE039
gText_Rom_1EE039: @ 0x081EE039
	.string "みえない なにかが いるようだ\pデボンスコープを つかいますか?{EOS}"
	.if (. - gText_Rom_1EE039) > 0x21
	.error "gText_Rom_1EE039 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE039) < 0x21
	.space 0x21 - (. - gText_Rom_1EE039)
	.endif
