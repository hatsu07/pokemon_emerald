	@ data/maps/VictoryRoad_1F/scripts.inc:172 VictoryRoad_1F_Text_QuincyPostBattle
	.globl gText_Rom_2198DA
gText_Rom_2198DA: @ 0x082198DA
	.string "ここを ぶじに ぬけきるって ことが\nポケモンチャンピオンを めざす やつの\lさいごの しれん なんだ!\pだから チャンピオンロードと\nよばれて いるのさ"
	.byte EOS
	.if (. - gText_Rom_2198DA) > 0x4e
	.error "gText_Rom_2198DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198DA) < 0x4e
	.space 0x4e - (. - gText_Rom_2198DA)
	.endif
