	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:544 BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22FECB
gText_Rom_22FECB: @ 0x0822FECB
	.string "2つめの はんてい ポイントである\n「わざ」は ポケモンの わざが\lうまく できたかを みられます\pわざが せいこう すると\nひょうかは あがります\pわざが しっぱい すると\nひょうかは さがります\pさらに あいてに わざを あてたときは\n「こうかはばつぐん」で あがり\l「こうかはいまひとつ」などで さがります\pまた 「まもる」や 「みきり」は\nだしても ひょうかは あがりません\pあいての 「まもる」や 「みきり」で\nわざを だせなくても\lひょうかは さがりません"
	.byte EOS
	.if (. - gText_Rom_22FECB) != 0xeb
	.error "gText_Rom_22FECB must retain its original byte length"
	.endif
