	@ asm/battle_records.s:542 PrintLinkBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_593811
gText_Rom_593811: @ 0x08593811
	.string "ーーーーー$"
	.if (. - gText_Rom_593811) != 0x6
	.error "gText_Rom_593811 must retain its original byte length"
	.endif
