	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+21 aliases)
	.globl gText_Rom_24FCB4
gText_Rom_24FCB4: @ 0x0824FCB4
	.string "『ギャンブラーを　さがせー！』\pみなさーん！\n{0xFD}{0x03}　ガンガン　まわしてますかー？\pさあ　きょうも　ゲームコーナーで\nすごかった　トレーナーさんを\lはっぴょう　させて　いただきますよ！\pきょうの　ナンバー1　ギャンブラーは……\l{0xFD}{0x02}さん　です！$"
	.if (. - gText_Rom_24FCB4) > 0x7a
	.error "gText_Rom_24FCB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FCB4) < 0x7a
	.space 0x7a - (. - gText_Rom_24FCB4)
	.endif
