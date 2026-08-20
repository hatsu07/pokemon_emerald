	@ data/text/trainers.inc:3236 Route132_Text_RonaldPostBattle
	.globl gText_Rom_261C14
gText_Rom_261C14: @ 0x08261C14
	.string "かてると わかる しょうぶは しない!\nかつか まけるか\lその ギリギリの かんじが いいんだ!{EOS}"
	.if (. - gText_Rom_261C14) > 0x31
	.error "gText_Rom_261C14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261C14) < 0x31
	.space 0x31 - (. - gText_Rom_261C14)
	.endif
