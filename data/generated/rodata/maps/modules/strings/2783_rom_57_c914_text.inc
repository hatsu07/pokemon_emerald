	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_57C914
gText_Rom_57C914: @ 0x0857C914
	.string "アジト$"
	.if (. - gText_Rom_57C914) > 0x4
	.error "gText_Rom_57C914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C914) < 0x4
	.space 0x4 - (. - gText_Rom_57C914)
	.endif
