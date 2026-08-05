	@ data/maps/Route113/scripts.inc:142 Route113_Text_FunWalkingThroughAsh
	.globl gText_Rom_1EB397
gText_Rom_1EB397: @ 0x081EB397
	.string "かざんばい つもった くさむらの うえ\nあるくと どこを とおったか わかるから\lたのしく なっちゃう!$"
	.if (. - gText_Rom_1EB397) > 0x35
	.error "gText_Rom_1EB397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB397) < 0x35
	.space 0x35 - (. - gText_Rom_1EB397)
	.endif
