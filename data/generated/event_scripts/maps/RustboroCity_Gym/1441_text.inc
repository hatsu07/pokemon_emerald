	@ data/maps/RustboroCity_Gym/scripts.inc:145 RustboroCity_Gym_Text_JoshDefeat (+1 aliases)
	.globl gText_Rom_202636
gText_Rom_202636: @ 0x08202636
	.string "じつりょくが ちがいすぎた……!$"
	.if (. - gText_Rom_202636) > 0x11
	.error "gText_Rom_202636 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202636) < 0x11
	.space 0x11 - (. - gText_Rom_202636)
	.endif
