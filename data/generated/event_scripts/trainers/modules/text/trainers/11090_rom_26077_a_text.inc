	@ data/text/trainers.inc:2717 Route125_Text_StanIntro (+1 aliases)
	.globl gText_Rom_26077A
gText_Rom_26077A: @ 0x0826077A
	.string "おらーっ!!\nおれの かわいい ポケモンだー!!$"
	.if (. - gText_Rom_26077A) > 0x19
	.error "gText_Rom_26077A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26077A) < 0x19
	.space 0x19 - (. - gText_Rom_26077A)
	.endif
