	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:338 RivalsHouse_1F_Text_TooBusyToNoticeVisit
	.globl gText_Rom_1F0755
gText_Rom_1F0755: @ 0x081F0755
	.string "{RIVAL}ったら せっかく {PLAYER}{KUN}が\nごあいさつに きてくれたって いうのに\lポケモンに むちゅう みたいね$"
	.if (. - gText_Rom_1F0755) > 0x35
	.error "gText_Rom_1F0755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0755) < 0x35
	.space 0x35 - (. - gText_Rom_1F0755)
	.endif
