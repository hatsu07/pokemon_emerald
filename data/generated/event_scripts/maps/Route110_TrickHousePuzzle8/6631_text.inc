	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:51 Route110_TrickHousePuzzle8_Text_LeroyIntro (+1 aliases)
	.globl gText_Rom_2405A5
gText_Rom_2405A5: @ 0x082405A5
	.string "あなたも カラクリやしきに\nちょうせん しつづけて いるんですね!$"
	.if (. - gText_Rom_2405A5) > 0x22
	.error "gText_Rom_2405A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405A5) < 0x22
	.space 0x22 - (. - gText_Rom_2405A5)
	.endif
