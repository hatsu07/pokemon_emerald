	@ data/maps/RustboroCity_Gym/scripts.inc:156 RustboroCity_Gym_Text_TommyDefeat (+1 aliases)
	.globl gText_Rom_20268E
gText_Rom_20268E: @ 0x0820268E
	.string "すごい じつりょくだ!$"
	.if (. - gText_Rom_20268E) > 0xc
	.error "gText_Rom_20268E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20268E) < 0xc
	.space 0xc - (. - gText_Rom_20268E)
	.endif
