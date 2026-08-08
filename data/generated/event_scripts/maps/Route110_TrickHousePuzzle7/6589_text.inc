	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:335 Route110_TrickHousePuzzle7_Text_PatriciaPostBattle
	.globl gText_Rom_240310
gText_Rom_240310: @ 0x08240310
	.string "わたしは もう 10かい いじょう\nまわってしまった…… ふきつだわ……$"
	.if (. - gText_Rom_240310) > 0x25
	.error "gText_Rom_240310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240310) < 0x25
	.space 0x25 - (. - gText_Rom_240310)
	.endif
