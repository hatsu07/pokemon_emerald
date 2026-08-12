
	@ src/strings.c:416 gText_DelRegist
	.globl gText_Rom_5CA69A
gText_Rom_5CA69A: @ 0x085CA69A
	.string "とうろく かいじょ$"
	.if (. - gText_Rom_5CA69A) > 0xa
	.error "gText_Rom_5CA69A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA69A) < 0xa
	.space 0xa - (. - gText_Rom_5CA69A)
	.endif

	@ src/strings.c:417 gText_Var3Var1SlashVar2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA6A4
gText_Rom_5CA6A4: @ 0x085CA6A4
	.string "{STR_VAR_3}{STR_VAR_1}/{STR_VAR_2}$"
	.if (. - gText_Rom_5CA6A4) != 0x8
	.error "gText_Rom_5CA6A4 must retain its original byte length"
	.endif
