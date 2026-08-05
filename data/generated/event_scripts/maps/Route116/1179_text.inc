	@ data/maps/Route116/scripts.inc:427 Route116_Text_NotWhatImLookingForMaybeTheyArentHere
	.globl gText_Rom_1EC27F
gText_Rom_1EC27F: @ 0x081EC27F
	.string "うーむ……\nこれは くろいメガネ だね\lぼくが さがしているのと ちがうなあ……\pここには ぼくの メガネ ないのかなあ$"
	.if (. - gText_Rom_1EC27F) > 0x3d
	.error "gText_Rom_1EC27F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC27F) < 0x3d
	.space 0x3d - (. - gText_Rom_1EC27F)
	.endif
