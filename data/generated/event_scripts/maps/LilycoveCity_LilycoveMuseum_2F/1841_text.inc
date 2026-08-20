	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:230 LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit
	.globl gText_Rom_206607
gText_Rom_206607: @ 0x08206607
	.string "この てんじしつ には\nげんだいの いきいき とした ポケモンの\lえを かざりたい ものです{EOS}"
	.if (. - gText_Rom_206607) > 0x2f
	.error "gText_Rom_206607 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206607) < 0x2f
	.space 0x2f - (. - gText_Rom_206607)
	.endif
