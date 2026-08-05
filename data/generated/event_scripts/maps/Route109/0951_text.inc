	@ data/maps/Route109/scripts.inc:521 Route109_Text_SeashoreHouseSign
	.globl gText_Rom_1E8DBB
gText_Rom_1E8DBB: @ 0x081E8DBB
	.string "「うみの いえ」\pすなはま といえば ポケモンしょうぶ!\nあつい トレーナー ここに つどえ!$"
	.if (. - gText_Rom_1E8DBB) > 0x30
	.error "gText_Rom_1E8DBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8DBB) < 0x30
	.space 0x30 - (. - gText_Rom_1E8DBB)
	.endif
