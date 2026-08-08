	@ data/maps/RustboroCity_Gym/scripts.inc:152 RustboroCity_Gym_Text_TommyIntro (+1 aliases)
	.globl gText_Rom_202665
gText_Rom_202665: @ 0x08202665
	.string "ボクに かてる じつりょくが ないと\nツツジさん には ぜったい かなわないよ!$"
	.if (. - gText_Rom_202665) > 0x29
	.error "gText_Rom_202665 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202665) < 0x29
	.space 0x29 - (. - gText_Rom_202665)
	.endif
