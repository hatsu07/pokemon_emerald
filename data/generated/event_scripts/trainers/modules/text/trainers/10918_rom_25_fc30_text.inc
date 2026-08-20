	@ data/text/trainers.inc:2462 Route123_Text_JackiPostRematch
	.globl gText_Rom_25FC30
gText_Rom_25FC30: @ 0x0825FC30
	.string "あなたの つよさ\nそれも ちょうのうりょく かもね{EOS}"
	.if (. - gText_Rom_25FC30) > 0x1a
	.error "gText_Rom_25FC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FC30) < 0x1a
	.space 0x1a - (. - gText_Rom_25FC30)
	.endif
