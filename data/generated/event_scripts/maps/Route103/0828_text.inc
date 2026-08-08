	@ data/maps/Route103/scripts.inc:293 Route103_Text_MayLetsBattle
	.globl gText_Rom_1E6E97
gText_Rom_1E6E97: @ 0x081E6E97
	.string "あら {PLAYER}{KUN}!\p……そうか! おとうさん から\nポケモンを プレゼントして もらったのね!\pせっかくだから ちょっと\nポケモンしょうぶ しようよ!\pトレーナーって どんな ものか\nあたしが おしえて あげるから!$"
	.if (. - gText_Rom_1E6E97) > 0x6c
	.error "gText_Rom_1E6E97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6E97) < 0x6c
	.space 0x6c - (. - gText_Rom_1E6E97)
	.endif
