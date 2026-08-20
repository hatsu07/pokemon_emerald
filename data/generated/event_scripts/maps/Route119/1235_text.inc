	@ data/maps/Route119/scripts.inc:492 Route119_Text_MayPresentForYou
	.globl gText_Rom_1ED351
gText_Rom_1ED351: @ 0x081ED351
	.string "ハルカ『ぜんぜん だいじょうぶ!\nその ちょうしで がんばってね!\pこれは あたし からの プレゼントよ!{EOS}"
	.if (. - gText_Rom_1ED351) > 0x36
	.error "gText_Rom_1ED351 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED351) < 0x36
	.space 0x36 - (. - gText_Rom_1ED351)
	.endif
