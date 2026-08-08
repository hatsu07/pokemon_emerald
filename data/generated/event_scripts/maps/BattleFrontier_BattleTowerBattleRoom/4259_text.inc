	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:526 BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime
	.globl gText_Rom_222601
gText_Rom_222601: @ 0x08222601
	.string "…… …… ……\pあなたは ポケモンバトルに\nじしんが あるのだろ?\pだったら もっと もっと たたかって\nもっと もっと かちぬいて おいでよ\pまた あえる そのときを\nぼくは まってる から……$"
	.if (. - gText_Rom_222601) > 0x64
	.error "gText_Rom_222601 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222601) < 0x64
	.space 0x64 - (. - gText_Rom_222601)
	.endif
