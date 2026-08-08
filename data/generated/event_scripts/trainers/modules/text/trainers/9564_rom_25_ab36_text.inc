	@ data/text/trainers.inc:500 Route107_Text_CamronDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AB36
gText_Rom_25AB36: @ 0x0825AB36
	.string "いまので つかれて しまった$"
	.if (. - gText_Rom_25AB36) != 0xf
	.error "gText_Rom_25AB36 must retain its original byte length"
	.endif
