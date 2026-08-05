	@ src/strings.c:862 gJPText_ReceiveMysteryGiftWithEReader
	.globl gText_Rom_5CCEEC
gText_Rom_5CCEEC: @ 0x085CCEEC
	.string "カードeリーダー{PLUS} で\nふしぎなもらいものを よみこみます$"
	.if (. - gText_Rom_5CCEEC) > 0x1f
	.error "gText_Rom_5CCEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEEC) < 0x1f
	.space 0x1f - (. - gText_Rom_5CCEEC)
	.endif
