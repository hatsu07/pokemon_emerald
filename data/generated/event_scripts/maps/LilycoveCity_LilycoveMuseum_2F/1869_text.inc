	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:272 LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing
	.globl gText_Rom_20684E
gText_Rom_20684E: @ 0x0820684E
	.string "ほう…… ここが さいきん わだいの\nポケモンの えが ある ところか……\pなるほど あたらしい えが いっぱいで\nなかなか おもしろい のう……{EOS}"
	.if (. - gText_Rom_20684E) > 0x4a
	.error "gText_Rom_20684E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20684E) < 0x4a
	.space 0x4a - (. - gText_Rom_20684E)
	.endif
