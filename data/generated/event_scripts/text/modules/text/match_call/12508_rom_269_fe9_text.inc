	@ data/text/match_call.inc:637 MatchCall_Text_Brawly_Preparing
	.globl gText_Rom_269FE9
gText_Rom_269FE9: @ 0x08269FE9
	.string "トウキ『やあ {PLAYER}{KUN}!\pキミとの しょうぶでは いろんなことを\nまなばせて もらったよ!\pまた しゅぎょう しなおして\nジムを さいかいする つもりさ!\pジムの じゅんびが できるまでは\nまだ じかんが かかりそう だけど\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくれよ……"
	.byte EOS
	.if (. - gText_Rom_269FE9) > 0x95
	.error "gText_Rom_269FE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269FE9) < 0x95
	.space 0x95 - (. - gText_Rom_269FE9)
	.endif
