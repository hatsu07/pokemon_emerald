	@ src/strings.c:1062 gText_CommunicationCanceled
	.globl gText_Rom_2C27A0
gText_Rom_2C27A0: @ 0x082C27A0
	.string "つうしんを キャンセル しました$"
	.if (. - gText_Rom_2C27A0) > 0x11
	.error "gText_Rom_2C27A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C27A0) < 0x11
	.space 0x11 - (. - gText_Rom_2C27A0)
	.endif
