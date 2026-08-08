	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:233 LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting
	.globl gText_Rom_206636
gText_Rom_206636: @ 0x08206636
	.string "おかげさまで えを\nかざる ことが できましたよ!\pあなたの ポケモン なんですって ね!\nほんとうに すばらしい です!\pどうも ありがとう……!$"
	.if (. - gText_Rom_206636) > 0x4b
	.error "gText_Rom_206636 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206636) < 0x4b
	.space 0x4b - (. - gText_Rom_206636)
	.endif
