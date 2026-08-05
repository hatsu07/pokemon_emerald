	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:88 LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted
	.globl gText_Rom_20571C
gText_Rom_20571C: @ 0x0820571C
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pそういえば だれかが アクアだんの\nアジトを かいめつ させた らしいね!\pおかげで さっき だんたいさん からの\nしゅくはく よやくが はいったよ!\pたしか…… ゲームなんとか っていう\nかいしゃ だったかな……$"
	.if (. - gText_Rom_20571C) > 0x89
	.error "gText_Rom_20571C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20571C) < 0x89
	.space 0x89 - (. - gText_Rom_20571C)
	.endif
