	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:341 MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_20D524
gText_Rom_20D524: @ 0x0820D524
	.string "うちゅうセンターに ちょぞう してある\nロケットの ねんりょうは\lぜんぶ オレたちが いただいて いくぜ!{EOS}"
	.if (. - gText_Rom_20D524) > 0x36
	.error "gText_Rom_20D524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D524) < 0x36
	.space 0x36 - (. - gText_Rom_20D524)
	.endif
