	@ data/maps/MtPyre_3F/scripts.inc:53 MtPyre_3F_Text_KaylaDefeat (+1 aliases)
	.globl gText_Rom_216715
gText_Rom_216715: @ 0x08216715
	.string "あっさり まけたわっ……!$"
	.if (. - gText_Rom_216715) > 0xe
	.error "gText_Rom_216715 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216715) < 0xe
	.space 0xe - (. - gText_Rom_216715)
	.endif
