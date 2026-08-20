	@ data/text/trainers.inc:323 Route105_Text_DominikDefeated (+1 aliases)
	.globl gText_Rom_25A39E
gText_Rom_25A39E: @ 0x0825A39E
	.string "まけた……\nブルーな きぶん……{EOS}"
	.if (. - gText_Rom_25A39E) > 0x11
	.error "gText_Rom_25A39E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A39E) < 0x11
	.space 0x11 - (. - gText_Rom_25A39E)
	.endif
