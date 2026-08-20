	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:332 MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_20D4C0
gText_Rom_20D4C0: @ 0x0820D4C0
	.string "ちゃんと よこく してから きたんだ!\nオレたちゃ ひきょうものじゃ ないぜ!{EOS}"
	.if (. - gText_Rom_20D4C0) > 0x28
	.error "gText_Rom_20D4C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D4C0) < 0x28
	.space 0x28 - (. - gText_Rom_20D4C0)
	.endif
