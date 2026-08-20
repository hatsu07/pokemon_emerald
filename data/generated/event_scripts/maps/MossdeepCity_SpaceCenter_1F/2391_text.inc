	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:323 MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20D475
gText_Rom_20D475: @ 0x0820D475
	.string "やくそく どおり ロケットねんりょうを\nちょうだいしに きたわよ!{EOS}"
	.if (. - gText_Rom_20D475) != 0x22
	.error "gText_Rom_20D475 must retain its original byte length"
	.endif
