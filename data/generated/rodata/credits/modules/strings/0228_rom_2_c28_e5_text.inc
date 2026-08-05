	@ src/strings.c:1074 gText_NoMoreRoomForStamps
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C28E5
gText_Rom_2C28E5: @ 0x082C28E5
	.string "   スタンプが いっぱい なので\nもう おせません!$"
	.if (. - gText_Rom_2C28E5) != 0x1c
	.error "gText_Rom_2C28E5 must retain its original byte length"
	.endif
