	@ src/strings.c:590 gText_OriginalSongWillBeUsed
	.globl gText_Rom_5CBB2F
gText_Rom_5CBB2F: @ 0x085CBB2F
	.string "うたを もとに もどします!{EOS}"
	.if (. - gText_Rom_5CBB2F) > 0xf
	.error "gText_Rom_5CBB2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB2F) < 0xf
	.space 0xf - (. - gText_Rom_5CBB2F)
	.endif
