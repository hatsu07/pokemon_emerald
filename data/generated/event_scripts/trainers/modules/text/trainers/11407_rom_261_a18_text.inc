	@ data/text/trainers.inc:3188 Route131_Text_IanPostBattle
	.globl gText_Rom_261A18
gText_Rom_261A18: @ 0x08261A18
	.string "カツ『キナギって うみの うえに\nうかんでる まち だろ?\pだから うみが つづくかぎり\nそこは キナギ なんだよ!{EOS}"
	.if (. - gText_Rom_261A18) > 0x3b
	.error "gText_Rom_261A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261A18) < 0x3b
	.space 0x3b - (. - gText_Rom_261A18)
	.endif
