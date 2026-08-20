	@ data/text/trainers.inc:1775 Route117_Text_AnnaDefeat (+1 aliases)
	.globl gText_Rom_25DFB1
gText_Rom_25DFB1: @ 0x0825DFB1
	.string "ミホ『もう!\nコウハイの まえ だから かたせてよ!{EOS}"
	.if (. - gText_Rom_25DFB1) > 0x1b
	.error "gText_Rom_25DFB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DFB1) < 0x1b
	.space 0x1b - (. - gText_Rom_25DFB1)
	.endif
