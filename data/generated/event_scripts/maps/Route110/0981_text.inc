	@ data/maps/Route110/scripts.inc:816 Route110_Text_HairStreamsBehindMe
	.globl gText_Rom_1E99FA
gText_Rom_1E99FA: @ 0x081E99FA
	.string "どう? かぜになびく わたしの くろかみ!\pこのため だけに かみを のばしたの!{EOS}"
	.if (. - gText_Rom_1E99FA) > 0x2a
	.error "gText_Rom_1E99FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E99FA) < 0x2a
	.space 0x2a - (. - gText_Rom_1E99FA)
	.endif
