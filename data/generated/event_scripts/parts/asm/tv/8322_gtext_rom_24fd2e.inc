	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+21 aliases)
	.globl gText_Rom_24FD2E
gText_Rom_24FD2E: @ 0x0824FD2E
	.string "{0xFD}{0x02}さんは　{0xFD}{0x03}で\nなんと　{0xFD}{0x04}まいも\lコインを　だした　そうです！\p「{0xFD}{0x02}さんが　きたら\n　あかじ　かくご！」\p……という　ことばが　てんいんたちの\nあいだで　ささやかれた　そうです！\pテレビの　まえの　みなさんも\n{0xFD}{0x02}さんの　ように　{0xFD}{0x03}で\lあそんで　みては　いかがでしょうか？\pいじょう\nホウエン　いち　ドキドキの　スポット！\lゲームコーナー　より　おおくりしました$"
	.if (. - gText_Rom_24FD2E) > 0xbb
	.error "gText_Rom_24FD2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FD2E) < 0xbb
	.space 0xbb - (. - gText_Rom_24FD2E)
	.endif
