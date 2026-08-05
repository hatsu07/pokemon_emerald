	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:225 BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure
	.globl gText_Rom_22EE63
gText_Rom_22EE63: @ 0x0822EE63
	.string "わかき ぼうけんしゃよ……\nぼうけんとは いいもの だな……\pおのれの ちえ!\pおのれの ちから!\pおのれの ポケモン!\pそして なにより\nおのれの ゆうきを ふりしぼって\lみちなる せかいへと つきすすむ……"
	.byte EOS
	.if (. - gText_Rom_22EE63) > 0x6a
	.error "gText_Rom_22EE63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22EE63) < 0x6a
	.space 0x6a - (. - gText_Rom_22EE63)
	.endif
