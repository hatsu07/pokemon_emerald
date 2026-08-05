	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:51 Route110_TrickHousePuzzle4_Text_PaulaIntro (+1 aliases)
	.globl gText_Rom_23ECA7
gText_Rom_23ECA7: @ 0x0823ECA7
	.string "カラクリやしきも だんだん\nむずかしく なってきたわね!$"
	.if (. - gText_Rom_23ECA7) > 0x1d
	.error "gText_Rom_23ECA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23ECA7) < 0x1d
	.space 0x1d - (. - gText_Rom_23ECA7)
	.endif
