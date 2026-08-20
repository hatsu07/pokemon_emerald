	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:653 LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation
	.globl gText_Rom_209306
gText_Rom_209306: @ 0x08209306
	.string "あなたって ピンチに なれば なるほど\nみりょくてきな たたかいを するのよね\lつぎの たいせんが たのしみだわ！{EOS}"
	.if (. - gText_Rom_209306) > 0x3a
	.error "gText_Rom_209306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209306) < 0x3a
	.space 0x3a - (. - gText_Rom_209306)
	.endif
