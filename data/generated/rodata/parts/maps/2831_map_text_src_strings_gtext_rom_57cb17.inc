	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_57CB17
gText_Rom_57CB17: @ 0x0857CB17
	.string "アジト$"
	.if (. - gText_Rom_57CB17) > 0x4
	.error "gText_Rom_57CB17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB17) < 0x4
	.space 0x4 - (. - gText_Rom_57CB17)
	.endif
	@ Decoded text from ROM range: offset=0x57CB1B, size=0x11
	.string "シルフカンパニー$"
	.string "ポケモンやしき$"
