	@ data/text/trainers.inc:166 Route103_Text_RhettPostBattle
	.globl gText_Rom_259C46
gText_Rom_259C46: @ 0x08259C46
	.string "せまい ところが\nすき なのかい きみは?"
	.byte EOS
	.if (. - gText_Rom_259C46) > 0x16
	.error "gText_Rom_259C46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259C46) < 0x16
	.space 0x16 - (. - gText_Rom_259C46)
	.endif
