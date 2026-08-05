	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:93 RustboroCity_Flat1_2F_Text_LetsGiveItATry2 (+1 aliases)
	.globl gText_Rom_2039FB
gText_Rom_2039FB: @ 0x082039FB
	.string "なるほどー\nじゃあ ためして みようかな$"
	.if (. - gText_Rom_2039FB) > 0x15
	.error "gText_Rom_2039FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2039FB) < 0x15
	.space 0x15 - (. - gText_Rom_2039FB)
	.endif
