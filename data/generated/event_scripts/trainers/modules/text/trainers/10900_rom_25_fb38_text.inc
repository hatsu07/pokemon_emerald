	@ data/text/trainers.inc:2435 Route123_Text_CameronRematchIntro (+1 aliases)
	.globl gText_Rom_25FB38
gText_Rom_25FB38: @ 0x0825FB38
	.string "ぼくは もう だれにも まけないと\nおもっているから つよいよ!!{EOS}"
	.if (. - gText_Rom_25FB38) > 0x22
	.error "gText_Rom_25FB38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FB38) < 0x22
	.space 0x22 - (. - gText_Rom_25FB38)
	.endif
