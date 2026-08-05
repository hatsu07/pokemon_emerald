	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl gText_Rom_25CD6B
gText_Rom_25CD6B: @ 0x0825CD6B
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!$"
	.if (. - gText_Rom_25CD6B) > 0x27
	.error "gText_Rom_25CD6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD6B) < 0x27
	.space 0x27 - (. - gText_Rom_25CD6B)
	.endif
