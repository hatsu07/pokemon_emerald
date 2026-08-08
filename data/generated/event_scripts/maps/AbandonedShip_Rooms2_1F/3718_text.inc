	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:85 AbandonedShip_Rooms2_1F_Text_DanPostRematch
	.globl gText_Rom_21B07E
gText_Rom_21B07E: @ 0x0821B07E
	.string "フミ『おたからは みつからないし\nポケモンは まけるし いえに かえりたいよ\pでも そんなこと いうと\nかのじょ おこりだすからな……"
	.byte EOS
	.if (. - gText_Rom_21B07E) > 0x44
	.error "gText_Rom_21B07E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B07E) < 0x44
	.space 0x44 - (. - gText_Rom_21B07E)
	.endif
