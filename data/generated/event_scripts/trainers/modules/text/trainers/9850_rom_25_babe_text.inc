	@ data/text/trainers.inc:908 Route111_Text_DrewPostBattle
	.globl gText_Rom_25BABE
gText_Rom_25BABE: @ 0x0825BABE
	.string "ゴーゴーゴーグルが あると\nさばくの すなあらしも へいき だから\lそれだけで うれしくなるよ!{EOS}"
	.if (. - gText_Rom_25BABE) > 0x31
	.error "gText_Rom_25BABE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BABE) < 0x31
	.space 0x31 - (. - gText_Rom_25BABE)
	.endif
