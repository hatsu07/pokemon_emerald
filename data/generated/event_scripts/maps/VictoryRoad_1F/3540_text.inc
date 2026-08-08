	@ data/maps/VictoryRoad_1F/scripts.inc:154 VictoryRoad_1F_Text_AlbertPostBattle
	.globl gText_Rom_219824
gText_Rom_219824: @ 0x08219824
	.string "ここで まけた……\pということは まだ チャンピオンに なる\nしかくが なかったと いうことか……"
	.byte EOS
	.if (. - gText_Rom_219824) > 0x32
	.error "gText_Rom_219824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219824) < 0x32
	.space 0x32 - (. - gText_Rom_219824)
	.endif
