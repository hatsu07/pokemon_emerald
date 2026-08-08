	@ data/maps/JaggedPass/scripts.inc:244 JaggedPass_Text_JulioIntro (+1 aliases)
	.globl gText_Rom_21606A
gText_Rom_21606A: @ 0x0821606A
	.string "じてんしゃで いっきに\nおりて くると こわいぃぃ!$"
	.if (. - gText_Rom_21606A) > 0x1b
	.error "gText_Rom_21606A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21606A) < 0x1b
	.space 0x1b - (. - gText_Rom_21606A)
	.endif
