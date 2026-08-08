	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:563 BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules
	.globl gText_Rom_22FFB6
gText_Rom_22FFB6: @ 0x0822FFB6
	.string "3つめの はんてい ポイントである\n「からだ」は たいせん したあとの\lポケモンの HPを みられます\pたいせんが はじまる まえの\nHPと くらべて\lたいせんごの HPが どれだけ あるかで\lひょうかが かわります"
	.byte EOS
	.if (. - gText_Rom_22FFB6) > 0x6d
	.error "gText_Rom_22FFB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FFB6) < 0x6d
	.space 0x6d - (. - gText_Rom_22FFB6)
	.endif
