	@ data/text/trainers.inc:1295 Route114_Text_LucasIntro (+1 aliases)
	.globl gText_Rom_25CB45
gText_Rom_25CB45: @ 0x0825CB45
	.string "じゅんびを おこたる もの\nやまに のぼるべからず!{EOS}"
	.if (. - gText_Rom_25CB45) > 0x1b
	.error "gText_Rom_25CB45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB45) < 0x1b
	.space 0x1b - (. - gText_Rom_25CB45)
	.endif
