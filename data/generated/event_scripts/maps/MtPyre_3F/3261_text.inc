	@ data/maps/MtPyre_3F/scripts.inc:44 MtPyre_3F_Text_WilliamPostBattle
	.globl gText_Rom_2166C5
gText_Rom_2166C5: @ 0x082166C5
	.string "わたしの サイコパワーは かくじつに\nつよく なっている はずなのに……$"
	.if (. - gText_Rom_2166C5) > 0x25
	.error "gText_Rom_2166C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2166C5) < 0x25
	.space 0x25 - (. - gText_Rom_2166C5)
	.endif
