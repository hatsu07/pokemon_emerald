	@ data/text/trainers.inc:2699 Route124_Text_IsabellaIntro (+1 aliases)
	.globl gText_Rom_2606CC
gText_Rom_2606CC: @ 0x082606CC
	.string "なみのりトレーナー なんかに まけないわ!$"
	.if (. - gText_Rom_2606CC) > 0x16
	.error "gText_Rom_2606CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2606CC) < 0x16
	.space 0x16 - (. - gText_Rom_2606CC)
	.endif
