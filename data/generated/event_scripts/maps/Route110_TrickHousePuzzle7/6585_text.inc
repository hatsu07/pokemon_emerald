	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:329 Route110_TrickHousePuzzle7_Text_PatriciaIntro (+1 aliases)
	.globl gText_Rom_2402DC
gText_Rom_2402DC: @ 0x082402DC
	.string "おなじところを つづけて\nなんども まわると ふきつなのよ……{EOS}"
	.if (. - gText_Rom_2402DC) > 0x20
	.error "gText_Rom_2402DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402DC) < 0x20
	.space 0x20 - (. - gText_Rom_2402DC)
	.endif
