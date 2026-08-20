	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:350 MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro
	.globl gText_Rom_20D5A6
gText_Rom_20D5A6: @ 0x0820D5A6
	.string "リーダーから だれも ここを とおすな\nって いわれてるんだよ!{EOS}"
	.if (. - gText_Rom_20D5A6) > 0x21
	.error "gText_Rom_20D5A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D5A6) < 0x21
	.space 0x21 - (. - gText_Rom_20D5A6)
	.endif
