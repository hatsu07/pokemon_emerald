	@ data/maps/LilycoveCity/scripts.inc:470 LilycoveCity_Text_MayYouGoingToBattleFrontier
	.globl gText_Rom_1E0939
gText_Rom_1E0939: @ 0x081E0939
	.string "{PLAYER}{KUN}は どうするの?\pバトルフロンティアに ちょうせん する?\nそれとも ずかんを かんせい させる?\pポケモンしょうぶ じゃ まけちゃったけど\nずかんは あたしの ほうが\lさきに かんせい させるんだから!\pじゃね!{EOS}"
	.if (. - gText_Rom_1E0939) > 0x70
	.error "gText_Rom_1E0939 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0939) < 0x70
	.space 0x70 - (. - gText_Rom_1E0939)
	.endif
