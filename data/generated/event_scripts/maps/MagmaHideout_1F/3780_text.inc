	@ data/maps/MagmaHideout_1F/scripts.inc:26 MagmaHideout_1F_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_21C196
gText_Rom_21C196: @ 0x0821C196
	.string "トレーニングにも ちこくする オレだ!\nわれながら よわいぜ……"
	.byte EOS
	.if (. - gText_Rom_21C196) > 0x21
	.error "gText_Rom_21C196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C196) < 0x21
	.space 0x21 - (. - gText_Rom_21C196)
	.endif
