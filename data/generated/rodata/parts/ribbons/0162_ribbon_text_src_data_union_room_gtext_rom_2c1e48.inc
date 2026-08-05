	@ src/data/union_room.h:565 sText_BattleTowerOpenLv
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E48
gText_Rom_2C1E48: @ 0x082C1E48
	.string "バトルタワー オープンレベル$"
	.if (. - gText_Rom_2C1E48) != 0xf
	.error "gText_Rom_2C1E48 must retain its original byte length"
	.endif
