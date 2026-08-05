	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:356 MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle
	.globl gText_Rom_20D5D0
gText_Rom_20D5D0: @ 0x0820D5D0
	.string "リーダーには オレが さいごまで\nもちばを はなれなかった って\lいっといて くれよ!$"
	.if (. - gText_Rom_20D5D0) > 0x2c
	.error "gText_Rom_20D5D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D5D0) < 0x2c
	.space 0x2c - (. - gText_Rom_20D5D0)
	.endif
