	@ data/text/trainers.inc:172 Route103_Text_MarcosDefeated (+1 aliases)
	.globl gText_Rom_259C79
gText_Rom_259C79: @ 0x08259C79
	.string "おれっちの ひとりショーが だいなしだよ"
	.byte EOS
	.if (. - gText_Rom_259C79) > 0x15
	.error "gText_Rom_259C79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C79) < 0x15
	.space 0x15 - (. - gText_Rom_259C79)
	.endif
