	@ data/maps/Route116/scripts.inc:455 Route116_Text_TrainerTipsBToStopEvolution
	.globl gText_Rom_1EC371
gText_Rom_1EC371: @ 0x081EC371
	.string "おとくな けいじばん!\pポケモンが しんか しそうなとき\nBボタンを おすと\lびっくりして しんかを やめます!\pこれを しんかキャンセルと いいます{EOS}"
	.if (. - gText_Rom_1EC371) > 0x4c
	.error "gText_Rom_1EC371 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC371) < 0x4c
	.space 0x4c - (. - gText_Rom_1EC371)
	.endif
