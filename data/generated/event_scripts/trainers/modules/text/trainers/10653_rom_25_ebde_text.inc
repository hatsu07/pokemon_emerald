	@ data/text/trainers.inc:2069 Route119_Text_HideoIntro (+1 aliases)
	.globl gText_Rom_25EBDE
gText_Rom_25EBDE: @ 0x0825EBDE
	.string "きを かくすなら もりのなか!$"
	.if (. - gText_Rom_25EBDE) > 0x10
	.error "gText_Rom_25EBDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBDE) < 0x10
	.space 0x10 - (. - gText_Rom_25EBDE)
	.endif
