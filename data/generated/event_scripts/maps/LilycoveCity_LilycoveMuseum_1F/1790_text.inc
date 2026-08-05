	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:173 LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205E63
gText_Rom_205E63: @ 0x08205E63
	.string "そうですか……\pそれなのに わざわざ おいで くださって\nこうえい ですよ$"
	.if (. - gText_Rom_205E63) != 0x26
	.error "gText_Rom_205E63 must retain its original byte length"
	.endif
