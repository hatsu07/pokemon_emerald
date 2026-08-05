	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:114 Route110_TrickHousePuzzle2_Text_PaulIntro (+1 aliases)
	.globl gText_Rom_23E226
gText_Rom_23E226: @ 0x0823E226
	.string "おっ! カラクリやしき\n2どめの チャレンジだね!$"
	.if (. - gText_Rom_23E226) > 0x1a
	.error "gText_Rom_23E226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E226) < 0x1a
	.space 0x1a - (. - gText_Rom_23E226)
	.endif
