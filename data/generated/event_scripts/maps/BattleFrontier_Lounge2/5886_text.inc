	@ data/maps/BattleFrontier_Lounge2/scripts.inc:176 BattleFrontier_Lounge2_Text_PalaceMavenIsThere
	.globl gText_Rom_237265
gText_Rom_237265: @ 0x08237265
	.string "あそこには エニシダが\nフロンティアブレーンって よんでる\lトレーナーの うちの ひとり……\lパレスガーディアンって いう\lあやしい トレーナーが おさめてるのさ!"
	.byte EOS
	.if (. - gText_Rom_237265) > 0x53
	.error "gText_Rom_237265 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237265) < 0x53
	.space 0x53 - (. - gText_Rom_237265)
	.endif
