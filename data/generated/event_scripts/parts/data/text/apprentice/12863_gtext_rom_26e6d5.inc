	@ data/text/apprentice.inc:214 gText_ApprenticeLevelModeThanks13
	.globl gText_Rom_26E6D5
gText_Rom_26E6D5: @ 0x0826E6D5
	.string "ん わかった {STR_VAR_1}な!\nじゃあ さっそく いってくる!\pこれからも おれを よろしく たのむよ!\nもう でしいり したんだからな!"
	.byte EOS
	.if (. - gText_Rom_26E6D5) > 0x42
	.error "gText_Rom_26E6D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E6D5) < 0x42
	.space 0x42 - (. - gText_Rom_26E6D5)
	.endif
