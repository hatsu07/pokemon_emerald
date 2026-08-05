	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:344 Route110_TrickHousePuzzle7_Text_AlexisPostBattle
	.globl gText_Rom_24036A
gText_Rom_24036A: @ 0x0824036A
	.string "あなたは カラクリやしきの しかけを\nすべて とく って よかんが するわ!$"
	.if (. - gText_Rom_24036A) > 0x27
	.error "gText_Rom_24036A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24036A) < 0x27
	.space 0x27 - (. - gText_Rom_24036A)
	.endif
