	@ data/text/surf.inc:1 gText_WantToUseSurf
	.globl gText_Rom_243C8B
gText_Rom_243C8B: @ 0x08243C8B
	.string "みずは ふかい あおに そまっている……\nなみのりを つかいますか?$"
	.if (. - gText_Rom_243C8B) > 0x23
	.error "gText_Rom_243C8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243C8B) < 0x23
	.space 0x23 - (. - gText_Rom_243C8B)
	.endif
