	@ data/maps/RustboroCity_House1/scripts.inc:39 RustboroCity_House1_Text_DoesntLookLikeMonToMe
	.globl gText_Rom_203CDF
gText_Rom_203CDF: @ 0x08203CDF
	.string "えー どうみても {STR_VAR_1}に\nみえないんだけど……{EOS}"
	.if (. - gText_Rom_203CDF) > 0x18
	.error "gText_Rom_203CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CDF) < 0x18
	.space 0x18 - (. - gText_Rom_203CDF)
	.endif
