	@ data/text/trainers.inc:2204 Route120_Text_ClarissaDefeat (+1 aliases)
	.globl gText_Rom_25F1B7
gText_Rom_25F1B7: @ 0x0825F1B7
	.string "パラソルで ポケモンの こうげきは\nしのげないのね……{EOS}"
	.if (. - gText_Rom_25F1B7) > 0x1c
	.error "gText_Rom_25F1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F1B7) < 0x1c
	.space 0x1c - (. - gText_Rom_25F1B7)
	.endif
