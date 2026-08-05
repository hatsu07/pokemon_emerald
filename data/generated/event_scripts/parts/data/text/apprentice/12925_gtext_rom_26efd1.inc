	@ data/text/apprentice.inc:304 gText_ApprenticeHoldNothing4
	.globl gText_Rom_26EFD1
gText_Rom_26EFD1: @ 0x0826EFD1
	.string "あら! {STR_VAR_1}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_Rom_26EFD1) > 0x1c
	.error "gText_Rom_26EFD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EFD1) < 0x1c
	.space 0x1c - (. - gText_Rom_26EFD1)
	.endif
