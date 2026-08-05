	@ data/text/trainers.inc:118 Route103_Text_AndrewPostBattle
	.globl gText_Rom_259AA9
gText_Rom_259AA9: @ 0x08259AA9
	.string "ええい はらだたしい……!\nイライライライラ……"
	.byte EOS
	.if (. - gText_Rom_259AA9) > 0x19
	.error "gText_Rom_259AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AA9) < 0x19
	.space 0x19 - (. - gText_Rom_259AA9)
	.endif
