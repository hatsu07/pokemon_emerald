	@ data/text/trainers.inc:1784 Route117_Text_AnnaNotEnoughMons (+2 aliases)
	.globl gText_Rom_25E033
gText_Rom_25E033: @ 0x0825E033
	.string "ミホ『あたしたちと しょうぶ したいなら\nポケモンを 2ひきは もってきてね!{EOS}"
	.if (. - gText_Rom_25E033) > 0x28
	.error "gText_Rom_25E033 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E033) < 0x28
	.space 0x28 - (. - gText_Rom_25E033)
	.endif
