	@ data/text/trainers.inc:320 Route105_Text_DominikIntro (+1 aliases)
	.globl gText_Rom_25A380
gText_Rom_25A380: @ 0x0825A380
	.string "あおい うみで およいでいると\nさいこうの きぶん だな!{EOS}"
	.if (. - gText_Rom_25A380) > 0x1e
	.error "gText_Rom_25A380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A380) < 0x1e
	.space 0x1e - (. - gText_Rom_25A380)
	.endif
