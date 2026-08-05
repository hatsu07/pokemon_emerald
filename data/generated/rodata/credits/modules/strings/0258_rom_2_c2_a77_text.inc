	@ src/strings.c:1091 gText_CantSendGiftToTrainer
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C2A77
gText_Rom_2C2A77: @ 0x082C2A77
	.string " この あいて には\nふしぎなおくりものを わたせません$"
	.if (. - gText_Rom_2C2A77) != 0x1d
	.error "gText_Rom_2C2A77 must retain its original byte length"
	.endif
