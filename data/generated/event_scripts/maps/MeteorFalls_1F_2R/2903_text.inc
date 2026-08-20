	@ data/maps/MeteorFalls_1F_2R/scripts.inc:122 MeteorFalls_1F_2R_Text_JayIntro (+1 aliases)
	.globl gText_Rom_2133BB
gText_Rom_2133BB: @ 0x082133BB
	.string "ハツ『けっこんして 50ねん……\nわたしら ふうふの きずなは\lどんな ものでも きれませんよ{EOS}"
	.if (. - gText_Rom_2133BB) > 0x30
	.error "gText_Rom_2133BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2133BB) < 0x30
	.space 0x30 - (. - gText_Rom_2133BB)
	.endif
