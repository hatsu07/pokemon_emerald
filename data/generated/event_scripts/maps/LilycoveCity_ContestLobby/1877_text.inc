	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:980 LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint
	.globl gText_Rom_207435
gText_Rom_207435: @ 0x08207435
	.string "ゆうしょう おめでとう!\pさっそく きねんに\nきみの ポケモンの えを\lかきあげたんだけど……\pなんだか きみの ポケモンの アピールが\nあまり にも すばらしくて\lいつもより うまく かけたんだ!\lほらっ これ!$"
	.if (. - gText_Rom_207435) > 0x6c
	.error "gText_Rom_207435 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207435) < 0x6c
	.space 0x6c - (. - gText_Rom_207435)
	.endif
