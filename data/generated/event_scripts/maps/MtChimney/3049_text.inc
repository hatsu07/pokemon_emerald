	@ data/maps/MtChimney/scripts.inc:611 MtChimney_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_215326
gText_Rom_215326: @ 0x08215326
	.string "オレら マグマだんは\nみんなの ために がんばってるんだ!\pだって アイツの ちからで\nだいちが ふえれば みんなも\lすむところが ふえて うれしいだろ?{EOS}"
	.if (. - gText_Rom_215326) > 0x4e
	.error "gText_Rom_215326 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215326) < 0x4e
	.space 0x4e - (. - gText_Rom_215326)
	.endif
