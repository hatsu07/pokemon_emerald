	@ data/text/trainers.inc:326 Route105_Text_DominikPostBattle
	.globl gText_Rom_25A3AF
gText_Rom_25A3AF: @ 0x0825A3AF
	.string "うみが あおい りゆう!?\pカイナの はくぶつかんで きいたけど\nそんなの わすれちまったよ!{EOS}"
	.if (. - gText_Rom_25A3AF) > 0x30
	.error "gText_Rom_25A3AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A3AF) < 0x30
	.space 0x30 - (. - gText_Rom_25A3AF)
	.endif
