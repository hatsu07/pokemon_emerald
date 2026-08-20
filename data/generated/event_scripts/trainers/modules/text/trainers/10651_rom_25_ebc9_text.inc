	@ data/text/trainers.inc:2066 Route119_Text_TakashiPostBattle
	.globl gText_Rom_25EBC9
gText_Rom_25EBC9: @ 0x0825EBC9
	.string "きしゅう さくせんは シッパイだった……{EOS}"
	.if (. - gText_Rom_25EBC9) > 0x15
	.error "gText_Rom_25EBC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBC9) < 0x15
	.space 0x15 - (. - gText_Rom_25EBC9)
	.endif
