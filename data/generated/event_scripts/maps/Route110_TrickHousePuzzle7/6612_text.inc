	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:368 Route110_TrickHousePuzzle7_Text_EverettDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_240431
gText_Rom_240431: @ 0x08240431
	.string "おお つよいつよい$"
	.if (. - gText_Rom_240431) != 0xa
	.error "gText_Rom_240431 must retain its original byte length"
	.endif
