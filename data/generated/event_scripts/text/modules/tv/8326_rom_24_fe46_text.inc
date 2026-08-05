	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+21 aliases)
	.globl gText_Rom_24FE46
gText_Rom_24FE46: @ 0x0824FE46
	.string "テレビの　まえの　みなさんは\n{0xFD}{0x02}さん　みたいに　ならないように\l{0xFD}{0x03}で　あそんでみては\lいかがで　しょうか？\pいじょう\nホウエン　いち　ドキドキの　スポット！\lゲームコーナー　より　おおくりしました$"
	.if (. - gText_Rom_24FE46) > 0x65
	.error "gText_Rom_24FE46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FE46) < 0x65
	.space 0x65 - (. - gText_Rom_24FE46)
	.endif
