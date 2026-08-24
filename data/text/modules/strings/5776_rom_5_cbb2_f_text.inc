	@ src/strings.c:590 gText_OriginalSongWillBeUsed
	.globl gText_OriginalSongWillBeUsed
gText_OriginalSongWillBeUsed: @ 0x085CBB2F
	.string "うたを もとに もどします!{EOS}"
	.if (. - gText_OriginalSongWillBeUsed) > 0xf
	.error "gText_OriginalSongWillBeUsed may not grow beyond its original slot"
	.endif
	.if (. - gText_OriginalSongWillBeUsed) < 0xf
	.space 0xf - (. - gText_OriginalSongWillBeUsed)
	.endif
