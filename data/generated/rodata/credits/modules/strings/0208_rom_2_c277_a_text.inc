	@ src/strings.c:1060 gText_CommunicationCompleted
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C277A
gText_Rom_2C277A: @ 0x082C277A
	.string "  つうしんが しゅうりょう しました$"
	.if (. - gText_Rom_2C277A) != 0x14
	.error "gText_Rom_2C277A must retain its original byte length"
	.endif
