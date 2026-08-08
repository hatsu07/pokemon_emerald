	@ data/maps/MtChimney/scripts.inc:636 MtChimney_Text_Grunt1PostBattle
	.globl gText_Rom_215408
gText_Rom_215408: @ 0x08215408
	.string "あんた なんか うみに プカプカ\nうかんで いれば いいのよ!$"
	.if (. - gText_Rom_215408) > 0x20
	.error "gText_Rom_215408 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215408) < 0x20
	.space 0x20 - (. - gText_Rom_215408)
	.endif
