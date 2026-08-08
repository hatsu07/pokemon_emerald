	@ data/text/battle_tent.inc:383 VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules
	.globl gText_Rom_275908
gText_Rom_275908: @ 0x08275908
	.string "バトルテント シダケかいじょう では\nポケモンたちが じぶんで\lかんがえ たたかいます\pじゅんすいな やせいの ときとは ちがって\nひとと くらしている ポケモンは\lせいかくに よって どんな こうどうを\lするかが かわるのです$"
	.if (. - gText_Rom_275908) > 0x73
	.error "gText_Rom_275908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275908) < 0x73
	.space 0x73 - (. - gText_Rom_275908)
	.endif
