	@ data/maps/LilycoveCity/scripts.inc:678 LilycoveCity_Text_MuseumSign
	.globl gText_Rom_1E1254
gText_Rom_1E1254: @ 0x081E1254
	.string "「ミナモ びじゅつかん」\nポケモン めいがてん かいさい ちゅう!{EOS}"
	.if (. - gText_Rom_1E1254) > 0x22
	.error "gText_Rom_1E1254 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1254) < 0x22
	.space 0x22 - (. - gText_Rom_1E1254)
	.endif
