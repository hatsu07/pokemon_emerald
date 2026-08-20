	@ data/maps/Route119/scripts.inc:551 Route119_Text_ScottYouWonAtFortreeGym
	.globl gText_Rom_1ED5EB
gText_Rom_1ED5EB: @ 0x081ED5EB
	.string "…… …… ……\n…… …… …… ピッ!\pエニシダ『やあどうも\n{PLAYER}{KUN} わたしだよ!\pおもった とおり!\nヒワマキジム でも きみは かったね!\pきみの その つよさ もしかしたら……\nわたしの もとめている トレーナーは\lほんとうに きみかも しれないな!\pうん きみのこと これからも\nかげながら おうえん しているから!\lじゃ がんばってよ!\p…… …… ……\n…… …… …… ツー{EOS}"
	.if (. - gText_Rom_1ED5EB) > 0xc6
	.error "gText_Rom_1ED5EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED5EB) < 0xc6
	.space 0xc6 - (. - gText_Rom_1ED5EB)
	.endif
