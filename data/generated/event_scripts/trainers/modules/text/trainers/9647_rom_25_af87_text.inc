	@ data/text/trainers.inc:620 Route109_Text_RickyRematchIntro (+1 aliases)
	.globl gText_Rom_25AF87
gText_Rom_25AF87: @ 0x0825AF87
	.string "おなか へってるけど\nしょうぶ するなら げんき だよ!$"
	.if (. - gText_Rom_25AF87) > 0x1d
	.error "gText_Rom_25AF87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AF87) < 0x1d
	.space 0x1d - (. - gText_Rom_25AF87)
	.endif
