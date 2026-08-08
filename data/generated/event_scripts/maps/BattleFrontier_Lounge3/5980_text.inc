	@ data/maps/BattleFrontier_Lounge3/scripts.inc:296 BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints
	.globl gText_Rom_23842E
gText_Rom_23842E: @ 0x0823842E
	.string "ぃよおっ!! せんせい!!\pさすが! さすが ですねぇー!!\nわたくし おおもうけで ございますよぉ!\pバトルポイント おかえし しますよっ!\nしっかり のしつけて さしあげますよぉ!"
	.byte EOS
	.if (. - gText_Rom_23842E) > 0x5d
	.error "gText_Rom_23842E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23842E) < 0x5d
	.space 0x5d - (. - gText_Rom_23842E)
	.endif
