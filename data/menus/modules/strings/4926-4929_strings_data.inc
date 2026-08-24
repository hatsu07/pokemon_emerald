
	@ src/strings.c:416 gText_DelRegist
	.globl gText_DelRegist
gText_DelRegist: @ 0x085CA69A
	.string "とうろく かいじょ{EOS}"
	.if (. - gText_DelRegist) > 0xa
	.error "gText_DelRegist may not grow beyond its original slot"
	.endif
	.if (. - gText_DelRegist) < 0xa
	.space 0xa - (. - gText_DelRegist)
	.endif

	@ src/strings.c:417 gText_Var3Var1SlashVar2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Var3Var1SlashVar2
gText_Var3Var1SlashVar2: @ 0x085CA6A4
	.string "{STR_VAR_3}{STR_VAR_1}/{STR_VAR_2}{EOS}"
	.if (. - gText_Var3Var1SlashVar2) != 0x8
	.error "gText_Var3Var1SlashVar2 must retain its original byte length"
	.endif
