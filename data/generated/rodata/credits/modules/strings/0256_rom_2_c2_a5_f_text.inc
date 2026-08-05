	@ src/strings.c:1090 gText_OtherTrainerCanceled
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A5F
gText_Rom_2C2A5F: @ 0x082C2A5F
	.string " あいてが つうしんを \nキャンセル しました$"
	.if (. - gText_Rom_2C2A5F) != 0x18
	.error "gText_Rom_2C2A5F must retain its original byte length"
	.endif
