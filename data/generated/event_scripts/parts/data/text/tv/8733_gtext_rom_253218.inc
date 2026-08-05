	@ data/text/tv.inc:1168 GabbyAndTy_Text_KeepingAnEyeOutForYou
	.globl gText_Rom_253218
gText_Rom_253218: @ 0x08253218
	.string "マリ『あなたの こと\nちゅうもく してるわ!"
	.byte EOS
	.if (. - gText_Rom_253218) > 0x17
	.error "gText_Rom_253218 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253218) < 0x17
	.space 0x17 - (. - gText_Rom_253218)
	.endif
