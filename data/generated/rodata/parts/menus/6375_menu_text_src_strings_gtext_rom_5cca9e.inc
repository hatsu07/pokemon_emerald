	@ src/strings.c:788 gText_BattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA9E
gText_Rom_5CCA9E: @ 0x085CCA9E
	.string "たいせんの きろく$"
	.if (. - gText_Rom_5CCA9E) != 0xa
	.error "gText_Rom_5CCA9E must retain its original byte length"
	.endif
