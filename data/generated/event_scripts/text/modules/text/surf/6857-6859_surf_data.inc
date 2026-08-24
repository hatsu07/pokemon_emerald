	@ data/text/surf.inc:1 gText_WantToUseSurf
	.globl gText_WantToUseSurf
gText_WantToUseSurf: @ 0x08243C8B
	.string "みずは ふかい あおに そまっている……\nなみのりを つかいますか?{EOS}"
	.if (. - gText_WantToUseSurf) > 0x23
	.error "gText_WantToUseSurf may not grow beyond its original slot"
	.endif
	.if (. - gText_WantToUseSurf) < 0x23
	.space 0x23 - (. - gText_WantToUseSurf)
	.endif

	@ data/text/surf.inc:5 gText_PlayerUsedSurf
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PlayerUsedSurf
gText_PlayerUsedSurf: @ 0x08243CAE
	.string "{STR_VAR_1}は\nなみのりを つかった!{EOS}"
	.if (. - gText_PlayerUsedSurf) != 0x10
	.error "gText_PlayerUsedSurf must retain its original byte length"
	.endif
