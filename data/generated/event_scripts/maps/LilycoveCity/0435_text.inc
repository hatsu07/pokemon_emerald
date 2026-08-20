	@ data/maps/LilycoveCity/scripts.inc:700 LilycoveCity_Text_TrainerFanClubSign
	.globl gText_Rom_1E1318
gText_Rom_1E1318: @ 0x081E1318
	.string "「ポケモン トレーナー ファンクラブ」\pかんばんに いろんな トレーナーの\nなまえが らくがき されている……{EOS}"
	.if (. - gText_Rom_1E1318) > 0x38
	.error "gText_Rom_1E1318 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1318) < 0x38
	.space 0x38 - (. - gText_Rom_1E1318)
	.endif
