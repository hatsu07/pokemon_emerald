	@ data/maps/LilycoveCity/scripts.inc:451 LilycoveCity_Text_MayYouGoingToCollectBadges
	.globl gText_Rom_1E085C
gText_Rom_1E085C: @ 0x081E085C
	.string "{PLAYER}{KUN}は どうするの?\pあちこちの ジムバッジを あつめて\nポケモンリーグ ちょうせん するの?\pじゃあ あたし {PLAYER}{KUN}が\nバッジを あつめている あいだに\lポケモンずかんを かんせい させちゃお!\pじゃね!$"
	.if (. - gText_Rom_1E085C) > 0x6b
	.error "gText_Rom_1E085C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E085C) < 0x6b
	.space 0x6b - (. - gText_Rom_1E085C)
	.endif
