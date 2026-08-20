	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:93 RustboroCity_Flat1_2F_Text_LetsGiveItATry2 (+1 aliases)
	.globl gText_Rom_203A2F
gText_Rom_203A2F: @ 0x08203A2F
	.string "なるほどー\nじゃあ ためして みようかな{EOS}"
	.if (. - gText_Rom_203A2F) > 0x15
	.error "gText_Rom_203A2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A2F) < 0x15
	.space 0x15 - (. - gText_Rom_203A2F)
	.endif
