	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_2515FE
gText_Rom_2515FE: @ 0x082515FE
	.string "『ホウエン　きょうの\n　なんでも　ナンバー1！！』\pテレビの　まえの　みなさん\nがんばってますかー？\pきょうも　いちにちで　いちばん　がんばった\nトレーナーを　しょうかい　しますよ！\p……さあ\nきょうの　ナンバー1　トレーナーは……\l{0xFD}{0x02}さんです！！$"
	.if (. - gText_Rom_2515FE) > 0x7e
	.error "gText_Rom_2515FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2515FE) < 0x7e
	.space 0x7e - (. - gText_Rom_2515FE)
	.endif
