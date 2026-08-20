	@ data/text/trainers.inc:1721 Route117_Text_DylanIntro (+1 aliases)
	.globl gText_Rom_25DCF7
gText_Rom_25DCF7: @ 0x0825DCF7
	.string "トライアスロンの まっさいちゅう だけど\nさくっと しょうぶ しようじゃ ないか!{EOS}"
	.if (. - gText_Rom_25DCF7) > 0x2a
	.error "gText_Rom_25DCF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCF7) < 0x2a
	.space 0x2a - (. - gText_Rom_25DCF7)
	.endif
