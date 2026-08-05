	@ src/battle_message.c:393 battle_message_line_393
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAAAC
gText_Rom_5AAAAC: @ 0x085AAAAC
	.string "しかし うまく きまらなかった！$"
	.if (. - gText_Rom_5AAAAC) != 0x11
	.error "gText_Rom_5AAAAC must retain its original byte length"
	.endif
