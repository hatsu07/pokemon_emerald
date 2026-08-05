	@ src/strings.c:860 gJPText_MysteryGift
	.globl gText_Rom_5CCED5
gText_Rom_5CCED5: @ 0x085CCED5
	.string "ふしぎなもらいもの$"
	.if (. - gText_Rom_5CCED5) > 0xa
	.error "gText_Rom_5CCED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCED5) < 0xa
	.space 0xa - (. - gText_Rom_5CCED5)
	.endif
