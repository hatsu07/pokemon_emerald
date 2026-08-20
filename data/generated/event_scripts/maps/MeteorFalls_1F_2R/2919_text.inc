	@ data/maps/MeteorFalls_1F_2R/scripts.inc:162 MeteorFalls_1F_2R_Text_JayRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_213524
gText_Rom_213524: @ 0x08213524
	.string "ハツ『けっこんして 50ねん……\nおたがいを ささえあってきた\lわたしら ふうふは つよいですよ{EOS}"
	.if (. - gText_Rom_213524) != 0x31
	.error "gText_Rom_213524 must retain its original byte length"
	.endif
