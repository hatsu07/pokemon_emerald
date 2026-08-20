	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:331 RivalsHouse_1F_Text_LikeChildLikeFather
	.globl gText_Rom_1F0701
gText_Rom_1F0701: @ 0x081F0701
	.string "おとうさんも あのこに まけず\nポケモンに むちゅう なのよ\pけんきゅうじょに いなければ\nきっと どこかの くさむらにでも\lもぐりに いってるんじゃ ないかしら……{EOS}"
	.if (. - gText_Rom_1F0701) > 0x54
	.error "gText_Rom_1F0701 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0701) < 0x54
	.space 0x54 - (. - gText_Rom_1F0701)
	.endif
