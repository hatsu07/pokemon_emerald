	@ data/text/trainers.inc:1364 Route114_Text_ClaudeIntro (+1 aliases)
	.globl gText_Rom_25CE1B
gText_Rom_25CE1B: @ 0x0825CE1B
	.string "つりで しょうぶ すると\nきみには かちめが ないだろう\lポケモンで かかってきなさい!$"
	.if (. - gText_Rom_25CE1B) > 0x2d
	.error "gText_Rom_25CE1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CE1B) < 0x2d
	.space 0x2d - (. - gText_Rom_25CE1B)
	.endif
