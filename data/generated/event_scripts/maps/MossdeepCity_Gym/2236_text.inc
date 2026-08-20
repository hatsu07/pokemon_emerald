	@ data/maps/MossdeepCity_Gym/scripts.inc:441 MossdeepCity_Gym_Text_NateIntro (+1 aliases)
	.globl gText_Rom_20BC91
gText_Rom_20BC91: @ 0x0820BC91
	.string "ほっほっほ\pエスパータイプの てごわさを\nあなたに おしえて さしあげましょう{EOS}"
	.if (. - gText_Rom_20BC91) > 0x28
	.error "gText_Rom_20BC91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC91) < 0x28
	.space 0x28 - (. - gText_Rom_20BC91)
	.endif
