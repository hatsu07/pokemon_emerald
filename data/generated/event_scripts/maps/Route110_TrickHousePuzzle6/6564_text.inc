	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:57 Route110_TrickHousePuzzle6_Text_BennyIntro (+1 aliases)
	.globl gText_Rom_23FE1C
gText_Rom_23FE1C: @ 0x0823FE1C
	.string "おいらの とりポケモンで\nかべを とびこえて いっちゃうか……?{EOS}"
	.if (. - gText_Rom_23FE1C) > 0x21
	.error "gText_Rom_23FE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FE1C) < 0x21
	.space 0x21 - (. - gText_Rom_23FE1C)
	.endif
