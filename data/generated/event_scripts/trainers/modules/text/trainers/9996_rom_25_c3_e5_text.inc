	@ data/text/trainers.inc:1112 Route112_Text_TrentRematchIntro (+1 aliases)
	.globl gText_Rom_25C3E5
gText_Rom_25C3E5: @ 0x0825C3E5
	.string "やまのぼりで きたえてるからな\nかなり パワフルだぞ!$"
	.if (. - gText_Rom_25C3E5) > 0x1c
	.error "gText_Rom_25C3E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C3E5) < 0x1c
	.space 0x1c - (. - gText_Rom_25C3E5)
	.endif
