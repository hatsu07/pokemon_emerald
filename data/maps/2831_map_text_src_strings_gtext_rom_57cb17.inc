	@ src/strings.c:640 gText_Hideout
	.globl gText_Hideout_Copy_Maps
gText_Hideout_Copy_Maps: @ 0x0857CB17
	.string "アジト{EOS}"
	.if (. - gText_Hideout_Copy_Maps) > 0x4
	.error "gText_Hideout_Copy_Maps may not grow beyond its original slot"
	.endif
	.if (. - gText_Hideout_Copy_Maps) < 0x4
	.space 0x4 - (. - gText_Hideout_Copy_Maps)
	.endif
	@ Decoded text from ROM range: offset=0x57CB1B, size=0x11
	.string "シルフカンパニー{EOS}"
	.string "ポケモンやしき{EOS}"
