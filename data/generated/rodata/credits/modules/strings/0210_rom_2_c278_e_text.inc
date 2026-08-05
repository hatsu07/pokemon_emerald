	@ src/strings.c:1061 gText_CommunicationError
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C278E
gText_Rom_2C278E: @ 0x082C278E
	.string "  つうしんに しっぱい しました$"
	.if (. - gText_Rom_2C278E) != 0x12
	.error "gText_Rom_2C278E must retain its original byte length"
	.endif
