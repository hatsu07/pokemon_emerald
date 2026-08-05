	@ data/text/trainers.inc:2591 Route124_Text_RolandIntro (+1 aliases)
	.globl gText_Rom_26015C
gText_Rom_26015C: @ 0x0826015C
	.string "むっ! じぶんで およがずに\nポケモンに のっている……\pなんて うらやましいんだ!$"
	.if (. - gText_Rom_26015C) > 0x2b
	.error "gText_Rom_26015C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26015C) < 0x2b
	.space 0x2b - (. - gText_Rom_26015C)
	.endif
