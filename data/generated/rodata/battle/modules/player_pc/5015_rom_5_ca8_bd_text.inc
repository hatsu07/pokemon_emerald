	@ src/player_pc.c:172 sText_DepositItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8BD
gText_Rom_5CA8BD: @ 0x085CA8BD
	.string "どうぐを あずける$"
	.if (. - gText_Rom_5CA8BD) != 0xa
	.error "gText_Rom_5CA8BD must retain its original byte length"
	.endif
