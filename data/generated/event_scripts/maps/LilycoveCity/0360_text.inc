	@ data/maps/LilycoveCity/scripts.inc:460 LilycoveCity_Text_MayYouGoingToPokemonLeague
	.globl gText_Rom_1E08C7
gText_Rom_1E08C7: @ 0x081E08C7
	.string "{PLAYER}{KUN}は どうするの?\pポケモンリーグ ちょうせん するの?\pそれとも ポケモンずかん\lかんせい させるの?\pポケモンしょうぶ じゃ まけちゃったけど\nずかんは あたしの ほうが\lさきに かんせい させるんだから!\pじゃね!$"
	.if (. - gText_Rom_1E08C7) > 0x72
	.error "gText_Rom_1E08C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E08C7) < 0x72
	.space 0x72 - (. - gText_Rom_1E08C7)
	.endif
