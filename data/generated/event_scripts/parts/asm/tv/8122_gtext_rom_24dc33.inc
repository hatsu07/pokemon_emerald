	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DC33
gText_Rom_24DC33: @ 0x0824DC33
	.string "しかい『ごきげん　いかがですか？\n『ポロック　バンザイ！』の　おじかんです\pきょうの　ポロックは\n{0xFD}{0x02}さんと　その　おなかまが\lブレンドした　ポロックです\pさっそく　わたしの　グルメな　ポケモン\nゴクリンちゃんに　たべさせて　みましょう！\p……　……　……　……\n……　……　……　……$"
	.if (. - gText_Rom_24DC33) > 0x90
	.error "gText_Rom_24DC33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DC33) < 0x90
	.space 0x90 - (. - gText_Rom_24DC33)
	.endif
