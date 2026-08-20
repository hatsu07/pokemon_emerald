	@ data/text/trainers.inc:1382 Route114_Text_TyraIntro (+1 aliases)
	.globl gText_Rom_25CF00
gText_Rom_25CF00: @ 0x0825CF00
	.string "カヨ『そうね\nなんとなく そんな きぶん だから\lあなたにも ポケモン おしえたげよっか{EOS}"
	.if (. - gText_Rom_25CF00) > 0x2d
	.error "gText_Rom_25CF00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF00) < 0x2d
	.space 0x2d - (. - gText_Rom_25CF00)
	.endif
