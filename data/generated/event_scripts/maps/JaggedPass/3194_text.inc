	@ data/maps/JaggedPass/scripts.inc:234 JaggedPass_Text_GoWhereverYouWant
	.globl gText_Rom_216000
gText_Rom_216000: @ 0x08216000
	.string "わかった わかった!\nキミが つよいのは みとめて やるよ!\pオレのことは きにせず\nすきな ところへ いきな!{EOS}"
	.if (. - gText_Rom_216000) > 0x39
	.error "gText_Rom_216000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216000) < 0x39
	.space 0x39 - (. - gText_Rom_216000)
	.endif
