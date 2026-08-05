	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_598999
gText_Rom_598999: @ 0x08598999
	.string "アジト$"
	.if (. - gText_Rom_598999) > 0x4
	.error "gText_Rom_598999 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598999) < 0x4
	.space 0x4 - (. - gText_Rom_598999)
	.endif
