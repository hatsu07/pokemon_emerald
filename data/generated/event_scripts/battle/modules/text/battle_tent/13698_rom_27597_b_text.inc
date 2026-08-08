	@ data/text/battle_tent.inc:393 VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules
	.globl gText_Rom_27597B
gText_Rom_27597B: @ 0x0827597B
	.string "とにかく こうげきが\nすきな せいかく\pじぶんの みを まもることが\nすきな せいかく\pあいてを こまらせたり\nかわったことが すきな せいかく\pポケモンは せいかくに よって\nすきで とくいな わざと\lきらいで にがてな わざが ちがいます$"
	.if (. - gText_Rom_27597B) > 0x7a
	.error "gText_Rom_27597B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27597B) < 0x7a
	.space 0x7a - (. - gText_Rom_27597B)
	.endif
