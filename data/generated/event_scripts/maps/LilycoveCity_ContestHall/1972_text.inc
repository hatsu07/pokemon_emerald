	@ data/maps/LilycoveCity_ContestHall/scripts.inc:409 LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn
	.globl gText_Rom_2081BD
gText_Rom_2081BD: @ 0x082081BD
	.string "ああん みてたら\nあの ポケモン ほしく なっちゃった\lつかまえに いこっと！{EOS}"
	.if (. - gText_Rom_2081BD) > 0x28
	.error "gText_Rom_2081BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2081BD) < 0x28
	.space 0x28 - (. - gText_Rom_2081BD)
	.endif
