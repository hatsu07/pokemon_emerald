	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:405 MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle
	.globl gText_Rom_20DE3B
gText_Rom_20DE3B: @ 0x0820DE3B
	.string "ダイゴ『{PLAYER}{KUN}！\nちからを かして くれるのかい！?\pボクと いっしょに たたかおう！\nじゅんびは いいね?{EOS}"
	.if (. - gText_Rom_20DE3B) > 0x38
	.error "gText_Rom_20DE3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DE3B) < 0x38
	.space 0x38 - (. - gText_Rom_20DE3B)
	.endif
