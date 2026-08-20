	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:54 Route110_TrickHousePuzzle4_Text_PaulaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23ECC4
gText_Rom_23ECC4: @ 0x0823ECC4
	.string "ああっ!{EOS}"
	.if (. - gText_Rom_23ECC4) != 0x5
	.error "gText_Rom_23ECC4 must retain its original byte length"
	.endif
