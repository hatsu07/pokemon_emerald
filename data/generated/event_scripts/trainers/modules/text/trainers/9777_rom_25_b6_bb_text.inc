	@ data/text/trainers.inc:809 Route110_Text_JaclynDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B6BB
gText_Rom_25B6BB: @ 0x0825B6BB
	.string "ミラクルに まけたーっ!$"
	.if (. - gText_Rom_25B6BB) != 0xd
	.error "gText_Rom_25B6BB must retain its original byte length"
	.endif
