	@ data/text/trainers.inc:692 Route109_Text_MelDefeated (+1 aliases)
	.globl gText_Rom_25B223
gText_Rom_25B223: @ 0x0825B223
	.string "シキ『あたしの せいで まけたんだわ……\nこんなんじゃ リキに きらわれちゃう!$"
	.if (. - gText_Rom_25B223) > 0x29
	.error "gText_Rom_25B223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B223) < 0x29
	.space 0x29 - (. - gText_Rom_25B223)
	.endif
