	@ src/strings.c:1145 gText_CommStandbyAwaitingOtherPlayer
	.globl gText_Rom_2C32C3
gText_Rom_2C32C3: @ 0x082C32C3
	.string "つうしんたいきちゅう\nあいての せんたくを まっています…$"
	.if (. - gText_Rom_2C32C3) > 0x1e
	.error "gText_Rom_2C32C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32C3) < 0x1e
	.space 0x1e - (. - gText_Rom_2C32C3)
	.endif
