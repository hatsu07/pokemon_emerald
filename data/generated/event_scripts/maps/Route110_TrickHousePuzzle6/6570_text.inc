	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:66 Route110_TrickHousePuzzle6_Text_SebastianIntro (+1 aliases)
	.globl gText_Rom_23FE65
gText_Rom_23FE65: @ 0x0823FE65
	.string "かいてん する とびらで\nめが まわってきた……$"
	.if (. - gText_Rom_23FE65) > 0x19
	.error "gText_Rom_23FE65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE65) < 0x19
	.space 0x19 - (. - gText_Rom_23FE65)
	.endif
