	@ data/text/trainers.inc:2804 Route125_Text_AuronPostBattle
	.globl gText_Rom_260B33
gText_Rom_260B33: @ 0x08260B33
	.string "さっき この あたりで\nこきたない ビンを ひろったんじゃ!\lうみに ゴミを すてるとは なっとらん!$"
	.if (. - gText_Rom_260B33) > 0x34
	.error "gText_Rom_260B33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260B33) < 0x34
	.space 0x34 - (. - gText_Rom_260B33)
	.endif
