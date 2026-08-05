	@ src/strings.c:872 gJPText_AllowEReaderToLoadCard
	.globl gText_Rom_5CCFF2
gText_Rom_5CCFF2: @ 0x085CCFF2
	.string "カードeリーダー{PLUS} に\nカードを よみこませて ください$"
	.if (. - gText_Rom_5CCFF2) > 0x1e
	.error "gText_Rom_5CCFF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFF2) < 0x1e
	.space 0x1e - (. - gText_Rom_5CCFF2)
	.endif
