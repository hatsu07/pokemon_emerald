	@ src/berry_blender.c:315 sText_BlenderMaxSpeedRecord
	.globl gText_Rom_30FC38
gText_Rom_30FC38: @ 0x0830FC38
	.string "きのみブレンダー\nさいこうそくど ランキング！$"
	.if (. - gText_Rom_30FC38) > 0x18
	.error "gText_Rom_30FC38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC38) < 0x18
	.space 0x18 - (. - gText_Rom_30FC38)
	.endif
