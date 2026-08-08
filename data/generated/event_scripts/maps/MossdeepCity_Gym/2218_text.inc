	@ data/maps/MossdeepCity_Gym/scripts.inc:414 MossdeepCity_Gym_Text_SamanthaIntro (+1 aliases)
	.globl gText_Rom_20BB29
gText_Rom_20BB29: @ 0x0820BB29
	.string "みえる……\nあなたの みらいが みえる……\pわたくしに かてたら\nあなたの みらいを おしえて あげる!$"
	.if (. - gText_Rom_20BB29) > 0x35
	.error "gText_Rom_20BB29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BB29) < 0x35
	.space 0x35 - (. - gText_Rom_20BB29)
	.endif
