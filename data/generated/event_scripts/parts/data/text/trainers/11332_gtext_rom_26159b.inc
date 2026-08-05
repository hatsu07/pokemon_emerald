	@ data/text/trainers.inc:3077 Route129_Text_AllisonPostBattle
	.globl gText_Rom_26159B
gText_Rom_26159B: @ 0x0826159B
	.string "だいしぜんを あいてに\nじぶんの ちからを ためす ことも\lトライアスロンの だいごみ!$"
	.if (. - gText_Rom_26159B) > 0x2d
	.error "gText_Rom_26159B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26159B) < 0x2d
	.space 0x2d - (. - gText_Rom_26159B)
	.endif
