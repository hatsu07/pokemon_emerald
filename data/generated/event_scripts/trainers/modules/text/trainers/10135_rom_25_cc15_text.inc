	@ data/text/trainers.inc:1316 Route114_Text_NancyDefeat (+1 aliases)
	.globl gText_Rom_25CC15
gText_Rom_25CC15: @ 0x0825CC15
	.string "まけちゃったー!{EOS}"
	.if (. - gText_Rom_25CC15) > 0x9
	.error "gText_Rom_25CC15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CC15) < 0x9
	.space 0x9 - (. - gText_Rom_25CC15)
	.endif
