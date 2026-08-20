	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:359 Route110_TrickHousePuzzle7_Text_AlvaroDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2403EB
gText_Rom_2403EB: @ 0x082403EB
	.string "こんな けっかは\nみえなかった{EOS}"
	.if (. - gText_Rom_2403EB) != 0x10
	.error "gText_Rom_2403EB must retain its original byte length"
	.endif
