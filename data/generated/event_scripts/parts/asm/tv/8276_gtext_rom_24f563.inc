	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+17 aliases)
	.globl gText_Rom_24F563
gText_Rom_24F563: @ 0x0824F563
	.string "めいじんは　さいごに\n{0xFD}{0x03}で\l{0xFD}{0x04}を　つかまえ\pきねんの　ポケモンとして　だいじに\nしている　らしいですよ\pじしんのある　トレーナーは　このきろくに\nちょうせんして　みては　いかがですか？\pそれでは　また\nじかい　おあいしましょう$"
	.if (. - gText_Rom_24F563) > 0x74
	.error "gText_Rom_24F563 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F563) < 0x74
	.space 0x74 - (. - gText_Rom_24F563)
	.endif
