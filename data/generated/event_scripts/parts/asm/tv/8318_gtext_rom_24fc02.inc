	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+20 aliases)
	.globl gText_Rom_24FC02
gText_Rom_24FC02: @ 0x0824FC02
	.string "さっそく　よんでみるねー！\p……たんていだんの　みなさん　こんにちは\pこの　あいだ　{0xFD}{0x03}さんが\n「れんらくせん」で　なんと！\l「{0xFD}{0x02}」を　みつけて　いました\lもう　とっても　うらやましかったです\p……やったね！　{0xFD}{0x03}さん！\pテレビの　まえの　みんなも　まけずに\nダウジングマシンを　つかって　さがしてね！\pきみの　とっておきの　じょうほう\nまってるよー！$"
	.if (. - gText_Rom_24FC02) > 0xb2
	.error "gText_Rom_24FC02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FC02) < 0xb2
	.space 0xb2 - (. - gText_Rom_24FC02)
	.endif
