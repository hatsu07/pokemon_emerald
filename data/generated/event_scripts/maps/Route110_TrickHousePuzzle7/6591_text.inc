	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:338 Route110_TrickHousePuzzle7_Text_AlexisIntro (+1 aliases)
	.globl gText_Rom_240335
gText_Rom_240335: @ 0x08240335
	.string "かった ほうが さきに このしかけを\nぬけられる よかんが するわ!$"
	.if (. - gText_Rom_240335) > 0x23
	.error "gText_Rom_240335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240335) < 0x23
	.space 0x23 - (. - gText_Rom_240335)
	.endif
