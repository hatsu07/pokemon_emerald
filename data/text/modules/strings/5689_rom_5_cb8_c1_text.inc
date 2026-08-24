	@ src/strings.c:547 gText_FeelingsRightNow
	.globl gText_FeelingsRightNow
gText_FeelingsRightNow: @ 0x085CB8C1
	.string "ことばを みつけよう!{EOS}"
	.if (. - gText_FeelingsRightNow) > 0xc
	.error "gText_FeelingsRightNow may not grow beyond its original slot"
	.endif
	.if (. - gText_FeelingsRightNow) < 0xc
	.space 0xc - (. - gText_FeelingsRightNow)
	.endif
