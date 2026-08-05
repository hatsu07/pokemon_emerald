	@ data/maps/LilycoveCity/scripts.inc:683 LilycoveCity_Text_MuseumSignPlayersExhibit
	.globl gText_Rom_1E1276
gText_Rom_1E1276: @ 0x081E1276
	.string "「ミナモ びじゅつかん」\p{PLAYER}の ポケモン コレクション\nかいさい ちゅう!$"
	.if (. - gText_Rom_1E1276) > 0x27
	.error "gText_Rom_1E1276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1276) < 0x27
	.space 0x27 - (. - gText_Rom_1E1276)
	.endif
