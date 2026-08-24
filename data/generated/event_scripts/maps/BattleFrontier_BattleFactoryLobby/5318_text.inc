	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:516 BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_231AB7
gText_Rom_231AB7: @ 0x08231AB7
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの とき でも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません"
	.byte EOS
	.if (. - gText_Rom_231AB7) != 0x66
	.error "gText_Rom_231AB7 must retain its original byte length"
	.endif
	.globl gText_Rom_231B19
	.set gText_Rom_231B19, gText_Rom_231AB7 + 0x62
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl gText_Rom_231B1D
gText_Rom_231B1D: @ 0x08231B1D
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです"
	.byte EOS
	.if (. - gText_Rom_231B1D) > 0x51
	.error "gText_Rom_231B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231B1D) < 0x51
	.space 0x51 - (. - gText_Rom_231B1D)
	.endif
