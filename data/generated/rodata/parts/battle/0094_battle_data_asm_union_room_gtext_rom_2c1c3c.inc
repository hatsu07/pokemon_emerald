	@ asm/union_room.s:5364 sub_08014DFC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1C3C
gText_Rom_2C1C3C: @ 0x082C1C3C
	.string "ジョイスポットを　さがしています\nしばらく　おまちください$"
	.if (. - gText_Rom_2C1C3C) != 0x1e
	.error "gText_Rom_2C1C3C must retain its original byte length"
	.endif
