	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:544 BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules: @ 0x0822FECB
	.string "2つめの はんてい ポイントである\n「わざ」は ポケモンの わざが\lうまく できたかを みられます\pわざが せいこう すると\nひょうかは あがります\pわざが しっぱい すると\nひょうかは さがります\pさらに あいてに わざを あてたときは\n「こうかはばつぐん」で あがり\l「こうかはいまひとつ」などで さがります\pまた 「まもる」や 「みきり」は\nだしても ひょうかは あがりません\pあいての 「まもる」や 「みきり」で\nわざを だせなくても\lひょうかは さがりません"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules) != 0xeb
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules must retain its original byte length"
	.endif
	.globl gText_Rom_22FFB2
	.set gText_Rom_22FFB2, BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules + 0xe7
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:563 BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules
	.globl BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules: @ 0x0822FFB6
	.string "3つめの はんてい ポイントである\n「からだ」は たいせん したあとの\lポケモンの HPを みられます\pたいせんが はじまる まえの\nHPと くらべて\lたいせんごの HPが どれだけ あるかで\lひょうかが かわります"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules) > 0x6d
	.error "BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules) < 0x6d
	.space 0x6d - (. - BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules)
	.endif
