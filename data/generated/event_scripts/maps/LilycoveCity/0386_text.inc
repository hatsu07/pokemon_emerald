	@ data/maps/LilycoveCity/scripts.inc:558 LilycoveCity_Text_DontGoNearCaveInCove
	.globl gText_Rom_1E0D08
gText_Rom_1E0D08: @ 0x081E0D08
	.string "おい おまえ!\pいりえに ある\nどうくつには ちかづくなよ!\pなぜって? りゆうは どうでも いいんだ!\nおとなの いうこと きけよな!!{EOS}"
	.if (. - gText_Rom_1E0D08) > 0x46
	.error "gText_Rom_1E0D08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0D08) < 0x46
	.space 0x46 - (. - gText_Rom_1E0D08)
	.endif
