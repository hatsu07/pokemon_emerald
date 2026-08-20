	@ data/text/trainers.inc:1301 Route114_Text_LucasPostBattle
	.globl gText_Rom_25CB6F
gText_Rom_25CB6F: @ 0x0825CB6F
	.string "ふゆの やまは なだれや ふぶきで\nそうなんする きけんが おおいぞ!{EOS}"
	.if (. - gText_Rom_25CB6F) > 0x24
	.error "gText_Rom_25CB6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB6F) < 0x24
	.space 0x24 - (. - gText_Rom_25CB6F)
	.endif
