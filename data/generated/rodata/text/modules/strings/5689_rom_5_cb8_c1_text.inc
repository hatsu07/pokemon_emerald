	@ src/strings.c:547 gText_FeelingsRightNow
	.globl gText_Rom_5CB8C1
gText_Rom_5CB8C1: @ 0x085CB8C1
	.string "ことばを みつけよう!{EOS}"
	.if (. - gText_Rom_5CB8C1) > 0xc
	.error "gText_Rom_5CB8C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8C1) < 0xc
	.space 0xc - (. - gText_Rom_5CB8C1)
	.endif
