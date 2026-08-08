	@ data/maps/Route101/scripts.inc:268 Route101_Text_DontLeaveMe
	.globl gText_Rom_1E66D1
gText_Rom_1E66D1: @ 0x081E66D1
	.string "どっ どこへ いくんだ!?\nわたしを みすてないで おくれーっ!$"
	.if (. - gText_Rom_1E66D1) > 0x21
	.error "gText_Rom_1E66D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E66D1) < 0x21
	.space 0x21 - (. - gText_Rom_1E66D1)
	.endif
