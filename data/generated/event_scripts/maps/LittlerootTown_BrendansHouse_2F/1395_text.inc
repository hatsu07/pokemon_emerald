	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:285 PlayersHouse_2F_Text_Notebook
	.globl gText_Rom_1F02A6
gText_Rom_1F02A6: @ 0x081F02A6
	.string "{PLAYER}は ノートを ひらいた!\pたんけんの こころえ その1\nスタートボタンで メニューが ひらく!\pたんけんの こころえ その2\nポケモン レポートで きろく できる!\pあとは まっしろ だ……$"
	.if (. - gText_Rom_1F02A6) > 0x62
	.error "gText_Rom_1F02A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F02A6) < 0x62
	.space 0x62 - (. - gText_Rom_1F02A6)
	.endif
