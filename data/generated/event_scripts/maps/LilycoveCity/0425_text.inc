	@ data/maps/LilycoveCity/scripts.inc:673 LilycoveCity_Text_MotelSign
	.globl gText_Rom_1E1234
gText_Rom_1E1234: @ 0x081E1234
	.string "「みんしゅく モナミ」\nミナモのモナミ と おぼえて ください{EOS}"
	.if (. - gText_Rom_1E1234) > 0x20
	.error "gText_Rom_1E1234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1234) < 0x20
	.space 0x20 - (. - gText_Rom_1E1234)
	.endif
