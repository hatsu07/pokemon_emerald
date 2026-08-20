	@ data/text/trainers.inc:293 Route104_Text_DarianIntro (+1 aliases)
	.globl gText_Rom_25A264
gText_Rom_25A264: @ 0x0825A264
	.string "つよそうな ポケモンが つれたっ!\nさかなの おうさま って かんじだ!\lこれは つよそうだぞっ!{EOS}"
	.if (. - gText_Rom_25A264) > 0x32
	.error "gText_Rom_25A264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A264) < 0x32
	.space 0x32 - (. - gText_Rom_25A264)
	.endif
