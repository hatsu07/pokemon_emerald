	@ src/strings.c:603 gText_WhatsHipAndHappening
	.globl gText_WhatsHipAndHappening
gText_WhatsHipAndHappening: @ 0x085CBBEA
	.string "はやっている ものは?{EOS}"
	.if (. - gText_WhatsHipAndHappening) > 0xc
	.error "gText_WhatsHipAndHappening may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatsHipAndHappening) < 0xc
	.space 0xc - (. - gText_WhatsHipAndHappening)
	.endif
