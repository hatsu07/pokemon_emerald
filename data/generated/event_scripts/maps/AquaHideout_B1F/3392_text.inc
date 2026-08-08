	@ data/maps/AquaHideout_B1F/scripts.inc:124 AquaHideout_B1F_Text_Grunt3PostBattle
	.globl gText_Rom_217EBB
gText_Rom_217EBB: @ 0x08217EBB
	.string "ふん! これで いいんだ\pおまえの ジャマをする というのが\nおれの にんむ だったのさ$"
	.if (. - gText_Rom_217EBB) > 0x2d
	.error "gText_Rom_217EBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217EBB) < 0x2d
	.space 0x2d - (. - gText_Rom_217EBB)
	.endif
