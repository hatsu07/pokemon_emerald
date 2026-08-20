	@ data/text/trainers.inc:2549 Route123_Text_AlbertoDefeat (+1 aliases)
	.globl gText_Rom_25FF89
gText_Rom_25FF89: @ 0x0825FF89
	.string "まけた とりポケモンも イカス!{EOS}"
	.if (. - gText_Rom_25FF89) > 0x11
	.error "gText_Rom_25FF89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FF89) < 0x11
	.space 0x11 - (. - gText_Rom_25FF89)
	.endif
