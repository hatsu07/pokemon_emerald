	@ data/text/trainers.inc:2144 Route120_Text_LorenzoIntro (+1 aliases)
	.globl gText_Rom_25EF09
gText_Rom_25EF09: @ 0x0825EF09
	.string "きみの ポケモン\nそうなん しないか みてあげよう!$"
	.if (. - gText_Rom_25EF09) > 0x1b
	.error "gText_Rom_25EF09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EF09) < 0x1b
	.space 0x1b - (. - gText_Rom_25EF09)
	.endif
