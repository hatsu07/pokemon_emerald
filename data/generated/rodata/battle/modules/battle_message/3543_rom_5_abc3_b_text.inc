	@ src/battle_message.c:1475 gText_SafariBalls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABC3B
gText_Rom_5ABC3B: @ 0x085ABC3B
	.string "サファリボール$"
	.if (. - gText_Rom_5ABC3B) != 0x8
	.error "gText_Rom_5ABC3B must retain its original byte length"
	.endif
