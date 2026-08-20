	@ data/text/surf.inc:1 gText_WantToUseSurf
	.globl gText_Rom_243C8B
gText_Rom_243C8B: @ 0x08243C8B
	.string "みずは ふかい あおに そまっている……\nなみのりを つかいますか?{EOS}"
	.if (. - gText_Rom_243C8B) > 0x23
	.error "gText_Rom_243C8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243C8B) < 0x23
	.space 0x23 - (. - gText_Rom_243C8B)
	.endif

	@ data/text/surf.inc:5 gText_PlayerUsedSurf
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_243CAE
gText_Rom_243CAE: @ 0x08243CAE
	.string "{STR_VAR_1}は\nなみのりを つかった!{EOS}"
	.if (. - gText_Rom_243CAE) != 0x10
	.error "gText_Rom_243CAE must retain its original byte length"
	.endif
