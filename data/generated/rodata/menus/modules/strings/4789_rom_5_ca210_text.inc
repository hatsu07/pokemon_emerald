	@ src/strings.c:350 gText_CancelParticipation
	.globl gText_Rom_5CA210
gText_Rom_5CA210: @ 0x085CA210
	.string "さんかを やめますか?$"
	.if (. - gText_Rom_5CA210) > 0xc
	.error "gText_Rom_5CA210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA210) < 0xc
	.space 0xc - (. - gText_Rom_5CA210)
	.endif
