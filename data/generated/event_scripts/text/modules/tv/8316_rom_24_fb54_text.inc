	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+20 aliases)
	.globl gText_Rom_24FB54
gText_Rom_24FB54: @ 0x0824FB54
	.string "さっそく　よんでみるねー！\p……たんていだんの　みなさん　こんにちは\pこの　あいだ　{0xFD}{0x03}さんが\n「{0xFD}{0x04}」で　なんと！\l「{0xFD}{0x02}」を　みつけて　いました\lもう　とっても　うらやましかったです\p……やったね！　{0xFD}{0x03}さん！\pテレビの　まえの　みんなも　まけずに\nダウジングマシンを　つかって　さがしてね！\pきみの　とっておきの　じょうほう\nまってるよー！$"
	.if (. - gText_Rom_24FB54) > 0xae
	.error "gText_Rom_24FB54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FB54) < 0xae
	.space 0xae - (. - gText_Rom_24FB54)
	.endif
