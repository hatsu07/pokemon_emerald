	@ src/strings.c:1025 gText_WirelessCommStatus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C31DC
gText_Rom_2C31DC: @ 0x082C31DC
	.string "ワイヤレス つうしん じょうきょう$"
	.if (. - gText_Rom_2C31DC) != 0x12
	.error "gText_Rom_2C31DC must retain its original byte length"
	.endif
