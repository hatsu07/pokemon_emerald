	@ src/roulette.c:420 Roulette_Text_NotEnoughCoins
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262D18
gText_Rom_262D18: @ 0x08262D18
	.string "コインが たりません$"
	.if (. - gText_Rom_262D18) != 0xb
	.error "gText_Rom_262D18 must retain its original byte length"
	.endif
