	@ src/strings.c:603 gText_WhatsHipAndHappening
	.globl gText_Rom_5CBBEA
gText_Rom_5CBBEA: @ 0x085CBBEA
	.string "はやっている ものは?{EOS}"
	.if (. - gText_Rom_5CBBEA) > 0xc
	.error "gText_Rom_5CBBEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBEA) < 0xc
	.space 0xc - (. - gText_Rom_5CBBEA)
	.endif
