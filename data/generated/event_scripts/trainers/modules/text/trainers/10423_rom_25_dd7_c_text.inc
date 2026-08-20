	@ data/text/trainers.inc:1733 Route117_Text_DylanRematchIntro (+1 aliases)
	.globl gText_Rom_25DD7C
gText_Rom_25DD7C: @ 0x0825DD7C
	.string "トライアスロンの まっさいちゅう だけど\nぼくには よゆうが あるからね\lさくっと しょうぶ しようじゃ ないか!{EOS}"
	.if (. - gText_Rom_25DD7C) > 0x3a
	.error "gText_Rom_25DD7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD7C) < 0x3a
	.space 0x3a - (. - gText_Rom_25DD7C)
	.endif
