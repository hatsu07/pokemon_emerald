	@ data/text/trainers.inc:2120 Route120_Text_ColinPostBattle
	.globl gText_Rom_25EDF9
gText_Rom_25EDF9: @ 0x0825EDF9
	.string "そらをとぶ って ワザは べんりだな!\pそらを とんでいる あいだは\nほとんどの ワザが あたらないだろ?{EOS}"
	.if (. - gText_Rom_25EDF9) > 0x36
	.error "gText_Rom_25EDF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EDF9) < 0x36
	.space 0x36 - (. - gText_Rom_25EDF9)
	.endif
